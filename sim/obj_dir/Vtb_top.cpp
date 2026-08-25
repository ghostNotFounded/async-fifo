// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_top__pch.h"

//============================================================
// Constructors

Vtb_top::Vtb_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_top__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__tb_top__DOT__vif{vlSymsp->TOP.__PVT__tb_top__DOT__vif}
    , __024unit__03a__03afifo_transaction__Vclpkg{vlSymsp->TOP.__024unit__03a__03afifo_transaction__Vclpkg}
    , __024unit__03a__03afifo_driver__Vclpkg{vlSymsp->TOP.__024unit__03a__03afifo_driver__Vclpkg}
    , __024unit__03a__03afifo_monitor__Vclpkg{vlSymsp->TOP.__024unit__03a__03afifo_monitor__Vclpkg}
    , __024unit__03a__03afifo_scoreboard__Vclpkg{vlSymsp->TOP.__024unit__03a__03afifo_scoreboard__Vclpkg}
    , __024unit__03a__03afifo_environment__Vclpkg{vlSymsp->TOP.__024unit__03a__03afifo_environment__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , std__03a__03amailbox__Tz2__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz2__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_top::Vtb_top(const char* _vcname__)
    : Vtb_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_top::~Vtb_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval(Vtb_top___024root* vlSelf);

void Vtb_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top::final() {
    contextp()->executingFinal(true);
    Vtb_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_top::modelName() const { return "Vtb_top"; }
unsigned Vtb_top::threads() const { return 1; }
void Vtb_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
