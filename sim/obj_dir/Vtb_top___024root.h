// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top___024unit;
class Vtb_top___024unit__03a__03afifo_driver__Vclpkg;
class Vtb_top___024unit__03a__03afifo_environment;
class Vtb_top___024unit__03a__03afifo_environment__Vclpkg;
class Vtb_top___024unit__03a__03afifo_monitor__Vclpkg;
class Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg;
class Vtb_top___024unit__03a__03afifo_transaction__Vclpkg;
class Vtb_top_fifo_if;
class Vtb_top_std;
class Vtb_top_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_top_std__03a__03amailbox__Tz2__Vclpkg;
class Vtb_top_std__03a__03aprocess__Vclpkg;
class Vtb_top_std__03a__03asemaphore__Vclpkg;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:
    // CELLS
    Vtb_top___024unit* __PVT____024unit;
    Vtb_top_std* __PVT__std;
    Vtb_top_fifo_if* __PVT__tb_top__DOT__vif;
    Vtb_top___024unit__03a__03afifo_transaction__Vclpkg* __024unit__03a__03afifo_transaction__Vclpkg;
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg* __024unit__03a__03afifo_driver__Vclpkg;
    Vtb_top___024unit__03a__03afifo_monitor__Vclpkg* __024unit__03a__03afifo_monitor__Vclpkg;
    Vtb_top___024unit__03a__03afifo_scoreboard__Vclpkg* __024unit__03a__03afifo_scoreboard__Vclpkg;
    Vtb_top___024unit__03a__03afifo_environment__Vclpkg* __024unit__03a__03afifo_environment__Vclpkg;
    Vtb_top_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_top_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_top_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_top_std__03a__03amailbox__Tz2__Vclpkg* std__03a__03amailbox__Tz2__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top__DOT__wclk;
    CData/*0:0*/ tb_top__DOT__rclk;
    CData/*0:0*/ tb_top__DOT__wrst_n;
    CData/*0:0*/ tb_top__DOT__rrst_n;
    CData/*0:0*/ tb_top__DOT____Vcellout__dut__rempty;
    CData/*0:0*/ tb_top__DOT____Vcellout__dut__wfull;
    CData/*4:0*/ tb_top__DOT__dut__DOT__wptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__rptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__wq2_rptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__rq2_wptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_4_1;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_6_1;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_sync_r2w__DOT__wq1_rptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_sync_w2r__DOT__rq1_wptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext;
    CData/*4:0*/ tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __Vsampled_TOP__tb_top__DOT__vif__winc;
    CData/*0:0*/ __Vsampled_TOP__tb_top__DOT____Vcellout__dut__wfull;
    CData/*0:0*/ __Vsampled_TOP__tb_top__DOT____Vcellout__dut__rempty;
    CData/*4:0*/ __Vsampled_TOP__tb_top__DOT__dut__DOT__wptr;
    CData/*0:0*/ __Vsampled_TOP__tb_top__DOT__vif__rinc;
    CData/*4:0*/ __Vsampled_TOP__tb_top__DOT__dut__DOT__rptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rinc;
    CData/*7:0*/ __Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wdata;
    CData/*0:0*/ __Vtrigprevvif_ico_TOP__tb_top__DOT__vif__winc;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__vif__wclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__vif__rclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__vif__wrst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__vif__rrst_n__0;
    CData/*0:0*/ __Vtrigprevvif_act_TOP__tb_top__DOT__vif__rinc;
    CData/*7:0*/ __Vtrigprevvif_act_TOP__tb_top__DOT__vif__wdata;
    CData/*0:0*/ __Vtrigprevvif_act_TOP__tb_top__DOT__vif__winc;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 16> tb_top__DOT__dut__DOT__u_fifomem__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlEvent __VnbaEvent;
    VlDynamicTriggerScheduler __VdynSched;
    VlClassRef<Vtb_top___024unit__03a__03afifo_environment> tb_top__DOT__unnamedblk1__DOT__env;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
