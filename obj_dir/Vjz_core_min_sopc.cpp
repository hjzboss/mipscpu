// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjz_core_min_sopc.h"
#include "Vjz_core_min_sopc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjz_core_min_sopc::Vjz_core_min_sopc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjz_core_min_sopc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vjz_core_min_sopc::Vjz_core_min_sopc(const char* _vcname__)
    : Vjz_core_min_sopc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjz_core_min_sopc::~Vjz_core_min_sopc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjz_core_min_sopc___024root___eval_debug_assertions(Vjz_core_min_sopc___024root* vlSelf);
#endif  // VL_DEBUG
void Vjz_core_min_sopc___024root___eval_static(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___eval_initial(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___eval_settle(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___eval(Vjz_core_min_sopc___024root* vlSelf);

void Vjz_core_min_sopc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjz_core_min_sopc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjz_core_min_sopc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vjz_core_min_sopc___024root___eval_static(&(vlSymsp->TOP));
        Vjz_core_min_sopc___024root___eval_initial(&(vlSymsp->TOP));
        Vjz_core_min_sopc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vjz_core_min_sopc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vjz_core_min_sopc::eventsPending() { return false; }

uint64_t Vjz_core_min_sopc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vjz_core_min_sopc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vjz_core_min_sopc___024root___eval_final(Vjz_core_min_sopc___024root* vlSelf);

VL_ATTR_COLD void Vjz_core_min_sopc::final() {
    Vjz_core_min_sopc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjz_core_min_sopc::hierName() const { return vlSymsp->name(); }
const char* Vjz_core_min_sopc::modelName() const { return "Vjz_core_min_sopc"; }
unsigned Vjz_core_min_sopc::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vjz_core_min_sopc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vjz_core_min_sopc___024root__trace_init_top(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjz_core_min_sopc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjz_core_min_sopc___024root*>(voidSelf);
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vjz_core_min_sopc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vjz_core_min_sopc___024root__trace_register(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vjz_core_min_sopc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vjz_core_min_sopc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vjz_core_min_sopc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
