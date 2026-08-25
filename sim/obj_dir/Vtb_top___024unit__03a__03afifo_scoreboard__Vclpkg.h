// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_SCOREBOARD__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03amailbox__Tz2;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg();
    ~Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_scoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__match_count;
    IData/*31:0*/ __PVT__error_count;
    VlQueue<CData/*7:0*/> __PVT__ref_queue;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> __PVT__mon_w_mbx;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> __PVT__mon_r_mbx;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::fifo_scoreboard"; }
    VlClass* clone() const { return new Vtb_top___024unit__03a__03afifo_scoreboard(*this); }
    VlCoroutine __VnoInFunc_collect_reads(Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_collect_writes(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_scoreboard() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_w_mbx, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_r_mbx);
    ~Vtb_top___024unit__03a__03afifo_scoreboard() {}
};


#endif  // guard
