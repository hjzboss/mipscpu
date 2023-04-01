// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjz_core_min_sopc.h for the primary calling header

#include "verilated.h"

#include "Vjz_core_min_sopc__Syms.h"
#include "Vjz_core_min_sopc___024root.h"

void Vjz_core_min_sopc___024root___ctor_var_reset(Vjz_core_min_sopc___024root* vlSelf);

Vjz_core_min_sopc___024root::Vjz_core_min_sopc___024root(Vjz_core_min_sopc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjz_core_min_sopc___024root___ctor_var_reset(this);
}

void Vjz_core_min_sopc___024root___configure_coverage(Vjz_core_min_sopc___024root* vlSelf, bool first);

void Vjz_core_min_sopc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vjz_core_min_sopc___024root___configure_coverage(this, first);
}

Vjz_core_min_sopc___024root::~Vjz_core_min_sopc___024root() {
}

// Coverage
void Vjz_core_min_sopc___024root::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
