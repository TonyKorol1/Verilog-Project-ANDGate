// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verilator.h for the primary calling header

#include "verilated.h"

#include "Verilator___024root.h"

VL_ATTR_COLD void Verilator___024root___eval_initial(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Verilator___024root___eval_settle(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Verilator___024root___final(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___final\n"); );
}

VL_ATTR_COLD void Verilator___024root___ctor_var_reset(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
    vlSelf->clock = VL_RAND_RESET_I(1);
}
