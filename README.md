# Asynchronous FIFO

This repository contains a parameterizable SystemVerilog implementation of an Asynchronous FIFO (First-In, First-Out) buffer with independent write and read clock domains, including synchronization logic, SystemVerilog Assertions (SVA) for verification, and a testbench.

## Features

- **Asynchronous Clock Domains:** Safe data transfer between two independent clock domains (`wclk` and `rclk`).
- **Gray Code Synchronization:** Uses 2-stage flip-flop synchronizers with Gray-coded pointers to prevent metastability.
- **Parameterizable:** Custom data width (`DATA_WIDTH`) and address/depth width (`ADDR_WIDTH`).
- **SystemVerilog Assertions:** Functional checks for FIFO full, empty, overflow, and underflow scenarios in `async_fifo_sva.sv`.

## Directory Structure

- `async_fifo.sv` - Top-level module coordinating the FIFO logic.
- `fifomem.sv` - FIFO memory array storage.
- `rptr_empty.sv` - Read pointer generation and empty flag generation.
- `wptr_full.sv` - Write pointer generation and full flag generation.
- `sync_r2w.sv` - Synchronizer for read pointer to write clock domain.
- `sync_w2r.sv` - Synchronizer for write pointer to read clock domain.
- `async_fifo_sva.sv` - SystemVerilog Assertions (SVA) properties.
- `tb_async_fifo.sv` - Testbench validating basic operations and edge cases.
- `scripts/run.sh` - Compilation and simulation wrapper script.

## How to Run

Run the simulation wrapper script to automatically detect your local HDL simulator (VCS, QuestaSim/ModelSim, Xcelium, Vivado, Verilator, or Icarus Verilog), compile all source files, and run the testbench:

```bash
./scripts/run.sh
```
