module async_fifo #(
    parameter int DATA_WIDTH = 8,
    parameter int ADDR_WIDTH = 4
)(
    input  logic                  wclk,
    input  logic                  wrst_n,
    input  logic                  winc,
    input  logic [DATA_WIDTH-1:0] wdata,
    output logic                  wfull,

    input  logic                  rclk,
    input  logic                  rrst_n,
    input  logic                  rinc,
    output logic [DATA_WIDTH-1:0] rdata,
    output logic                  rempty
);

    localparam int DEPTH = 1 << ADDR_WIDTH;

    logic [ADDR_WIDTH:0] wptr, rptr;
    logic [ADDR_WIDTH:0] wq2_rptr, rq2_wptr;
    logic [ADDR_WIDTH-1:0] waddr, raddr;

    fifomem #(DATA_WIDTH, ADDR_WIDTH) u_fifomem (
        .wclk   (wclk),
        .wclken (winc && !wfull),
        .waddr  (waddr),
        .wdata  (wdata),
        .raddr  (raddr),
        .rdata  (rdata)
    );

    rptr_empty #(ADDR_WIDTH) u_rptr_empty (
        .rclk     (rclk),
        .rrst_n   (rrst_n),
        .rinc     (rinc),
        .rq2_wptr (rq2_wptr),
        .rempty   (rempty),
        .raddr    (raddr),
        .rptr     (rptr)
    );

    wptr_full #(ADDR_WIDTH) u_wptr_full (
        .wclk     (wclk),
        .wrst_n   (wrst_n),
        .winc     (winc),
        .wq2_rptr (wq2_rptr),
        .wfull    (wfull),
        .waddr    (waddr),
        .wptr     (wptr)
    );

    sync_w2r #(ADDR_WIDTH) u_sync_w2r (
        .rclk   (rclk),
        .rrst_n (rrst_n),
        .wptr   (wptr),
        .rq2_wptr(rq2_wptr)
    );

    sync_r2w #(ADDR_WIDTH) u_sync_r2w (
        .wclk   (wclk),
        .wrst_n (wrst_n),
        .rptr   (rptr),
        .wq2_rptr(wq2_rptr)
    );

endmodule
