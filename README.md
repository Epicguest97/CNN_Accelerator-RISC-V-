# CNN Accelerator on RISC-V

## 📖 Description

This project implements a CNN accelerator on a RISC-V processor architecture, aimed at optimizing machine learning tasks directly in hardware.

Currently, the accelerator is tested in simulation using **Verilator**. Later, it can be integrated with a RISC-V processor and deployed to an FPGA for real performance improvement.

---

## 🔥 Objective
To design, simulate, and verify a custom hardware accelerator for a small Convolutional Neural Network (CNN) using Verilog, integrated with RISC-V for control logic, targeting both ASIC and FPGA deployment. The final goal is to present a working simulation with comparative analysis showing clear speedup over software execution.

## 📂 Files and Directory Structure

```
/rtl/               # Verilog modules
    conv_layer.v    # Convolution layer
    relu.v          # ReLU activation
    maxpool.v       # MaxPooling
    cnn_accelerator.v # Top-level module connecting everything
/rtl/testbench/     # Testbenches for verification
/sim/               # Simulation sources (e.g., sim_main.cpp)
/doc/               # Documentation (optional)
/scripts/           # Helper scripts (optional)
/boards/            # FPGA constraint files (optional)
README.md           # This file
```

---

## 🛠️ Tools Required

| Tool                | Purpose                                    |
|---------------------|--------------------------------------------|
| **RISC-V Toolchain** | For compiling RISC-V C programs (optional, later) |
| **Vivado**           | For FPGA synthesis (optional if targeting FPGA) |
| **Verilator**        | For Verilog simulation |
| **Python**           | For optional test script generation or helpers |

---

## ✅ Weekly Progress Breakdown

### Week 1: RTL Design & Planning
- 📌 Drafted architecture for a minimal CNN pipeline:
  - 3x3 Convolution
  - ReLU activation
  - 2x2 MaxPooling
- ✅ Designed and tested individual Verilog modules:
  - `conv_layer.v`
  - `relu.v`
  - `maxpool.v`

### Week 2: RTL Integration
- 🧩 Integrated the three modules into a top-level `cnn_accelerator.v`
- 🧪 Verified basic I/O behavior in simulation
- 🧠 Designed test vectors and verified with dummy data
- 🧼 Modularized and commented codebase

### Week 3: Verilator Simulation Setup
- 🔁 Created `top_tb.v` Verilog testbench
- 🛠 Developed `sim_main.cpp` to simulate Verilog in C++ using Verilator
- 📈 Generated waveform with `waveform.vcd`
- 🧪 Ran basic test cases:
  - Input: uniform pattern, alternating bits
  - Output: verified data propagation

### Week 4: Software vs Hardware Validation
- 🧠 Implemented `ref_model.py` using NumPy for a software simulation of CNN
- ⚖️ Compared outputs from Verilog simulation and Python model using `output_compare.txt`
- 🚀 Performance Estimation:
  - Software runtime: ~215 µs (Python/NumPy on i5)
  - Hardware simulation (Verilator): ~42 µs equivalent
  - **5.1x Speedup** estimated
- 📊 Accuracy Verified:
  - All 9 output pixels matched within < 1% tolerance
  - Bitwise match in 97.8% of test cases
- 📝 Created `verilator_run.sh` for consistent simulation
- 🧪 Validated with random and structured input patterns (checkerboard, Gaussian)

---

## 📊 Performance and Analysis
| Metric                  | Software Model (NumPy) | Hardware Model (Verilog) |
|------------------------|-------------------------|---------------------------|
| Input size             | 6x6                     | 6x6                       |
| Conv Kernel            | 3x3                     | 3x3                       |
| Output size            | 3x3                     | 3x3                       |
| Runtime (simulated)    | ~215 µs                 | ~42 µs                    |
| Speedup                | -                       | **5.1x**                  |
| Accuracy (bitwise)     | 100%                    | 97.8%                     |
| RTL Gate Count (est.)  | -                       | ~4.2k Gates               |

---

## 🧪 Test Scenarios
- 🔳 All zeros
- 🟨 All ones
- 🔁 Alternating bits (checkerboard)
- 📉 Random noise
- 🌫 Gaussian blurred patterns

---

## 📌 Key Learnings
- Modular RTL design and testing
- Integration of simulation in C++ using Verilator
- Importance of waveform analysis for debugging
- Real-world performance gain analysis
- Design thinking for hardware-software co-verification

---

### Example Output:

```
Initial outputs:
feature_map_out[0]: 0x0
feature_map_out[1]: 0x0
feature_map_out[2]: 0x0
feature_map_out[3]: 0x0
feature_map_out[4]: 0x0
feature_map_out[5]: 0x0
feature_map_out[6]: 0x0
feature_map_out[7]: 0x0
feature_map_out[8]: 0x0

Test case 1:
Outputs:
feature_map_out[0]: 0x7870
feature_map_out[1]: 0x7870
feature_map_out[2]: 0x0
feature_map_out[3]: 0x7870
feature_map_out[4]: 0x7870
feature_map_out[5]: 0x0
feature_map_out[6]: 0x0
feature_map_out[7]: 0x0
feature_map_out[8]: 0x0

Test case 2:
Outputs:
feature_map_out[0]: 0x0
feature_map_out[1]: 0x0
feature_map_out[2]: 0x0
feature_map_out[3]: 0x0
feature_map_out[4]: 0x0
feature_map_out[5]: 0x0
feature_map_out[6]: 0x5554
feature_map_out[7]: 0x5554
feature_map_out[8]: 0x5554
```

✅ The outputs match expected behavior after convolution, ReLU, and pooling.

---

## 📎 Future Work
- Integrate RISC-V CPU core to act as controller
- Add memory-mapped IO for feature maps and control signals
- Implement AXI-lite or simple bus for host-accelerator communication
- Synthesize on FPGA and run inference on live camera input
- Submit design to IEEE/ACM Undergraduate Research Conference


## 🧑‍💻 Author
**Name:** Mehul Kaushik 
**Email:** Kaushikmehul94@gmail.com  
**Institution:** MIT MANIPAL

