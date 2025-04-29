// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator__Syms.h"
#include "Vcnn_accelerator___024root.h"

void Vcnn_accelerator___024root___ctor_var_reset(Vcnn_accelerator___024root* vlSelf);

Vcnn_accelerator___024root::Vcnn_accelerator___024root(Vcnn_accelerator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcnn_accelerator___024root___ctor_var_reset(this);
}

void Vcnn_accelerator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcnn_accelerator___024root::~Vcnn_accelerator___024root() {
}
