// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJZ_CORE_MIN_SOPC__SYMS_H_
#define VERILATED_VJZ_CORE_MIN_SOPC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjz_core_min_sopc.h"

// INCLUDE MODULE CLASSES
#include "Vjz_core_min_sopc___024root.h"

// SYMS CLASS (contains all model state)
class Vjz_core_min_sopc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjz_core_min_sopc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjz_core_min_sopc___024root    TOP;

    // COVERAGE
    uint32_t __Vcoverage[1327];

    // CONSTRUCTORS
    Vjz_core_min_sopc__Syms(VerilatedContext* contextp, const char* namep, Vjz_core_min_sopc* modelp);
    ~Vjz_core_min_sopc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
