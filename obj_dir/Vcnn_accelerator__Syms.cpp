// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator.h"
#include "Vcnn_accelerator___024root.h"

// FUNCTIONS
Vcnn_accelerator__Syms::~Vcnn_accelerator__Syms()
{
}

Vcnn_accelerator__Syms::Vcnn_accelerator__Syms(VerilatedContext* contextp, const char* namep, Vcnn_accelerator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(59);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
