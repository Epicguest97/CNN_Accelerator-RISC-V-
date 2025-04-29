// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcnn_accelerator__Syms.h"


VL_ATTR_COLD void Vcnn_accelerator___024root__trace_init_sub__TOP__0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_init_sub__TOP__0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("feature_map_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cnn_accelerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("feature_map_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("conv_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+11,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+12,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+14,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("maxpool_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("feature_map_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+25,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+15,0,"max_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_init_top(Vcnn_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_init_top\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcnn_accelerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcnn_accelerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcnn_accelerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcnn_accelerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_register(Vcnn_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_register\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcnn_accelerator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcnn_accelerator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcnn_accelerator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcnn_accelerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_const_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_const_0\n"); );
    // Init
    Vcnn_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnn_accelerator___024root*>(voidSelf);
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcnn_accelerator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_const_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_const_0_sub_0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+25,(3U),32);
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_full_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_full_0\n"); );
    // Init
    Vcnn_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnn_accelerator___024root*>(voidSelf);
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcnn_accelerator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_full_0_sub_0(Vcnn_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnn_accelerator___024root__trace_full_0_sub_0\n"); );
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[0]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[1]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[2]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[3]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[4]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[5]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[6]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[7]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__kernel[8]),16);
    bufp->fullIData(oldp+10,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__j),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__m),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__n),32);
    bufp->fullSData(oldp+14,(vlSelfRef.cnn_accelerator__DOT__conv_inst__DOT__sum),16);
    bufp->fullSData(oldp+15,(vlSelfRef.cnn_accelerator__DOT__maxpool_inst__DOT__max_val),16);
    bufp->fullSData(oldp+16,(vlSelfRef.feature_map_out[0]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.feature_map_out[1]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.feature_map_out[2]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.feature_map_out[3]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.feature_map_out[4]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.feature_map_out[5]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.feature_map_out[6]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.feature_map_out[7]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.feature_map_out[8]),16);
}
