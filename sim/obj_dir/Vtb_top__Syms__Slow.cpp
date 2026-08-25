// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top__pch.h"

Vtb_top__Syms::Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1437);
    // Setup sub module instances
    TOP____024unit__03a__03afifo_driver__Vclpkg.ctor(this, "$unit::fifo_driver__Vclpkg");
    TOP____024unit__03a__03afifo_environment__Vclpkg.ctor(this, "$unit::fifo_environment__Vclpkg");
    TOP____024unit__03a__03afifo_monitor__Vclpkg.ctor(this, "$unit::fifo_monitor__Vclpkg");
    TOP____024unit__03a__03afifo_scoreboard__Vclpkg.ctor(this, "$unit::fifo_scoreboard__Vclpkg");
    TOP____024unit__03a__03afifo_transaction__Vclpkg.ctor(this, "$unit::fifo_transaction__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    TOP__std.ctor(this, "std");
    TOP__tb_top__DOT__vif.ctor(this, "tb_top.vif");
    TOP__std__03a__03amailbox__Tz1__Vclpkg.ctor(this, "std::mailbox__Tz1__Vclpkg");
    TOP__std__03a__03amailbox__Tz2__Vclpkg.ctor(this, "std::mailbox__Tz2__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03afifo_driver__Vclpkg = &TOP____024unit__03a__03afifo_driver__Vclpkg;
    TOP.__024unit__03a__03afifo_environment__Vclpkg = &TOP____024unit__03a__03afifo_environment__Vclpkg;
    TOP.__024unit__03a__03afifo_monitor__Vclpkg = &TOP____024unit__03a__03afifo_monitor__Vclpkg;
    TOP.__024unit__03a__03afifo_scoreboard__Vclpkg = &TOP____024unit__03a__03afifo_scoreboard__Vclpkg;
    TOP.__024unit__03a__03afifo_transaction__Vclpkg = &TOP____024unit__03a__03afifo_transaction__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.__PVT__tb_top__DOT__vif = &TOP__tb_top__DOT__vif;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03amailbox__Tz2__Vclpkg = &TOP__std__03a__03amailbox__Tz2__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03afifo_driver__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03afifo_environment__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03afifo_monitor__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03afifo_scoreboard__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03afifo_transaction__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__tb_top__DOT__vif.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz2__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtb_top__Syms::~Vtb_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std__03a__03amailbox__Tz2__Vclpkg.dtor();
    TOP__std__03a__03amailbox__Tz1__Vclpkg.dtor();
    TOP__tb_top__DOT__vif.dtor();
    TOP__std.dtor();
    TOP____024unit.dtor();
    TOP____024unit__03a__03afifo_transaction__Vclpkg.dtor();
    TOP____024unit__03a__03afifo_scoreboard__Vclpkg.dtor();
    TOP____024unit__03a__03afifo_monitor__Vclpkg.dtor();
    TOP____024unit__03a__03afifo_environment__Vclpkg.dtor();
    TOP____024unit__03a__03afifo_driver__Vclpkg.dtor();
}
