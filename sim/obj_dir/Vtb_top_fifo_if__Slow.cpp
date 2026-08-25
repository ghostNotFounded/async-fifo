// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_fifo_if___ctor_var_reset(Vtb_top_fifo_if* vlSelf);

Vtb_top_fifo_if::Vtb_top_fifo_if() = default;
Vtb_top_fifo_if::~Vtb_top_fifo_if() = default;

void Vtb_top_fifo_if::ctor(Vtb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_top_fifo_if___ctor_var_reset(this);
}

void Vtb_top_fifo_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_top_fifo_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
