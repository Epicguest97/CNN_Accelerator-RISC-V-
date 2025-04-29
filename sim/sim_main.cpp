#include "Vtop_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtop_tb *top = new Vtop_tb;

    VerilatedVcdC *tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    for (int i = 0; i < 2000; i++) {
        top->clk = 0; top->eval(); tfp->dump(i*10);
        top->clk = 1; top->eval(); tfp->dump(i*10 + 5);
    }

    tfp->close();
    delete top;
    return 0;
}
