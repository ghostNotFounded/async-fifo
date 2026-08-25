// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_FIFO_IF_H_
#define VERILATED_VTB_TOP_FIFO_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_fifo_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ wclk;
    CData/*0:0*/ wrst_n;
    CData/*0:0*/ winc;
    CData/*7:0*/ wdata;
    CData/*0:0*/ wfull;
    CData/*0:0*/ rclk;
    CData/*0:0*/ rrst_n;
    CData/*0:0*/ rinc;
    CData/*7:0*/ rdata;
    CData/*0:0*/ rempty;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_fifo_if();
    ~Vtb_top_fifo_if();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_fifo_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
