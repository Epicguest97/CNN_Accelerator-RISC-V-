// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnn_accelerator.h for the primary calling header

#include "Vcnn_accelerator__pch.h"
#include "Vcnn_accelerator__Syms.h"
#include "Vcnn_accelerator___024root.h"

VL_INLINE_OPT VlCoroutine Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__0(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.top_tb__DOT__resetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "top_tb.v", 
                                         63);
    vlSelfRef.top_tb__DOT__resetn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "top_tb.v", 
                                         67);
    VL_WRITEF_NX("Simulation done\n",0);
    VL_FINISH_MT("top_tb.v", 69, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnn_accelerator___024root___dump_triggers__act(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnn_accelerator___024root___eval_triggers__act(Vcnn_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root___eval_triggers__act\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.top_tb__DOT____Vcellinp__uut__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT____Vcellinp__uut__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT____Vcellinp__uut__reset__0 
        = vlSelfRef.top_tb__DOT____Vcellinp__uut__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcnn_accelerator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
