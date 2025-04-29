// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__clk;
    CData/*0:0*/ top_tb__DOT____Vcellinp__uut__reset;
    CData/*0:0*/ top_tb__DOT__resetn;
    CData/*0:0*/ top_tb__DOT__done;
    CData/*0:0*/ top_tb__DOT__uut__DOT__processing;
    CData/*0:0*/ __Vdly__top_tb__DOT__uut__DOT__processing;
    CData/*0:0*/ __VdlySet__top_tb__DOT__memory__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT____Vcellinp__uut__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT__sum;
    SData/*15:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
    SData/*15:0*/ top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val;
    IData/*31:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT__i;
    IData/*31:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT__j;
    IData/*31:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT__m;
    IData/*31:0*/ top_tb__DOT__uut__DOT__conv_inst__DOT__n;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 36> top_tb__DOT__feature_map_in;
    VlUnpacked<SData/*15:0*/, 9> top_tb__DOT__feature_map_out;
    VlUnpacked<IData/*31:0*/, 256> top_tb__DOT__memory;
    VlUnpacked<SData/*15:0*/, 36> top_tb__DOT__uut__DOT__conv_out;
    VlUnpacked<SData/*15:0*/, 36> top_tb__DOT__uut__DOT__relu_out;
    VlUnpacked<SData/*15:0*/, 36> top_tb__DOT__uut__DOT____Vcellinp__relu_inst__feature_map_in;
    VlUnpacked<SData/*15:0*/, 9> top_tb__DOT__uut__DOT__conv_inst__DOT__kernel;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
