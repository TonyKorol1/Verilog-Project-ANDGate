// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verilator.h for the primary calling header

#include "verilated.h"

#include "Verilator___024root.h"

VL_INLINE_OPT void Verilator___024root___sequent__TOP__0(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->y = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
}

void Verilator___024root___eval(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Verilator___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void Verilator___024root___eval_debug_assertions(Verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
}
#endif  // VL_DEBUG
