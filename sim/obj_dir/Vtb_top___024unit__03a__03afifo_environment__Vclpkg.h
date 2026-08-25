// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_ENVIRONMENT__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_ENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top___024unit__03a__03afifo_driver;
class Vtb_top___024unit__03a__03afifo_monitor;
class Vtb_top___024unit__03a__03afifo_scoreboard;
class Vtb_top___024unit__03a__03afifo_transaction;
class Vtb_top_std__03a__03amailbox__Tz1;
class Vtb_top_std__03a__03amailbox__Tz2;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_environment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_environment__Vclpkg();
    ~Vtb_top___024unit__03a__03afifo_environment__Vclpkg();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_environment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_environment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_top_fifo_if* __PVT__vif;
    VlClassRef<Vtb_top___024unit__03a__03afifo_driver> __PVT__drv;
    VlClassRef<Vtb_top___024unit__03a__03afifo_monitor> __PVT__mon;
    VlClassRef<Vtb_top___024unit__03a__03afifo_scoreboard> __PVT__sb;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> __PVT__drv_w_mbx;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> __PVT__drv_r_mbx;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> __PVT__mon_w_mbx;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> __PVT__mon_r_mbx;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::fifo_environment"; }
    VlClass* clone() const { return new Vtb_top___024unit__03a__03afifo_environment(*this); }
    VlCoroutine __VnoInFunc_generator_read(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num);
    VlCoroutine __VnoInFunc_generator_write(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num);
    VlCoroutine __VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num_transactions);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_transactions, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_transactions, VlForkSync __Vfork_1__sync);
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_environment() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif);
    ~Vtb_top___024unit__03a__03afifo_environment() {}
};


#endif  // guard
