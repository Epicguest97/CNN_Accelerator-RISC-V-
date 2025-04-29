// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCNN_ACCELERATOR__SYMS_H_
#define VERILATED_VCNN_ACCELERATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcnn_accelerator.h"

// INCLUDE MODULE CLASSES
#include "Vcnn_accelerator___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcnn_accelerator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcnn_accelerator* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcnn_accelerator___024root     TOP;

    // CONSTRUCTORS
    Vcnn_accelerator__Syms(VerilatedContext* contextp, const char* namep, Vcnn_accelerator* modelp);
    ~Vcnn_accelerator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
