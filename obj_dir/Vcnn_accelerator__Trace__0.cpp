// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcnn_accelerator__Syms.h"


void Vcnn_accelerator___024root__trace_chg_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcnn_accelerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_chg_0\n"); );
    // Init
    Vcnn_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnn_accelerator___024root*>(voidSelf);
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcnn_accelerator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcnn_accelerator___024root__trace_chg_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_chg_0_sub_0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[0]),16);
        bufp->chgSData(oldp+1,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[1]),16);
        bufp->chgSData(oldp+2,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[2]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[3]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[4]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[5]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[6]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[7]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[8]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+9,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__j),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__m),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__n),32);
        bufp->chgSData(oldp+13,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum),16);
        bufp->chgSData(oldp+14,(vlSelfRef.cnn_accelerator__DOT__maxpool_inst__DOT__max_val),16);
    }
    bufp->chgSData(oldp+15,(vlSelfRef.feature_map_out[0]),16);
    bufp->chgSData(oldp+16,(vlSelfRef.feature_map_out[1]),16);
    bufp->chgSData(oldp+17,(vlSelfRef.feature_map_out[2]),16);
    bufp->chgSData(oldp+18,(vlSelfRef.feature_map_out[3]),16);
    bufp->chgSData(oldp+19,(vlSelfRef.feature_map_out[4]),16);
    bufp->chgSData(oldp+20,(vlSelfRef.feature_map_out[5]),16);
    bufp->chgSData(oldp+21,(vlSelfRef.feature_map_out[6]),16);
    bufp->chgSData(oldp+22,(vlSelfRef.feature_map_out[7]),16);
    bufp->chgSData(oldp+23,(vlSelfRef.feature_map_out[8]),16);
}

void Vcnn_accelerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_cleanup\n"); );
    // Init
    Vcnn_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnn_accelerator___024root*>(voidSelf);
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
