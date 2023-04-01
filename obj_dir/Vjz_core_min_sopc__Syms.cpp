// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjz_core_min_sopc__Syms.h"
#include "Vjz_core_min_sopc.h"
#include "Vjz_core_min_sopc___024root.h"

// FUNCTIONS
Vjz_core_min_sopc__Syms::~Vjz_core_min_sopc__Syms()
{
}

Vjz_core_min_sopc__Syms::Vjz_core_min_sopc__Syms(VerilatedContext* contextp, const char* namep, Vjz_core_min_sopc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
