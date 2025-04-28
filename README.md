# CNN Accelerator on RISC-V

## Description

This project implements a CNN accelerator on a RISC-V processor architecture, aimed at optimizing machine learning tasks in hardware.

## Completed Basic CNN Accelerator Design

- Implemented a basic CNN accelerator in Verilog, which includes:
  - **Convolution Layer** (3x3 kernel applied to 8x8 image, stride=1, no padding)
  - **ReLU Activation** (Sets negative values to 0)
  - **MaxPooling** (2x2 pooling reducing 6x6 to 3x3 feature map)

## Files

- `/rtl/conv_layer.v` - Convolution layer implementation.
- `/rtl/relu.v` - ReLU activation implementation.
- `/rtl/maxpool.v` - MaxPooling implementation.
- `/rtl/cnn_accelerator.v` - Top-level CNN accelerator that combines convolution, ReLU, and MaxPooling.
- `/rtl/testbench/` - Testbenches to verify functionality.

## Tools Required

- **RISC-V Toolchain**: For compiling RISC-V C programs.
- **Vivado** (optional): If you plan to synthesize hardware and load it onto an FPGA (only needed if you want to go the FPGA route).
- **Python**: For any helpers or scripts (optional).
- Verilog simulation tools like ModelSim or Verilator.

