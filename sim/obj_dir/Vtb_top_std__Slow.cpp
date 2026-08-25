// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"


Vtb_top_std::Vtb_top_std() = default;
Vtb_top_std::~Vtb_top_std() = default;

void Vtb_top_std::ctor(Vtb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_top_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_top_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
