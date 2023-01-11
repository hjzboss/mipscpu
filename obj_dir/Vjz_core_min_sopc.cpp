// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjz_core_min_sopc.h"
#include "Vjz_core_min_sopc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjz_core_min_sopc::Vjz_core_min_sopc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjz_core_min_sopc__Syms(_vcontextp__, _vcname__, this)}
    , switch_on{vlSymsp->TOP.switch_on}
    , led_out{vlSymsp->TOP.led_out}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjz_core_min_sopc::Vjz_core_min_sopc(const char* _vcname__)
    : Vjz_core_min_sopc(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjz_core_min_sopc::~Vjz_core_min_sopc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjz_core_min_sopc___024root___eval_initial(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___eval_settle(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___eval(Vjz_core_min_sopc___024root* vlSelf);
QData Vjz_core_min_sopc___024root___change_request(Vjz_core_min_sopc___024root* vlSelf);
#ifdef VL_DEBUG
void Vjz_core_min_sopc___024root___eval_debug_assertions(Vjz_core_min_sopc___024root* vlSelf);
#endif  // VL_DEBUG
void Vjz_core_min_sopc___024root___final(Vjz_core_min_sopc___024root* vlSelf);

static void _eval_initial_loop(Vjz_core_min_sopc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjz_core_min_sopc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjz_core_min_sopc___024root___eval_settle(&(vlSymsp->TOP));
        Vjz_core_min_sopc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjz_core_min_sopc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/hjz/mipscpu/JzCore/jz_core_min_sopc.v", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjz_core_min_sopc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjz_core_min_sopc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjz_core_min_sopc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjz_core_min_sopc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjz_core_min_sopc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjz_core_min_sopc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/hjz/mipscpu/JzCore/jz_core_min_sopc.v", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjz_core_min_sopc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjz_core_min_sopc::final() {
    Vjz_core_min_sopc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjz_core_min_sopc::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjz_core_min_sopc::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vjz_core_min_sopc___024root__traceInitTop(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjz_core_min_sopc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjz_core_min_sopc___024root*>(voidSelf);
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vjz_core_min_sopc___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vjz_core_min_sopc___024root__traceRegister(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep);

void Vjz_core_min_sopc::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vjz_core_min_sopc___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
