module rptr_empty #(
    parameter int ADDR_WIDTH = 4
)(
    input  logic                rclk,
    input  logic                rrst_n,
    input  logic                rinc,
    input  logic [ADDR_WIDTH:0] rq2_wptr,
    output logic                rempty,
    output logic [ADDR_WIDTH-1:0] raddr,
    output logic [ADDR_WIDTH:0] rptr
);

    logic [ADDR_WIDTH:0] rbin;
    logic [ADDR_WIDTH:0] rgraynext, rbinnext;
    logic                rempty_val;

    always_ff @(posedge rclk or negedge rrst_n) begin
        if (!rrst_n) begin
            rbin <= '0;
            rptr <= '0;
        end else begin
            rbin <= rbinnext;
            rptr <= rgraynext;
        end
    end

    assign raddr = rbin[ADDR_WIDTH-1:0];

    assign rbinnext   = rbin + (rinc & ~rempty);
    assign rgraynext  = (rbinnext >> 1) ^ rbinnext;

    assign rempty_val = (rgraynext == rq2_wptr);

    always_ff @(posedge rclk or negedge rrst_n) begin
        if (!rrst_n) begin
            rempty <= 1'b1;
        end else begin
            rempty <= rempty_val;
        end
    end

endmodule
