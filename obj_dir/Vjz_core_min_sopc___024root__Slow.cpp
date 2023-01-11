// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjz_core_min_sopc.h for the primary calling header

#include "Vjz_core_min_sopc___024root.h"
#include "Vjz_core_min_sopc__Syms.h"

//==========


void Vjz_core_min_sopc___024root___ctor_var_reset(Vjz_core_min_sopc___024root* vlSelf);

Vjz_core_min_sopc___024root::Vjz_core_min_sopc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjz_core_min_sopc___024root___ctor_var_reset(this);
}

void Vjz_core_min_sopc___024root___configure_coverage(Vjz_core_min_sopc___024root* vlSelf, bool first);

void Vjz_core_min_sopc___024root::__Vconfigure(Vjz_core_min_sopc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vjz_core_min_sopc___024root___configure_coverage(this, first);
}

Vjz_core_min_sopc___024root::~Vjz_core_min_sopc___024root() {
}

// Coverage
void Vjz_core_min_sopc___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vjz_core_min_sopc___024root___settle__TOP__1(Vjz_core_min_sopc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjz_core_min_sopc___024root___settle__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1075]);
    ++(vlSymsp->__Vcoverage[1083]);
    ++(vlSymsp->__Vcoverage[1091]);
    ++(vlSymsp->__Vcoverage[1102]);
    ++(vlSymsp->__Vcoverage[1108]);
    ++(vlSymsp->__Vcoverage[1282]);
    ++(vlSymsp->__Vcoverage[1289]);
    ++(vlSymsp->__Vcoverage[1295]);
    ++(vlSymsp->__Vcoverage[1306]);
    ++(vlSymsp->__Vcoverage[1314]);
    ++(vlSymsp->__Vcoverage[1322]);
    ++(vlSymsp->__Vcoverage[1326]);
    if ((1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT____Vtogcov__zero32)) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT____Vtogcov__zero32 
            = (0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT____Vtogcov__zero32);
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_eq_reg2) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_eq_reg2))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_eq_reg2 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_eq_reg2;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm = 0U;
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1074]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1073]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1082]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1090]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1101]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1107]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1281]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1280]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1288]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1287]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1304]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1305]);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[1313]);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__clk 
            = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__rst 
            = vlSelf->rst;
    }
    if ((1U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xffeU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (1U & (IData)(vlSelf->switch_on)));
    }
    if ((2U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xffdU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (2U & (IData)(vlSelf->switch_on)));
    }
    if ((4U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xffbU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (4U & (IData)(vlSelf->switch_on)));
    }
    if ((8U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xff7U & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (8U & (IData)(vlSelf->switch_on)));
    }
    if ((0x10U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xfefU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x10U & (IData)(vlSelf->switch_on)));
    }
    if ((0x20U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xfdfU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x20U & (IData)(vlSelf->switch_on)));
    }
    if ((0x40U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xfbfU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x40U & (IData)(vlSelf->switch_on)));
    }
    if ((0x80U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xf7fU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x80U & (IData)(vlSelf->switch_on)));
    }
    if ((0x100U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xeffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x100U & (IData)(vlSelf->switch_on)));
    }
    if ((0x200U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xdffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x200U & (IData)(vlSelf->switch_on)));
    }
    if ((0x400U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0xbffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x400U & (IData)(vlSelf->switch_on)));
    }
    if ((0x800U & ((IData)(vlSelf->switch_on) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on 
            = ((0x7ffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__switch_on)) 
               | (0x800U & (IData)(vlSelf->switch_on)));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__clk_o) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__clk_o))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__clk_o 
            = vlSelf->jz_core_min_sopc__DOT__clk_o;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
               ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffffeU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
               ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffffdU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
               ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffffbU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
               ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffff7U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                  ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffffefU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                  ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffffdfU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                  ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffffbfU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                  ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffff7fU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                   ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffeffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                   ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffdffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                   ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffffbffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                   ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffff7ffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                    ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffefffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                    ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffdfffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                    ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fffbfffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                    ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fff7fffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                     ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffeffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                     ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffdffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                     ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ffbffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                     ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7ff7ffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                      ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fefffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                      ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fdfffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                      ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7fbfffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                      ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7f7fffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                       ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7effffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                       ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7dffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                       ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x7bffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                       ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x77ffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                        ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x6fffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                        ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x5fffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count 
                        ^ vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count 
            = ((0x3fffffffU & vlSelf->jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count));
    }
    if ((1U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))) {
        if ((4U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))) {
            ++(vlSymsp->__Vcoverage[1293]);
        }
    }
    if ((1U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))) {
        ++(vlSymsp->__Vcoverage[1292]);
    }
    if ((1U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))) {
        if ((4U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))) {
            ++(vlSymsp->__Vcoverage[1294]);
        }
    }
    if (vlSelf->rst) {
        if ((0xe3U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
                ++(vlSymsp->__Vcoverage[1302]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0xe3U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            if ((0xebU != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
                ++(vlSymsp->__Vcoverage[1303]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            ++(vlSymsp->__Vcoverage[1301]);
        }
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_i))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_i 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i;
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_i))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_i 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i;
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i 
            = ((6U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i 
            = ((5U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i 
            = ((3U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i)));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xfeU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xfdU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xfbU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xf7U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xefU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((0x20U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xdfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (0x20U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((0x40U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0xbfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (0x40U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((0x80U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i 
            = ((0x7fU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i)) 
               | (0x80U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i)));
    }
    if ((2U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (2U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((4U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (4U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((8U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (8U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x10U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x20U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x40U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x80U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x80U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x100U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x100U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x200U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x200U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x400U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x400U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x800U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x800U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x1000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x1000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x2000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x2000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x4000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x4000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x8000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x8000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x10000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x20000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x40000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x80000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x80000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x100000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x100000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x200000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x200000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x400000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x400000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x800000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x800000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x1000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x1000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x2000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x2000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x4000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x4000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x8000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x8000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x10000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x20000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40000000U & (((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x40000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if (((((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8) 
               | (0x80000000U & ((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((2U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (2U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((4U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (4U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((8U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (8U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x10U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x20U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x40U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x80U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x100U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x200U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x400U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x800U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x1000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x2000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x4000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x8000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x10000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x20000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x40000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x80000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x100000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x200000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x400000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x800000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x1000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x2000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x4000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x8000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x10000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x20000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x40000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if (((((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i) 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4) 
               | (0x80000000U & ((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc 
          ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__inst_addr) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i));
    }
    if ((1U & ((~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i) 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 1U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (2U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                            >> 1U)) << 1U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 2U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (4U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                            >> 2U)) << 2U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 3U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (8U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                            >> 3U)) << 3U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 4U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x10U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                               >> 4U)) << 4U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 5U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x20U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                               >> 5U)) << 5U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 6U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x40U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                               >> 6U)) << 6U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 7U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x80U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                               >> 7U)) << 7U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 8U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x100U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                >> 8U)) << 8U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 9U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                              >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x200U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                >> 9U)) << 9U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xaU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x400U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xbU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x800U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xcU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x1000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                 >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xdU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x2000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                 >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xeU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x4000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                 >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0xfU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x8000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                 >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x10U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x10000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                  >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x11U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x20000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                  >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x12U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x40000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                  >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x13U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x80000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                  >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x14U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x100000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                   >> 0x14U)) << 0x14U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x15U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x200000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                   >> 0x15U)) << 0x15U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x16U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x400000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                   >> 0x16U)) << 0x16U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x17U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x800000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                   >> 0x17U)) << 0x17U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x18U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x1000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                    >> 0x18U)) << 0x18U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x19U)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x2000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                    >> 0x19U)) << 0x19U)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1aU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x4000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                    >> 0x1aU)) << 0x1aU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1bU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x8000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                    >> 0x1bU)) << 0x1bU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1cU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x10000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                     >> 0x1cU)) << 0x1cU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1dU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x20000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                     >> 0x1dU)) << 0x1dU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1eU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | (0x40000000U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                     >> 0x1eU)) << 0x1eU)));
    }
    if ((1U & ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   >> 0x1fU)) ^ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
                                 >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not) 
               | ((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                      >> 0x1fU)) << 0x1fU));
    }
    if (vlSelf->rst) {
        if ((0xe3U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
                vlSelf->led_out = ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                                    >> 0x1fU) ? (0xfffU 
                                                 & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i)
                                    : 0U);
            }
        }
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
        = (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
           + (((- (IData)((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i 
                                 >> 0xfU)))) << 0x10U) 
              | (0xffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i)));
    if (vlSelf->rst) {
        if ((0xe3U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
                vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                    = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i;
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__mem_data_i = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we = 0U;
        if ((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we = 0U;
        } else if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we = 1U;
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__mem_ce_i = 0U;
        if ((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__mem_ce_i = 1U;
        } else if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__mem_ce_i 
                = (1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                            >> 0x1fU)));
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__mem_ce_i = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__mem_addr_i = 0U;
        if ((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i;
        } else if ((0xebU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i;
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__mem_addr_i = 0U;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i));
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i)
            : 0U);
    if (vlSelf->jz_core_min_sopc__DOT__rom_ce) {
        ++(vlSymsp->__Vcoverage[1325]);
    }
    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__rom_ce)))) {
        ++(vlSymsp->__Vcoverage[1324]);
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((0x10U 
                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            ++(vlSymsp->__Vcoverage[1062]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                ++(vlSymsp->__Vcoverage[1072]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    ++(vlSymsp->__Vcoverage[1072]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                ++(vlSymsp->__Vcoverage[1072]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            ++(vlSymsp->__Vcoverage[1072]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                ++(vlSymsp->__Vcoverage[1070]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                ++(vlSymsp->__Vcoverage[1072]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                ++(vlSymsp->__Vcoverage[1069]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U != (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    ++(vlSymsp->__Vcoverage[1064]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 5U)))) {
                                        ++(vlSymsp->__Vcoverage[1062]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                ++(vlSymsp->__Vcoverage[1072]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                            ++(vlSymsp->__Vcoverage[1062]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            ++(vlSymsp->__Vcoverage[1072]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                            ++(vlSymsp->__Vcoverage[1062]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        ++(vlSymsp->__Vcoverage[1072]);
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                ++(vlSymsp->__Vcoverage[1072]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                ++(vlSymsp->__Vcoverage[1066]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                ++(vlSymsp->__Vcoverage[1072]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                ++(vlSymsp->__Vcoverage[1071]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                if (
                                                    (4U 
                                                     & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                    ++(vlSymsp->__Vcoverage[1062]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            ++(vlSymsp->__Vcoverage[1072]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        ++(vlSymsp->__Vcoverage[1072]);
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                ++(vlSymsp->__Vcoverage[1072]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                            ++(vlSymsp->__Vcoverage[1059]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                             >> 1U)))) {
                                                        ++(vlSymsp->__Vcoverage[1062]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                        ++(vlSymsp->__Vcoverage[1062]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                            ++(vlSymsp->__Vcoverage[1057]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                            ++(vlSymsp->__Vcoverage[1058]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                            ++(vlSymsp->__Vcoverage[1061]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                                            ++(vlSymsp->__Vcoverage[1062]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                        if ((1U & (~ 
                                                   (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                            ++(vlSymsp->__Vcoverage[1060]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U)))) {
                                    ++(vlSymsp->__Vcoverage[1063]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                ++(vlSymsp->__Vcoverage[1065]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((0x25U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            if ((0x24U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                ++(vlSymsp->__Vcoverage[1279]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0x25U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            ++(vlSymsp->__Vcoverage[1277]);
        }
    }
    if (vlSelf->rst) {
        if ((0x25U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            if ((0x24U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                ++(vlSymsp->__Vcoverage[1278]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0x2aU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            ++(vlSymsp->__Vcoverage[1283]);
        }
    }
    if (vlSelf->rst) {
        if ((0x2aU != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            if ((0x20U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                ++(vlSymsp->__Vcoverage[1284]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0x2aU != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            if ((0x20U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                if ((0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                    ++(vlSymsp->__Vcoverage[1285]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((0x2aU != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
            if ((0x20U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                if ((0x22U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) {
                    ++(vlSymsp->__Vcoverage[1286]);
                }
            }
        }
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__rom_ce) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__rom_ce))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__rom_ce 
            = vlSelf->jz_core_min_sopc__DOT__rom_ce;
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wreg_i))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wreg_i 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i;
    }
    if (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pre_inst_is_load))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pre_inst_is_load 
            = (0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i)));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 0U;
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 0U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 0U;
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1aU)))) {
                    if ((0U == (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 1U)))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 1U;
                                    }
                                } else if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 1U;
                                    }
                                } else if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o = 0U;
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xfeU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xfdU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xfbU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xf7U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xefU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((0x20U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xdfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (0x20U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((0x40U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0xbfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (0x40U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if ((0x80U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i 
            = ((0x7fU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i)) 
               | (0x80U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 0U;
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 7U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 7U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 6U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 6U;
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1aU)))) {
                    if ((0U == (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 4U;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 1U)))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 1U;
                                    }
                                } else if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 4U;
                                    }
                                } else if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 4U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o = 0U;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o 
            = (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        >> 0xbU));
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o 
                                    = (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                >> 0x10U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0U;
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0xebU;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0xe3U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0x51U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0x4fU;
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1aU)))) {
                    if ((0U == (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0x2aU;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 1U)))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o 
                                            = ((1U 
                                                & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)
                                                ? 0x25U
                                                : 0x24U);
                                    }
                                } else if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0x22U;
                                    }
                                } else if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0x20U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o = 0U;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
        = (((- (IData)((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0xfU)))) << 0x12U) 
           | (0x3fffcU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          << 2U)));
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 0U;
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 0U;
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1aU)))) {
                    if ((0U == (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 1U)))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                                    }
                                } else if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                                    }
                                } else if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 0U;
        if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                             >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                        }
                    }
                } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                  >> 0x1aU)))) {
                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 0U;
                    }
                } else if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                     >> 0x1aU)))) {
                    if ((0U == (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 4U)))) {
                                if ((8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 2U)))) {
                                        if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                            if ((1U 
                                                 & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                  >> 1U)))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                                    }
                                } else if ((2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                                    if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                                    }
                                } else if ((1U & (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i))) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr 
            = (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        >> 0x10U));
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr 
            = (0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                        >> 0x15U));
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
            = ((0x25U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                ? (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                   | vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i)
                : ((0x24U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                    ? (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i)
                    : 0U));
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr = 0U;
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr = 0U;
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout = 0U;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
        = (((0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
            | (0x2aU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)))
            ? ((IData)(1U) + (~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i))
            : vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i);
    if ((1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm)) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm));
    }
    if ((1U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xffeU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (1U & (IData)(vlSelf->led_out)));
    }
    if ((2U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xffdU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (2U & (IData)(vlSelf->led_out)));
    }
    if ((4U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xffbU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (4U & (IData)(vlSelf->led_out)));
    }
    if ((8U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xff7U & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (8U & (IData)(vlSelf->led_out)));
    }
    if ((0x10U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xfefU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x10U & (IData)(vlSelf->led_out)));
    }
    if ((0x20U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xfdfU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x20U & (IData)(vlSelf->led_out)));
    }
    if ((0x40U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xfbfU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x40U & (IData)(vlSelf->led_out)));
    }
    if ((0x80U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xf7fU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x80U & (IData)(vlSelf->led_out)));
    }
    if ((0x100U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xeffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x100U & (IData)(vlSelf->led_out)));
    }
    if ((0x200U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xdffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x200U & (IData)(vlSelf->led_out)));
    }
    if ((0x400U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0xbffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x400U & (IData)(vlSelf->led_out)));
    }
    if ((0x800U & ((IData)(vlSelf->led_out) ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out 
            = ((0x7ffU & (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__led_out)) 
               | (0x800U & (IData)(vlSelf->led_out)));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__mem_data_i 
          ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_i));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_we_i))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_we_i 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we;
    }
    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__mem_ce_i)))) {
        ++(vlSymsp->__Vcoverage[1321]);
    }
    if (vlSelf->jz_core_min_sopc__DOT__mem_ce_i) {
        if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we) {
            ++(vlSymsp->__Vcoverage[1320]);
        }
    }
    if (vlSelf->jz_core_min_sopc__DOT__mem_ce_i) {
        if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we)))) {
            ++(vlSymsp->__Vcoverage[1319]);
        }
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__mem_ce_i) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_ce_i))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_ce_i 
            = vlSelf->jz_core_min_sopc__DOT__mem_ce_i;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__mem_addr_i 
          ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_addr_i) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__mem_addr_i));
    }
    vlSelf->jz_core_min_sopc__DOT__mem_data_o = ((IData)(vlSelf->jz_core_min_sopc__DOT__mem_ce_i)
                                                  ? 
                                                 ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we)
                                                   ? 0U
                                                   : 
                                                  ((0xfeU 
                                                    >= 
                                                    (0xffU 
                                                     & vlSelf->jz_core_min_sopc__DOT__mem_addr_i))
                                                    ? 
                                                   vlSelf->jz_core_min_sopc__DOT__data_ram0__DOT__data_mem
                                                   [
                                                   (0xffU 
                                                    & vlSelf->jz_core_min_sopc__DOT__mem_addr_i)]
                                                    : 0U))
                                                  : 0U);
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_o))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_o 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o;
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o)));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wreg_o))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wreg_o 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o;
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o 
            = ((6U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o 
            = ((5U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o 
            = ((3U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o)));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o)));
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xfeU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xfdU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xfbU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xf7U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xefU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((0x20U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xdfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (0x20U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((0x40U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0xbfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (0x40U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((0x80U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o 
            = ((0x7fU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o)) 
               | (0x80U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o)));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_read))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_read 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read;
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_read))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_read 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read;
    }
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) {
            ++(vlSymsp->__Vcoverage[1106]);
        }
    }
    if (vlSelf->rst) {
        if ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))) {
            ++(vlSymsp->__Vcoverage[1089]);
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) {
            if (((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
                   == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                  & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                 & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))) {
                ++(vlSymsp->__Vcoverage[1105]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) {
            if ((1U & (~ ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
                if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) {
                    ++(vlSymsp->__Vcoverage[1103]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) {
            if ((1U & (~ ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
                if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)))) {
                    ++(vlSymsp->__Vcoverage[1104]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate = 0U;
    if (vlSelf->rst) {
        if ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))) {
            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate = 1U;
        }
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
        = ((IData)(vlSelf->rst) ? ((0U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))
                                    ? 0U : (((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr) 
                                               == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                                              & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                                             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))
                                             ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i
                                             : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)
                                                 ? 
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs
                                                [vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr]
                                                 : 0U)))
            : 0U);
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) {
            ++(vlSymsp->__Vcoverage[1100]);
        }
    }
    if (vlSelf->rst) {
        if ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))) {
            ++(vlSymsp->__Vcoverage[1081]);
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) {
            if (((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
                   == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                  & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                 & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))) {
                ++(vlSymsp->__Vcoverage[1099]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) {
            if ((1U & (~ ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
                if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) {
                    ++(vlSymsp->__Vcoverage[1097]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) {
            if ((1U & (~ ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
                if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)))) {
                    ++(vlSymsp->__Vcoverage[1098]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr 
            = ((0x1eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr 
            = ((0x1dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr 
            = ((0x1bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr 
            = ((0x17U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr 
            = ((0xfU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate = 0U;
    if (vlSelf->rst) {
        if ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))) {
            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate = 1U;
        }
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
        = ((IData)(vlSelf->rst) ? ((0U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))
                                    ? 0U : (((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr) 
                                               == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i)) 
                                              & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i)) 
                                             & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))
                                             ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i
                                             : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)
                                                 ? 
                                                vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs
                                                [vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr]
                                                 : 0U)))
            : 0U);
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
        = (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
           + vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux);
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
               ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                  ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                   ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                    ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                     ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                      ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                       ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__mem_data_o 
                        ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__mem_data_o 
          ^ vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT____Vtogcov__mem_data_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__mem_data_o));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i;
        if ((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i))) {
            vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                = ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i 
                    >> 0x1fU) ? (IData)(vlSelf->switch_on)
                    : vlSelf->jz_core_min_sopc__DOT__mem_data_o);
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o = 0U;
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg2_loadrelate))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg2_loadrelate 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg1_loadrelate))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg1_loadrelate 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id 
        = ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate) 
           | (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate));
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data));
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum 
        = (1U & ((((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                       >> 0x1fU)) & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux 
                                        >> 0x1fU))) 
                  & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                     >> 0x1fU)) | (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                     & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux) 
                                    >> 0x1fU) & (~ 
                                                 (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                                                  >> 0x1fU)))));
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2 
        = (1U & ((0x2aU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                  ? ((((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                        >> 0x1fU) & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                                        >> 0x1fU))) 
                      | (((~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                              >> 0x1fU)) & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i 
                                               >> 0x1fU))) 
                         & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum 
                            >> 0x1fU))) | (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                                             & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i) 
                                            & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum) 
                                           >> 0x1fU))
                  : (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i 
                     < vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i)));
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o));
    }
    if (vlSelf->rst) {
        if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id) {
            ++(vlSymsp->__Vcoverage[1311]);
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id)))) {
            ++(vlSymsp->__Vcoverage[1312]);
        }
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stallreq_from_id))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stallreq_from_id 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id)
                                    ? 7U : 0U) : 0U);
    if ((((0x20U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
          | (0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) 
         & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum))) {
        ++(vlSymsp->__Vcoverage[1290]);
    }
    if ((1U & (~ (((0x20U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                   | (0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) 
                  & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum))))) {
        ++(vlSymsp->__Vcoverage[1291]);
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__ov_sum))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__ov_sum 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o 
        = ((~ (((0x20U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                | (0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))) 
               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum))) 
           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i));
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_lt_reg2))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_lt_reg2 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2;
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
        = ((IData)(vlSelf->rst) ? ((0x2aU == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                                    ? (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2)
                                    : ((0x20U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                                        ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum
                                        : ((0x22U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))
                                            ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum
                                            : 0U)))
            : 0U);
    if ((1U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x3eU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (1U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if ((2U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x3dU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (2U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if ((4U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x3bU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (4U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if ((8U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
               ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x37U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (8U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if ((0x10U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x2fU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (0x10U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if ((0x20U & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall) 
                  ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall 
            = ((0x1fU & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall)) 
               | (0x20U & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall)));
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_o))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_o 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o;
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
            if ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                  & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                 & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                    == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))) {
                ++(vlSymsp->__Vcoverage[1080]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
            if ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                  & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                 & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                    == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))) {
                ++(vlSymsp->__Vcoverage[1088]);
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                    if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) {
                        ++(vlSymsp->__Vcoverage[1078]);
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                if ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                     & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                        == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))) {
                    ++(vlSymsp->__Vcoverage[1079]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)))) {
                        if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) {
                            ++(vlSymsp->__Vcoverage[1077]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))))) {
                    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)))) {
                        if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)))) {
                            ++(vlSymsp->__Vcoverage[1076]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                    if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) {
                        ++(vlSymsp->__Vcoverage[1086]);
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                if ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                     & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                        == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))) {
                    ++(vlSymsp->__Vcoverage[1087]);
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)))) {
                        if (vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) {
                            ++(vlSymsp->__Vcoverage[1085]);
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                       & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                          == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                      & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))))) {
            if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                           & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                          & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                             == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                if ((1U & (~ (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                               & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                              & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                 == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))))) {
                    if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)))) {
                        if ((1U & (~ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)))) {
                            ++(vlSymsp->__Vcoverage[1084]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres));
    }
    vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
        = ((1U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))
            ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout
            : ((4U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i))
                ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres
                : 0U));
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
            = ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                 & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                    == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr))) 
                & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read))
                ? 0U : ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                         & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))
                         ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o
                         : ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read) 
                              & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                             & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr)))
                             ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o
                             : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)
                                 ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data
                                 : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read)
                                     ? 0U : vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm)))));
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
            = ((((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i)) 
                 & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                    == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr))) 
                & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read))
                ? 0U : ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                          & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o)) 
                         & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i) 
                            == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))
                         ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o
                         : ((((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read) 
                              & (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o)) 
                             & ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o) 
                                == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr)))
                             ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o
                             : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)
                                 ? vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data
                                 : ((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read)
                                     ? 0U : vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm)))));
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o = 0U;
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o = 0U;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o));
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                                     != vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o)) {
                                    ++(vlSymsp->__Vcoverage[1068]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                                     == vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o)) {
                                    ++(vlSymsp->__Vcoverage[1067]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o = 0U;
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                                     == vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o)) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o = 1U;
                                }
                            }
                        }
                    } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o = 0U;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o));
    }
    if (vlSelf->rst) {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address = 0U;
        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                          >> 0x1aU)))) {
                                if ((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o 
                                     == vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o)) {
                                    vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                                        = ((IData)(4U) 
                                           + (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i 
                                              + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext));
                                }
                            }
                        }
                    } else if ((0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)) {
                        if ((1U & (~ (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                      >> 0x1aU)))) {
                            vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                                = ((0xf0000000U & ((IData)(4U) 
                                                   + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)) 
                                   | (0xffffffcU & 
                                      (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                       << 2U)));
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address = 0U;
    }
    if (((IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o) 
         ^ (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_branch_flag_o))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_branch_flag_o 
            = vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o;
    }
    if ((1U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffffeU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (1U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((2U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffffdU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (2U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((4U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffffbU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (4U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((8U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
               ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffff7U & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (8U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x10U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffffefU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x10U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x20U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffffdfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x20U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x40U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffffbfU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x40U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x80U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                  ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffff7fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x80U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x100U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffeffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x100U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x200U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffdffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x200U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x400U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffffbffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x400U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x800U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                   ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffff7ffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x800U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x1000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffefffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x1000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x2000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffdfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x2000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x4000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffffbfffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x4000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x8000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                    ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffff7fffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x8000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x10000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffeffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x10000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x20000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffdffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x20000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x40000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfffbffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x40000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x80000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                     ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfff7ffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x80000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x100000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffefffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x100000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x200000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffdfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x200000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x400000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xffbfffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x400000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x800000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                      ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xff7fffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x800000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x1000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfeffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x1000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x2000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfdffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x2000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x4000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xfbffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x4000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x8000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                       ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xf7ffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x8000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x10000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xefffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x10000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x20000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xdfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x20000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if ((0x40000000U & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
                        ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0xbfffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x40000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
    if (((vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address 
          ^ vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address 
            = ((0x7fffffffU & vlSelf->jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address) 
               | (0x80000000U & vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address));
    }
}
