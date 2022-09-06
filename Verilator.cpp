// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Verilator.h"
#include "Verilator__Syms.h"

//============================================================
// Constructors

Verilator::Verilator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Verilator__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Verilator::Verilator(const char* _vcname__)
    : Verilator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Verilator::~Verilator() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Verilator___024root___eval_initial(Verilator___024root* vlSelf);
void Verilator___024root___eval_settle(Verilator___024root* vlSelf);
void Verilator___024root___eval(Verilator___024root* vlSelf);
#ifdef VL_DEBUG
void Verilator___024root___eval_debug_assertions(Verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Verilator___024root___final(Verilator___024root* vlSelf);

static void _eval_initial_loop(Verilator__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Verilator___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Verilator___024root___eval_settle(&(vlSymsp->TOP));
        Verilator___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Verilator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Verilator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Verilator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Verilator___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Verilator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Verilator::final() {
    Verilator___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Verilator::hierName() const { return vlSymsp->name(); }
const char* Verilator::modelName() const { return "Verilator"; }
unsigned Verilator::threads() const { return 1; }
