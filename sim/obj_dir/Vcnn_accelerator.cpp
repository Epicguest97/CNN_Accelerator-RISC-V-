// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcnn_accelerator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcnn_accelerator::Vcnn_accelerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcnn_accelerator__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
    vlSymsp->__Vm_activity = true;
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

void Vcnn_accelerator::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcnn_accelerator::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcnn_accelerator::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcnn_accelerator::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

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
std::unique_ptr<VerilatedTraceConfig> Vcnn_accelerator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcnn_accelerator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcnn_accelerator___024root__trace_init_top(Vcnn_accelerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcnn_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnn_accelerator___024root*>(voidSelf);
    Vcnn_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcnn_accelerator___024root__trace_decl_types(tracep);
    Vcnn_accelerator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcnn_accelerator___024root__trace_register(Vcnn_accelerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcnn_accelerator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcnn_accelerator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcnn_accelerator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
