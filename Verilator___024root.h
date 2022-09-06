// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Verilator.h for the primary calling header

#ifndef VERILATED_VERILATOR___024ROOT_H_
#define VERILATED_VERILATOR___024ROOT_H_  // guard

#include "verilated.h"

class Verilator__Syms;

class Verilator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Verilator___024root(Verilator__Syms* symsp, const char* name);
    ~Verilator___024root();
    VL_UNCOPYABLE(Verilator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
