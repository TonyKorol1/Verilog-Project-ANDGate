// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VERILATOR__SYMS_H_
#define VERILATED_VERILATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Verilator.h"

// INCLUDE MODULE CLASSES
#include "Verilator___024root.h"

// SYMS CLASS (contains all model state)
class Verilator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Verilator* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Verilator___024root            TOP;

    // CONSTRUCTORS
    Verilator__Syms(VerilatedContext* contextp, const char* namep, Verilator* modelp);
    ~Verilator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
