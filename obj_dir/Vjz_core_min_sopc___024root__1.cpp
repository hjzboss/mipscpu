// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjz_core_min_sopc.h for the primary calling header

#include "Vjz_core_min_sopc___024root.h"
#include "Vjz_core_min_sopc__Syms.h"

void Vjz_core_min_sopc___024root___combo__TOP__3(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___sequent__TOP__4(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___combo__TOP__6(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___sequent__TOP__7(Vjz_core_min_sopc___024root* vlSelf);
void Vjz_core_min_sopc___024root___combo__TOP__8(Vjz_core_min_sopc___024root* vlSelf);

void Vjz_core_min_sopc___024root___eval(Vjz_core_min_sopc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjz_core_min_sopc___024root___eval\n"); );
    // Body
    Vjz_core_min_sopc___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vjz_core_min_sopc___024root___sequent__TOP__4(vlSelf);
    }
    Vjz_core_min_sopc___024root___combo__TOP__6(vlSelf);
    if (((IData)(vlSelf->__VinpClk__TOP__jz_core_min_sopc__DOT__clk_o) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__jz_core_min_sopc__DOT__clk_o)))) {
        Vjz_core_min_sopc___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vjz_core_min_sopc___024root___combo__TOP__8(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__jz_core_min_sopc__DOT__clk_o 
        = vlSelf->__VinpClk__TOP__jz_core_min_sopc__DOT__clk_o;
    vlSelf->__VinpClk__TOP__jz_core_min_sopc__DOT__clk_o 
        = vlSelf->jz_core_min_sopc__DOT__clk_o;
}

QData Vjz_core_min_sopc___024root___change_request_1(Vjz_core_min_sopc___024root* vlSelf);

VL_INLINE_OPT QData Vjz_core_min_sopc___024root___change_request(Vjz_core_min_sopc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjz_core_min_sopc___024root___change_request\n"); );
    // Body
    return (Vjz_core_min_sopc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjz_core_min_sopc___024root___change_request_1(Vjz_core_min_sopc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjz_core_min_sopc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->jz_core_min_sopc__DOT__clk_o ^ vlSelf->__Vchglast__TOP__jz_core_min_sopc__DOT__clk_o));
    VL_DEBUG_IF( if(__req && ((vlSelf->jz_core_min_sopc__DOT__clk_o ^ vlSelf->__Vchglast__TOP__jz_core_min_sopc__DOT__clk_o))) VL_DBG_MSGF("        CHANGE: /home/hjz/mipscpu/JzCore/jz_core_min_sopc.v:22: jz_core_min_sopc.clk_o\n"); );
    // Final
    vlSelf->__Vchglast__TOP__jz_core_min_sopc__DOT__clk_o 
        = vlSelf->jz_core_min_sopc__DOT__clk_o;
    return __req;
}

#ifdef VL_DEBUG
void Vjz_core_min_sopc___024root___eval_debug_assertions(Vjz_core_min_sopc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjz_core_min_sopc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->switch_on & 0xf000U))) {
        Verilated::overWidthError("switch_on");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
