// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcnn_accelerator__pch.h"

//============================================================
// Constructors

Vcnn_accelerator::Vcnn_accelerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcnn_accelerator__Syms(contextp(), _vcname__, this)}
    , feature_map_in{vlSymsp->TOP.feature_map_in}
    , feature_map_out{vlSymsp->TOP.feature_map_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcnn_accelerator::Vcnn_accelerator(const char* _vcname__)
    : Vcnn_accelerator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcnn_accelerator::~Vcnn_accelerator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcnn_accelerator___024root___eval_debug_assertions(Vcnn_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
void Vcnn_accelerator___024root___eval_static(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___eval_initial(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___eval_settle(Vcnn_accelerator___024root* vlSelf);
void Vcnn_accelerator___024root___eval(Vcnn_accelerator___024root* vlSelf);

void Vcnn_accelerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcnn_accelerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcnn_accelerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcnn_accelerator___024root___eval_static(&(vlSymsp->TOP));
        Vcnn_accelerator___024root___eval_initial(&(vlSymsp->TOP));
        Vcnn_accelerator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcnn_accelerator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcnn_accelerator::eventsPending() { return false; }

uint64_t Vcnn_accelerator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcnn_accelerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcnn_accelerator___024root___eval_final(Vcnn_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vcnn_accelerator::final() {
    Vcnn_accelerator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcnn_accelerator::hierName() const { return vlSymsp->name(); }
const char* Vcnn_accelerator::modelName() const { return "Vcnn_accelerator"; }
unsigned Vcnn_accelerator::threads() const { return 1; }
void Vcnn_accelerator::prepareClone() const { contextp()->prepareClone(); }
void Vcnn_accelerator::atClone() const {
    contextp()->threadPoolpOnClone();
}
