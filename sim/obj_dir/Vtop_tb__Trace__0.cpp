// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[0]),16);
        bufp->chgSData(oldp+1,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[1]),16);
        bufp->chgSData(oldp+2,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[2]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[3]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[4]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[5]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[6]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[7]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__kernel[8]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+9,(vlSelfRef.top_tb__DOT__feature_map_out[0]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.top_tb__DOT__feature_map_out[1]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.top_tb__DOT__feature_map_out[2]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.top_tb__DOT__feature_map_out[3]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.top_tb__DOT__feature_map_out[4]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.top_tb__DOT__feature_map_out[5]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.top_tb__DOT__feature_map_out[6]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.top_tb__DOT__feature_map_out[7]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.top_tb__DOT__feature_map_out[8]),16);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__i),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__j),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__m),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__n),32);
        bufp->chgSData(oldp+22,(vlSelfRef.top_tb__DOT__uut__DOT__conv_inst__DOT__sum),16);
        bufp->chgSData(oldp+23,(vlSelfRef.top_tb__DOT__uut__DOT__maxpool_inst__DOT__max_val),16);
    }
    bufp->chgBit(oldp+24,(vlSelfRef.top_tb__DOT__clk));
    bufp->chgBit(oldp+25,(vlSelfRef.top_tb__DOT__resetn));
    bufp->chgBit(oldp+26,((1U & vlSelfRef.top_tb__DOT__memory
                           [0x64U])));
    bufp->chgBit(oldp+27,(vlSelfRef.top_tb__DOT__done));
    bufp->chgBit(oldp+28,(vlSelfRef.top_tb__DOT____Vcellinp__uut__reset));
    bufp->chgBit(oldp+29,(vlSelfRef.top_tb__DOT__uut__DOT__processing));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
