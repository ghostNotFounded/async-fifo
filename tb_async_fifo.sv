interface fifo_if #(parameter int DATA_WIDTH = 8);
    logic wclk;
    logic wrst_n;
    logic winc;
    logic [DATA_WIDTH-1:0] wdata;
    logic wfull;

    logic rclk;
    logic rrst_n;
    logic rinc;
    logic [DATA_WIDTH-1:0] rdata;
    logic rempty;
endinterface

class fifo_transaction #(parameter int DATA_WIDTH = 8);
    rand logic [DATA_WIDTH-1:0] data;
    rand int delay;

    constraint c_delay { delay inside {[0:4]}; }
endclass

class fifo_driver #(parameter int DATA_WIDTH = 8);
    virtual fifo_if#(DATA_WIDTH) vif;
    mailbox #(fifo_transaction#(DATA_WIDTH)) w_mbx;
    mailbox #(fifo_transaction#(DATA_WIDTH)) r_mbx;

    function new(virtual fifo_if#(DATA_WIDTH) vif, mailbox #(fifo_transaction#(DATA_WIDTH)) w_mbx, mailbox #(fifo_transaction#(DATA_WIDTH)) r_mbx);
        this.vif = vif;
        this.w_mbx = w_mbx;
        this.r_mbx = r_mbx;
    endfunction

    task run();
        fork
            drive_write();
            drive_read();
        join_none
    endtask

    task drive_write();
        vif.winc <= 1'b0;
        vif.wdata <= '0;
        $display("[%0d] drive_write: waiting for reset", $time);
        @(posedge vif.wrst_n);
        $display("[%0d] drive_write: reset released", $time);
        forever begin
            fifo_transaction#(DATA_WIDTH) tr;
            w_mbx.get(tr);
            $display("[%0d] drive_write: got transaction, delay=%0d, data=%h", $time, tr.delay, tr.data);
            repeat (tr.delay) @(posedge vif.wclk);
            #1;
            while (tb_top.dut.wfull) begin
                $display("[%0d] drive_write: FIFO full, waiting... wfull=%b, wptr=%h, wq2_rptr=%h", 
                         $time, tb_top.dut.wfull, tb_top.dut.wptr, tb_top.dut.wq2_rptr);
                @(posedge vif.wclk);
                #1;
            end
            vif.winc <= 1'b1;
            vif.wdata <= tr.data;
            @(posedge vif.wclk);
            vif.winc <= 1'b0;
            $display("[%0d] drive_write: wrote data=%h", $time, tr.data);
        end
    endtask

    task drive_read();
        vif.rinc <= 1'b0;
        $display("[%0d] drive_read: waiting for reset", $time);
        @(posedge vif.rrst_n);
        $display("[%0d] drive_read: reset released", $time);
        forever begin
            fifo_transaction#(DATA_WIDTH) tr;
            r_mbx.get(tr);
            $display("[%0d] drive_read: got transaction, delay=%0d", $time, tr.delay);
            repeat (tr.delay) @(posedge vif.rclk);
            #1;
            while (tb_top.dut.rempty) begin
                $display("[%0d] drive_read: FIFO empty, waiting...", $time);
                @(posedge vif.rclk);
                #1;
            end
            vif.rinc <= 1'b1;
            @(posedge vif.rclk);
            vif.rinc <= 1'b0;
            $display("[%0d] drive_read: read transaction complete", $time);
        end
    endtask
endclass

class fifo_monitor #(parameter int DATA_WIDTH = 8);
    virtual fifo_if#(DATA_WIDTH) vif;
    mailbox #(logic [DATA_WIDTH-1:0]) mon_w_mbx;
    mailbox #(logic [DATA_WIDTH-1:0]) mon_r_mbx;

    function new(virtual fifo_if#(DATA_WIDTH) vif, mailbox #(logic [DATA_WIDTH-1:0]) mon_w_mbx, mailbox #(logic [DATA_WIDTH-1:0]) mon_r_mbx);
        this.vif = vif;
        this.mon_w_mbx = mon_w_mbx;
        this.mon_r_mbx = mon_r_mbx;
    endfunction

    task run();
        fork
            monitor_write();
            monitor_read();
        join_none
    endtask

    task monitor_write();
        @(posedge vif.wrst_n);
        forever begin
            @(posedge vif.wclk);
            if (vif.winc && !vif.wfull) begin
                mon_w_mbx.put(vif.wdata);
            end
        end
    endtask

    task monitor_read();
        @(posedge vif.rrst_n);
        forever begin
            @(posedge vif.rclk);
            if (vif.rinc && !vif.rempty) begin
                mon_r_mbx.put(vif.rdata);
            end
        end
    endtask
endclass

class fifo_scoreboard #(parameter int DATA_WIDTH = 8);
    mailbox #(logic [DATA_WIDTH-1:0]) mon_w_mbx;
    mailbox #(logic [DATA_WIDTH-1:0]) mon_r_mbx;

    logic [DATA_WIDTH-1:0] ref_queue[$];
    int match_count = 0;
    int error_count = 0;

    function new(mailbox #(logic [DATA_WIDTH-1:0]) mon_w_mbx, mailbox #(logic [DATA_WIDTH-1:0]) mon_r_mbx);
        this.mon_w_mbx = mon_w_mbx;
        this.mon_r_mbx = mon_r_mbx;
    endfunction

    task run();
        fork
            collect_writes();
            collect_reads();
        join_none
    endtask

    task collect_writes();
        forever begin
            logic [DATA_WIDTH-1:0] wdata;
            mon_w_mbx.get(wdata);
            ref_queue.push_back(wdata);
        end
    endtask

    task collect_reads();
        forever begin
            logic [DATA_WIDTH-1:0] rdata;
            logic [DATA_WIDTH-1:0] expected_data;
            mon_r_mbx.get(rdata);
            if (ref_queue.size() > 0) begin
                expected_data = ref_queue.pop_front();
                if (rdata === expected_data) begin
                    match_count++;
                end else begin
                    error_count++;
                    $error("Mismatch! Expected: %h, Got: %h", expected_data, rdata);
                end
            end else begin
                error_count++;
                $error("Read occurred but reference queue is empty! Got: %h", rdata);
            end
        end
    endtask
endclass

class fifo_environment #(parameter int DATA_WIDTH = 8);
    virtual fifo_if#(DATA_WIDTH) vif;

    fifo_driver#(DATA_WIDTH) drv;
    fifo_monitor#(DATA_WIDTH) mon;
    fifo_scoreboard#(DATA_WIDTH) sb;

    mailbox #(fifo_transaction#(DATA_WIDTH)) drv_w_mbx;
    mailbox #(fifo_transaction#(DATA_WIDTH)) drv_r_mbx;
    mailbox #(logic [DATA_WIDTH-1:0]) mon_w_mbx;
    mailbox #(logic [DATA_WIDTH-1:0]) mon_r_mbx;

    function new(virtual fifo_if#(DATA_WIDTH) vif);
        this.vif = vif;
        drv_w_mbx = new();
        drv_r_mbx = new();
        mon_w_mbx = new();
        mon_r_mbx = new();

        drv = new(vif, drv_w_mbx, drv_r_mbx);
        mon = new(vif, mon_w_mbx, mon_r_mbx);
        sb  = new(mon_w_mbx, mon_r_mbx);
    endfunction

    task run(int num_transactions);
        drv.run();
        mon.run();
        sb.run();

        fork
            generator_write(num_transactions);
            generator_read(num_transactions);
        join

        wait(sb.match_count + sb.error_count == num_transactions);

        repeat (20) @(posedge vif.rclk);
        $display("Test complete. Matches: %0d, Errors: %0d", sb.match_count, sb.error_count);
    endtask

    task generator_write(int num);
        repeat (num) begin
            fifo_transaction#(DATA_WIDTH) tr = new();
            if (!tr.randomize()) $fatal("Randomization failed");
            drv_w_mbx.put(tr);
        end
    endtask

    task generator_read(int num);
        repeat (num) begin
            fifo_transaction#(DATA_WIDTH) tr = new();
            if (!tr.randomize()) $fatal("Randomization failed");
            drv_r_mbx.put(tr);
        end
    endtask
endclass

module tb_top;
    localparam int DATA_WIDTH = 8;
    localparam int ADDR_WIDTH = 4;

    logic wclk = 0;
    logic rclk = 0;
    logic wrst_n = 0;
    logic rrst_n = 0;

    always #5 wclk = ~wclk;
    always #7 rclk = ~rclk;

    fifo_if #(DATA_WIDTH) vif();

    assign vif.wclk = wclk;
    assign vif.rclk = rclk;
    assign vif.wrst_n = wrst_n;
    assign vif.rrst_n = rrst_n;

    async_fifo #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (
        .wclk   (vif.wclk),
        .wrst_n (vif.wrst_n),
        .winc   (vif.winc),
        .wdata  (vif.wdata),
        .wfull  (vif.wfull),
        .rclk   (vif.rclk),
        .rrst_n (vif.rrst_n),
        .rinc   (vif.rinc),
        .rdata  (vif.rdata),
        .rempty (vif.rempty)
    );

    initial begin
        fifo_environment#(DATA_WIDTH) env;
        env = new(vif);

        fork
            env.run(100);
            begin
                #20;
                wrst_n = 1;
                rrst_n = 1;
            end
        join
        $finish;
    end
endmodule
