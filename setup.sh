#!/bin/bash

# Create base directory
mkdir -p cnn-accelerator-on-riscv

# Navigate into it
cd cnn-accelerator-on-riscv || exit

# Create subdirectories
mkdir -p rtl riscv scripts doc boards

# Create an empty README.md with a basic header
echo "# CNN Accelerator on RISC-V" > README.md
echo "Project directory structure and initial setup." >> README.md

# Done
echo "Project structure created successfully."
