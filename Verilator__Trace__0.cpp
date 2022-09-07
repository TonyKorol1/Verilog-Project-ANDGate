// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Verilator__Syms.h"


void Verilator___024root__trace_chg_sub_0(Verilator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Verilator___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root__trace_chg_top_0\n"); );
    // Init
    Verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Verilator___024root*>(voidSelf);
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Verilator___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Verilator___024root__trace_chg_sub_0(Verilator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->a));
    bufp->chgBit(oldp+1,(vlSelf->b));
    bufp->chgBit(oldp+2,(vlSelf->clock));
    bufp->chgBit(oldp+3,(vlSelf->y));
}

void Verilator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verilator___024root__trace_cleanup\n"); );
    // Init
    Verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Verilator___024root*>(voidSelf);
    Verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
