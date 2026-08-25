module async_fifo_sva #(
    parameter int DATA_WIDTH = 8,
    parameter int ADDR_WIDTH = 4
)(
    input logic                  wclk,
    input logic                  wrst_n,
    input logic                  winc,
    input logic                  wfull,
    input logic [ADDR_WIDTH:0]   wptr,

    input logic                  rclk,
    input logic                  rrst_n,
    input logic                  rinc,
    input logic                  rempty,
    input logic [ADDR_WIDTH:0]   rptr
);

    // 1. No Overflow
    ap_no_overflow: assert property (
        @(posedge wclk) disable iff (!wrst_n)
        winc |-> !wfull
    ) else $error("SVA Error: Write increment occurred while FIFO is full!");

    // 2. No Underflow
    ap_no_underflow: assert property (
        @(posedge rclk) disable iff (!rrst_n)
        rinc |-> !rempty
    ) else $error("SVA Error: Read increment occurred while FIFO is empty!");

    // 3. Flag Consistency
    ap_flag_consistency: assert property (
        @(posedge wclk) disable iff (!wrst_n)
        !(wfull && rempty)
    ) else $error("SVA Error: FIFO cannot be both FULL and EMPTY simultaneously!");

    // 4. Gray-Code Single-Bit-Transition Invariant
    ap_gray_wptr_transition: assert property (
        @(posedge wclk) disable iff (!wrst_n)
        $onehot0(wptr ^ $past(wptr))
    ) else $error("SVA Error: Write pointer Gray code transition changed more than 1 bit!");

    ap_gray_rptr_transition: assert property (
        @(posedge rclk) disable iff (!rrst_n)
        $onehot0(rptr ^ $past(rptr))
    ) else $error("SVA Error: Read pointer Gray code transition changed more than 1 bit!");

endmodule

// Bind the SVA module to the async_fifo module
bind async_fifo async_fifo_sva #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
) u_async_fifo_sva (
    .wclk(wclk),
    .wrst_n(wrst_n),
    .winc(winc),
    .wfull(wfull),
    .wptr(wptr),
    .rclk(rclk),
    .rrst_n(rrst_n),
    .rinc(rinc),
    .rempty(rempty),
    .rptr(rptr)
);
