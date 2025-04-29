// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator___024root.h"

void Vcnn_accelerator___024root___ico_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator___024root___eval_ico(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_ico\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcnn_accelerator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcnn_accelerator___024root___ico_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___ico_sequent__TOP__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cnn_accelerator__DOT__conv_inst__DOT__i;
    cnn_accelerator__DOT__conv_inst__DOT__i = 0;
    SData/*15:0*/ cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val = 0;
    SData/*15:0*/ cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 = 0;
    // Body
    cnn_accelerator__DOT__conv_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), 
                                                        ((IData)(1U) 
                                                         + cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & VL_MULS_III(32, (IData)(6U), 
                                                        ((IData)(2U) 
                                                         + cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [1U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [2U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [4U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [5U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [7U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [8U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [1U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [4U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [7U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(4U) 
                                           + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum = 0U;
        if (VL_GTS_III(32, 6U, cnn_accelerator__DOT__conv_inst__DOT__i)) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [0U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(1U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(1U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(1U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [3U])));
        }
        if (VL_GTS_III(32, 6U, ((IData)(2U) + cnn_accelerator__DOT__conv_inst__DOT__i))) {
            vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum 
                = (0xffffU & ((IData)(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum) 
                              + (((0x23U >= (0x3fU 
                                             & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(6U), 
                                                              ((IData)(2U) 
                                                               + cnn_accelerator__DOT__conv_inst__DOT__i)))))
                                   ? vlSelfRef.feature_map_in
                                  [(0x3fU & ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(6U), 
                                                           ((IData)(2U) 
                                                            + cnn_accelerator__DOT__conv_inst__DOT__i))))]
                                   : 0U) * vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel
                                 [6U])));
        }
        vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0 
            = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum;
        if (VL_LIKELY(((0x23U >= (0x3fU & ((IData)(5U) 
                                           + VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i))))))) {
            vlSelfRef.cnn_accelerator__DOT__conv_out[(0x3fU 
                                                      & ((IData)(5U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(6U), cnn_accelerator__DOT__conv_inst__DOT__i)))] 
                = vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
        }
        cnn_accelerator__DOT__conv_inst__DOT__i = ((IData)(1U) 
                                                   + cnn_accelerator__DOT__conv_inst__DOT__i);
    }
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[1U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[1U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[2U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[2U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[3U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[3U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[4U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[4U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[5U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[5U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[6U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[6U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[7U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[7U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[8U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[8U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[9U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[9U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xaU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xaU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xbU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xbU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xcU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xcU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xdU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xdU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xeU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xeU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0xfU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0xfU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x10U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x10U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x11U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x11U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x12U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x12U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x13U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x13U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x14U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x14U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x15U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x15U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x16U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x16U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x17U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x17U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x18U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x18U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x19U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x19U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1aU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1aU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1bU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1bU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1cU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1cU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1dU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1dU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1eU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1eU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x1fU] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x1fU];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x20U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x20U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x21U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x21U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x22U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x22U];
    vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in[0x23U] 
        = vlSelfRef.cnn_accelerator__DOT__conv_out[0x23U];
    vlSelfRef.cnn_accelerator__DOT__relu_out[0U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [0U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [0U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[1U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [1U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [1U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[2U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [2U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [2U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[3U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [3U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [3U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[4U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [4U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [4U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[5U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [5U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [5U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[6U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [6U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [6U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[7U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [7U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [7U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[8U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [8U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [8U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[9U] = 
        (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                          [9U])) ? 0U
          : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
         [9U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xaU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xaU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xaU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xbU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xbU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xbU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xcU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xcU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xcU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xdU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xdU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xdU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xeU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xeU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xeU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0xfU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0xfU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0xfU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x10U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x10U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x10U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x11U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x11U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x11U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x12U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x12U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x12U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x13U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x13U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x13U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x14U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x14U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x14U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x15U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x15U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x15U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x16U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x16U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x16U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x17U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x17U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x17U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x18U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x18U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x18U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x19U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x19U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x19U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1aU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1aU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1aU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1bU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1bU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1bU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1cU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1cU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1cU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1dU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1dU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1dU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1eU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1eU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1eU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x1fU] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x1fU]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x1fU]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x20U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x20U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x20U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x21U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x21U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x21U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x22U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x22U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x22U]);
    vlSelfRef.cnn_accelerator__DOT__relu_out[0x23U] 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                            vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
                                            [0x23U]))
            ? 0U : vlSelfRef.cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in
           [0x23U]);
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0U];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [1U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [1U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [6U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [6U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [7U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [7U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[0U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[2U];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [3U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [3U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [8U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [8U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [9U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [9U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[1U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[4U];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [5U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [5U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0xaU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0xaU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0xbU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0xbU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[2U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0xcU];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0xdU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0xdU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x12U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x12U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x13U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x13U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[3U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0xeU];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0xfU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0xfU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x14U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x14U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x15U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x15U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[4U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0x10U];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x11U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x11U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x16U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x16U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x17U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x17U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[5U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0x18U];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x19U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x19U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x1eU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x1eU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x1fU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x1fU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[6U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0x1aU];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x1bU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x1bU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x20U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x20U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x21U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x21U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[7U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = vlSelfRef.cnn_accelerator__DOT__relu_out[0x1cU];
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x1dU] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x1dU] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x22U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x22U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT__max_val 
        = ((vlSelfRef.cnn_accelerator__DOT__relu_out
            [0x23U] > (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val))
            ? vlSelfRef.cnn_accelerator__DOT__relu_out
           [0x23U] : (IData)(cnn_accelerator__DOT__maxpool_inst__DOT__max_val));
    cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0 
        = cnn_accelerator__DOT__maxpool_inst__DOT__max_val;
    vlSelfRef.feature_map_out[8U] = cnn_accelerator__DOT__maxpool_inst__DOT____Vlvbound_h016f65b6__0;
}

void Vcnn_accelerator___024root___eval_triggers__ico(Vcnn_accelerator___024root* vlSelf);

bool Vcnn_accelerator___024root___eval_phase__ico(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_phase__ico\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcnn_accelerator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcnn_accelerator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcnn_accelerator___024root___eval_act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcnn_accelerator___024root___nba_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator___024root___eval_nba(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_nba\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcnn_accelerator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcnn_accelerator___024root___nba_sequent__TOP__0(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___nba_sequent__TOP__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__cnn_accelerator__DOT__processing;
    __Vdly__cnn_accelerator__DOT__processing = 0;
    // Body
    __Vdly__cnn_accelerator__DOT__processing = vlSelfRef.cnn_accelerator__DOT__processing;
    if (vlSelfRef.reset) {
        vlSelfRef.done = 0U;
        __Vdly__cnn_accelerator__DOT__processing = 0U;
    } else if (((IData)(vlSelfRef.start) & (~ (IData)(vlSelfRef.cnn_accelerator__DOT__processing)))) {
        __Vdly__cnn_accelerator__DOT__processing = 1U;
        vlSelfRef.done = 0U;
    } else if (vlSelfRef.cnn_accelerator__DOT__processing) {
        __Vdly__cnn_accelerator__DOT__processing = 0U;
        vlSelfRef.done = 1U;
    } else {
        vlSelfRef.done = 0U;
    }
    vlSelfRef.cnn_accelerator__DOT__processing = __Vdly__cnn_accelerator__DOT__processing;
}

void Vcnn_accelerator___024root___eval_triggers__act(Vcnn_accelerator___024root* vlSelf);

bool Vcnn_accelerator___024root___eval_phase__act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_phase__act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcnn_accelerator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
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
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__ico(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcnn_accelerator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/cnn_accelerator.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcnn_accelerator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcnn_accelerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/cnn_accelerator.v", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("rtl/cnn_accelerator.v", 3, "", "Active region did not converge.");
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
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
