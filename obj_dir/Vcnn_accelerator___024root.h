// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcnn_accelerator.h for the primary calling header

#ifndef VERILATED_VCNN_ACCELERATOR___024ROOT_H_
#define VERILATED_VCNN_ACCELERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vcnn_accelerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcnn_accelerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ cnn_accelerator__DOT__conv_inst__DOT__sum;
    SData/*15:0*/ cnn_accelerator__DOT__conv_inst__DOT____Vlvbound_h916ac358__0;
    IData/*31:0*/ __VactIterCount;
    VL_IN16(feature_map_in[36],15,0);
    VL_OUT16(feature_map_out[9],15,0);
    VlUnpacked<SData/*15:0*/, 36> cnn_accelerator__DOT__conv_out;
    VlUnpacked<SData/*15:0*/, 36> cnn_accelerator__DOT__relu_out;
    VlUnpacked<SData/*15:0*/, 36> cnn_accelerator__DOT____Vcellinp__relu_inst__feature_map_in;
    VlUnpacked<SData/*15:0*/, 9> cnn_accelerator__DOT__conv_inst__DOT__kernel;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcnn_accelerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcnn_accelerator___024root(Vcnn_accelerator__Syms* symsp, const char* v__name);
    ~Vcnn_accelerator___024root();
    VL_UNCOPYABLE(Vcnn_accelerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
