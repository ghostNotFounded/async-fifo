#!/usr/bin/env bash
#
# Compile and run script for async_FIFO testbench
# 

set -e

# Get project root directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"

# Define source files in compilation order
SRC_FILES=(
    "${PROJECT_DIR}/fifomem.sv"
    "${PROJECT_DIR}/rptr_empty.sv"
    "${PROJECT_DIR}/sync_r2w.sv"
    "${PROJECT_DIR}/sync_w2r.sv"
    "${PROJECT_DIR}/wptr_full.sv"
    "${PROJECT_DIR}/async_fifo.sv"
    "${PROJECT_DIR}/async_fifo_sva.sv"
    "${PROJECT_DIR}/tb_async_fifo.sv"
)

# Output directory for simulation binaries/logs
SIM_DIR="${PROJECT_DIR}/sim"
mkdir -p "${SIM_DIR}"
cd "${SIM_DIR}"

echo "==> Detecting HDL Simulator..."

# 1. Check for Synopsys VCS
if command -v vcs &> /dev/null; then
    echo "==> Using Synopsys VCS..."
    vcs -sverilog -debug_access+all "${SRC_FILES[@]}" -top tb_top -o simv
    echo "==> Running simulation..."
    ./simv

# 2. Check for Siemens/Mentor QuestaSim / ModelSim
elif command -v vsim &> /dev/null; then
    echo "==> Using QuestaSim/ModelSim..."
    vlib work
    vlog -sv "${SRC_FILES[@]}"
    echo "==> Running simulation..."
    vsim -c -do "run -all; quit" tb_top

# 3. Check for Cadence Xcelium
elif command -v xrun &> /dev/null; then
    echo "==> Using Cadence Xcelium (xrun)..."
    xrun -sv "${SRC_FILES[@]}" -top tb_top

# 4. Check for Xilinx Vivado Simulator
elif command -v xelab &> /dev/null; then
    echo "==> Using Xilinx Vivado Simulator (xsim)..."
    xvlog -sv "${SRC_FILES[@]}"
    xelab -top tb_top -snapshot tb_top_snapshot
    echo "==> Running simulation..."
    xsim tb_top_snapshot -runall

# 5. Check for Verilator
elif command -v verilator &> /dev/null; then
    echo "==> Using Verilator (Timing mode)..."
    echo "Note: Verilator has limited support for SystemVerilog OOP classes/mailboxes."
    verilator --binary --timing -sv -top tb_top -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC "${SRC_FILES[@]}" -o simv
    echo "==> Running simulation..."
    ./obj_dir/simv

# 6. Check for Icarus Verilog
elif command -v iverilog &> /dev/null; then
    echo "==> Using Icarus Verilog..."
    echo "Warning: Icarus Verilog does not support SystemVerilog classes/randomization used in this testbench."
    iverilog -g2012 -o tb_top.vvp "${SRC_FILES[@]}"
    echo "==> Running simulation..."
    vvp tb_top.vvp

else
    echo "Error: No supported simulator (vcs, vsim, xrun, xelab, verilator, iverilog) was found in your PATH."
    echo "Please ensure your simulator is installed and its bin directory is added to your PATH."
    exit 1
fi
