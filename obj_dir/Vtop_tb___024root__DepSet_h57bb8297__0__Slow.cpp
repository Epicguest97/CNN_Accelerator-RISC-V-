// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT____Vcellinp__uut__reset__0 
        = vlSelfRef.top_tb__DOT____Vcellinp__uut__reset;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__clk = 0U;
    vlSelfRef.top_tb__DOT__resetn = 0U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x6d65U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.top_tb__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[0U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[1U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[2U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[3U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[4U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[5U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[6U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[7U] = 1U;
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[8U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/mehul/Downloads/cnn_hardware/sim/top_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 = 0;
    // Body
    vlSelfRef.top_tb__DOT____Vcellinp__uut__reset = 
        (1U & (~ (IData)(vlSelfRef.top_tb__DOT__resetn)));
    vlSelfRef.top_tb__DOT__feature_map_in[0U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [0U]);
    vlSelfRef.top_tb__DOT__feature_map_in[1U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [1U]);
    vlSelfRef.top_tb__DOT__feature_map_in[2U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [2U]);
    vlSelfRef.top_tb__DOT__feature_map_in[3U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [3U]);
    vlSelfRef.top_tb__DOT__feature_map_in[4U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [4U]);
    vlSelfRef.top_tb__DOT__feature_map_in[5U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [5U]);
    vlSelfRef.top_tb__DOT__feature_map_in[6U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [6U]);
    vlSelfRef.top_tb__DOT__feature_map_in[7U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [7U]);
    vlSelfRef.top_tb__DOT__feature_map_in[8U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [8U]);
    vlSelfRef.top_tb__DOT__feature_map_in[9U] = (0xffffU 
                                                 & vlSelfRef.top_tb__DOT__memory
                                                 [9U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xaU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xaU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xbU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xbU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xcU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xcU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xdU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xdU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xeU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xeU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0xfU] = (0xffffU 
                                                   & vlSelfRef.top_tb__DOT__memory
                                                   [0xfU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x10U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x10U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x11U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x11U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x12U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x12U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x13U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x13U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x14U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x14U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x15U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x15U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x16U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x16U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x17U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x17U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x18U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x18U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x19U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x19U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1aU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1aU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1bU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1bU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1cU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1cU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1dU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1dU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1eU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1eU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x1fU] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x1fU]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x20U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x20U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x21U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x21U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x22U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x22U]);
    vlSelfRef.top_tb__DOT__feature_map_in[0x23U] = 
        (0xffffU & vlSelfRef.top_tb__DOT__memory[0x23U]);
    vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), 
                                                        ((IData)(2U) 
                                                         + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [1U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [4U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [7U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(4U) 
                                           + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [0U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [3U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.top_tb__DOT__feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel
                                 [6U])));
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__n = 3U;
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__m = 3U;
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(5U) 
                                           + VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.top_tb__DOT__uut__DOT__conv_out[(0x3fU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(6U), vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__j = 6U;
        vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i);
    }
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[1U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [1U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[2U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [2U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[3U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [3U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[4U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [4U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[5U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [5U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[6U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [6U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[7U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [7U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[8U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [8U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[9U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [9U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xaU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xaU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xbU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xbU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xcU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xcU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xdU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xdU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xeU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xeU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0xfU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0xfU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x10U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x10U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x11U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x11U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x12U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x12U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x13U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x13U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x14U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x14U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x15U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x15U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x16U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x16U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x17U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x17U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x18U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x18U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x19U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x19U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1aU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1aU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1bU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1bU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1cU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1cU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1dU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1dU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1eU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1eU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x1fU] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x1fU];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x20U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x20U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x21U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x21U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x22U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x22U];
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[0x23U] 
        = vlSelfRef.top_tb__DOT__uut__DOT__conv_out
        [0x23U];
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [0U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [0U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[1U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [1U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [1U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[2U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [2U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [2U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[3U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [3U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [3U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[4U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [4U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [4U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[5U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [5U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [5U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[6U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [6U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [6U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[7U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [7U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [7U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[8U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [8U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [8U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[9U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                          [9U])) ? 0U
          : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
         [9U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xaU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xaU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xaU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xbU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xbU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xbU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xcU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xcU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xcU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xdU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xdU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xdU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xeU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xeU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xeU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0xfU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xfU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0xfU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x10U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x10U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x10U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x11U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x11U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x11U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x12U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x12U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x12U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x13U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x13U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x13U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x14U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x14U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x14U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x15U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x15U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x15U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x16U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x16U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x16U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x17U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x17U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x17U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x18U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x18U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x18U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x19U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x19U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x19U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1aU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1aU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1aU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1bU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1bU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1bU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1cU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1cU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1cU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1dU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1dU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1dU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1eU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1eU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1eU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x1fU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1fU]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1fU]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x20U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x20U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x20U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x21U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x21U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x21U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x22U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x22U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x22U]);
    vlSelfRef.top_tb__DOT__uut__DOT__relu_out[0x23U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x23U]))
            ? 0U : vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in
           [0x23U]);
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0U];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [1U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [1U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [6U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [6U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [7U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [7U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[0U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [2U];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [3U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [3U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [8U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [8U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [9U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [9U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[1U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [4U];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [5U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [5U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0xaU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0xaU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0xbU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0xbU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[2U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0xcU];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0xdU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0xdU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x12U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x12U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x13U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x13U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[3U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0xeU];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0xfU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0xfU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x14U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x14U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x15U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x15U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[4U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0x10U];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x11U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x11U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x16U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x16U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x17U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x17U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[5U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0x18U];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x19U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x19U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x1eU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x1eU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x1fU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x1fU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[6U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0x1aU];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x1bU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x1bU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x20U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x20U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x21U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x21U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[7U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.top_tb__DOT__uut__DOT__relu_out
        [0x1cU];
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x1dU] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x1dU] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x22U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x22U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.top_tb__DOT__uut__DOT__relu_out
            [0x23U] > (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.top_tb__DOT__uut__DOT__relu_out
           [0x23U] : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val));
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.top_tb__DOT__feature_map_out[8U] = top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top_tb.__Vcellinp__uut__reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top_tb.__Vcellinp__uut__reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->top_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__resetn = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top_tb__DOT__feature_map_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top_tb__DOT__feature_map_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_tb__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT____Vcellinp__uut__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__conv_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__relu_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_tb__DOT__uut__DOT__processing = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__m = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__n = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT__sum = VL_RAND_RESET_I(16);
    vlSelf->top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 = VL_RAND_RESET_I(16);
    vlSelf->top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__top_tb__DOT__uut__DOT__processing = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__top_tb__DOT__memory__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT____Vcellinp__uut__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
