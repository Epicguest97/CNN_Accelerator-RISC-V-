// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator___024root.h"

VL_ATTR_COLD void Vcnn_accelerator___024root___eval_initial__TOP(Vcnn_accelerator___024root* vlSelf);
VlCoroutine Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__0(Vcnn_accelerator___024root* vlSelf);
VlCoroutine Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__1(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator___024root___eval_initial(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_initial\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcnn_accelerator___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__1(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "top_tb.v", 
                                             9);
        vlSelfRef.top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.top_tb__DOT__clk)));
    }
}

void Vcnn_accelerator___024root___act_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator___024root___eval_act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcnn_accelerator___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcnn_accelerator___024root___act_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___act_sequent__TOP__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT____Vcellinp__uut__reset = 
        (1U & (~ (IData)(vlSelfRef.top_tb__DOT__resetn)));
}

void Vcnn_accelerator___024root___nba_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___nba_sequent__TOP__1(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___nba_sequent__TOP__2(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___nba_sequent__TOP__3(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator___024root___eval_nba(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_nba\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcnn_accelerator___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcnn_accelerator___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcnn_accelerator___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcnn_accelerator___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcnn_accelerator___024root___nba_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___nba_sequent__TOP__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__processing 
        = vlSelfRef.top_tb__DOT__uut__DOT__processing;
}

VL_INLINE_OPT void Vcnn_accelerator___024root___nba_sequent__TOP__1(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___nba_sequent__TOP__1\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__top_tb__DOT__memory__v0 = 0U;
    if (vlSelfRef.top_tb__DOT__done) {
        vlSelfRef.__VdlySet__top_tb__DOT__memory__v0 = 1U;
    }
}

VL_INLINE_OPT void Vcnn_accelerator___024root___nba_sequent__TOP__2(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___nba_sequent__TOP__2\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top_tb__DOT____Vcellinp__uut__reset) {
        vlSelfRef.top_tb__DOT__done = 0U;
        vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__processing = 0U;
    } else if ((1U & (vlSelfRef.top_tb__DOT__memory
                      [0x64U] & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__processing))))) {
        vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__processing = 1U;
        vlSelfRef.top_tb__DOT__done = 0U;
    } else if (vlSelfRef.top_tb__DOT__uut__DOT__processing) {
        vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__processing = 0U;
        vlSelfRef.top_tb__DOT__done = 1U;
    } else {
        vlSelfRef.top_tb__DOT__done = 0U;
    }
    vlSelfRef.top_tb__DOT__uut__DOT__processing = vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__processing;
}

VL_INLINE_OPT void Vcnn_accelerator___024root___nba_sequent__TOP__3(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___nba_sequent__TOP__3\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    top_tb__DOT__uut__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 = 0;
    // Body
    if (vlSelfRef.__VdlySet__top_tb__DOT__memory__v0) {
        vlSelfRef.top_tb__DOT__memory[0x65U] = 1U;
    }
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

void Vcnn_accelerator___024root___timing_resume(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___timing_resume\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcnn_accelerator___024root___eval_triggers__act(Vcnn_accelerator___024root* vlSelf);

bool Vcnn_accelerator___024root___eval_phase__act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_phase__act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcnn_accelerator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcnn_accelerator___024root___timing_resume(vlSelf);
        Vcnn_accelerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcnn_accelerator___024root___eval_phase__nba(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_phase__nba\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcnn_accelerator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__nba(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__act(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnn_accelerator___024root___eval(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcnn_accelerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcnn_accelerator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcnn_accelerator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcnn_accelerator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcnn_accelerator___024root___eval_debug_assertions(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_debug_assertions\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
