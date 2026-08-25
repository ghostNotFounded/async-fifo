// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TOP__SYMS_H_
#define VERILATED_VTB_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_top___024root.h"
#include "Vtb_top___024unit.h"
#include "Vtb_top_std.h"
#include "Vtb_top_fifo_if.h"
#include "Vtb_top___024unit__03a__03afifo_transaction__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_monitor__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_environment__Vclpkg.h"
#include "Vtb_top_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_top_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_top_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "Vtb_top_std__03a__03amailbox__Tz2__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_top* const __Vm_modelp;
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_top___024root              TOP;
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg TOP____024unit__03a__03afifo_driver__Vclpkg;
    Vtb_top___024unit__03a__03afifo_environment__Vclpkg TOP____024unit__03a__03afifo_environment__Vclpkg;
    Vtb_top___024unit__03a__03afifo_monitor__Vclpkg TOP____024unit__03a__03afifo_monitor__Vclpkg;
    Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg TOP____024unit__03a__03afifo_scoreboard__Vclpkg;
    Vtb_top___024unit__03a__03afifo_transaction__Vclpkg TOP____024unit__03a__03afifo_transaction__Vclpkg;
    Vtb_top___024unit              TOP____024unit;
    Vtb_top_std                    TOP__std;
    Vtb_top_fifo_if                TOP__tb_top__DOT__vif;
    Vtb_top_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_top_std__03a__03amailbox__Tz2__Vclpkg TOP__std__03a__03amailbox__Tz2__Vclpkg;
    Vtb_top_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_top_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp);
    ~Vtb_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void fireEvent(VlEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(&event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
