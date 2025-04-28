// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator__Syms.h"
#include "Vcnn_accelerator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__ico(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnn_accelerator___024root___eval_triggers__ico(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_triggers__ico\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcnn_accelerator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__act(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnn_accelerator___024root___eval_triggers__act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_triggers__act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcnn_accelerator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
