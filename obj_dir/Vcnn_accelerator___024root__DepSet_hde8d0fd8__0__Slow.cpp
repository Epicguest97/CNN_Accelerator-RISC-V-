// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator___024root.h"

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_static(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_static\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_initial__TOP(Vcnn_accelerator___024root* vlSelf);
VL_ATTR_COLD void Vcnn_accelerator___024root____Vm_traceActivitySetAll(Vcnn_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_initial(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_initial\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcnn_accelerator___024root___eval_initial__TOP(vlSelf);
    Vcnn_accelerator___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_initial__TOP(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_initial__TOP\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[0U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[1U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[2U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[3U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[4U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[5U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[6U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[7U] = 1U;
    vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[8U] = 1U;
}

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_final(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_final\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__stl(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcnn_accelerator___024root___eval_phase__stl(Vcnn_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_settle(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_settle\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcnn_accelerator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/cnn_accelerator.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcnn_accelerator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__stl(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___dump_triggers__stl\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcnn_accelerator___024root___ico_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_stl(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_stl\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcnn_accelerator___024root___ico_sequent__TOP__0(vlSelf);
        Vcnn_accelerator___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_triggers__stl(Vcnn_accelerator___024root* vlSelf);

VL_ATTR_COLD bool Vcnn_accelerator___024root___eval_phase__stl(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_phase__stl\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcnn_accelerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcnn_accelerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__ico(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___dump_triggers__ico\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___dump_triggers__act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__nba(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___dump_triggers__nba\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcnn_accelerator___024root____Vm_traceActivitySetAll(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root____Vm_traceActivitySetAll\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcnn_accelerator___024root___ctor_var_reset(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___ctor_var_reset\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->feature_map_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->feature_map_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->cnn_accelerator__DOT__conv_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->cnn_accelerator__DOT__relu_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT__m = VL_RAND_RESET_I(32);
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT__n = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->cnn_accelerator__DOT__conv_inst__DOT__kernel[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT__sum = VL_RAND_RESET_I(16);
    vlSelf->cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 = VL_RAND_RESET_I(16);
    vlSelf->cnn_accelerator__DOT__maxpool_inst__DOT__max_val = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
