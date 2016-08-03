/* ======================================================================= */
/* DSPF_sp_vecrecip_cn.c -- Vector Reciprocal                              */
/*                 Natural C Implementation                                */
/*                                                                         */
/* Rev 0.0.2                                                               */
/*                                                                         */
/* ----------------------------------------------------------------------- */
/*            Copyright (c) 2009 Texas Instruments, Incorporated.          */
/*                           All Rights Reserved.                          */
/* ======================================================================= */
#ifndef WIN32
#pragma CODE_SECTION(DSPF_sp_vecrecip_cn, ".text:ansi");
#endif

#include "DSPF_sp_vecrecip_cn.h"

void DSPF_sp_vecrecip_cn(const float *x, float *y, const int n)
{
    int i;

    for(i = 0; i < n; i++)
        y[i] = 1 / x[i];
}

/* ======================================================================= */
/*  End of file:  DSPF_sp_vecrecip_cn.c                                    */
/* ----------------------------------------------------------------------- */
/*            Copyright (c) 2009 Texas Instruments, Incorporated.          */
/*                           All Rights Reserved.                          */
/* ======================================================================= */

