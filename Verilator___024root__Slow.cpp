// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verilator.h for the primary calling header

#include "verilated.h"

#include "Verilator__Syms.h"
#include "Verilator___024root.h"

void Verilator___024root___ctor_var_reset(Verilator___024root* vlSelf);

Verilator___024root::Verilator___024root(Verilator__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Verilator___024root___ctor_var_reset(this);
}

void Verilator___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Verilator___024root::~Verilator___024root() {
}
