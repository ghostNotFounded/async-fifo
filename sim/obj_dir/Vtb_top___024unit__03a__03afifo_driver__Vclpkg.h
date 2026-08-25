// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_DRIVER__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_DRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top___024unit__03a__03afifo_transaction;
class Vtb_top_std__03a__03amailbox__Tz1;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_driver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg();
    ~Vtb_top___024unit__03a__03afifo_driver__Vclpkg();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_driver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_driver : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_top_fifo_if* __PVT__vif;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> __PVT__w_mbx;
    VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> __PVT__r_mbx;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::fifo_driver"; }
    VlClass* clone() const { return new Vtb_top___024unit__03a__03afifo_driver(*this); }
    VlCoroutine __VnoInFunc_drive_read(Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_drive_read____Vfork_7__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h793191f9__0);
    VlCoroutine __VnoInFunc_drive_read____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h79304275__0);
    VlCoroutine __VnoInFunc_drive_read____Vfork_9__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h793191f9__1);
  public:
    VlCoroutine __VnoInFunc_drive_write(Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_drive_write____Vfork_2__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc10438d6__0);
    VlCoroutine __VnoInFunc_drive_write____Vfork_3__0(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h35736a09__0);
    VlCoroutine __VnoInFunc_drive_write____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc104ef22__0);
    VlCoroutine __VnoInFunc_drive_write____Vfork_5__0(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h48de5348__0);
    VlCoroutine __VnoInFunc_drive_write____Vfork_6__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc10438d6__1);
  public:
    void __VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_driver() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif, VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> w_mbx, VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> r_mbx);
    ~Vtb_top___024unit__03a__03afifo_driver() {}
};


#endif  // guard
