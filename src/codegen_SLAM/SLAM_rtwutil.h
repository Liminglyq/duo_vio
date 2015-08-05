//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM_rtwutil.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 05-Aug-2015 15:44:55
//
#ifndef __SLAM_RTWUTIL_H__
#define __SLAM_RTWUTIL_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern int div_nzp_s32_floor(int numerator, int denominator);
extern double rt_hypotd_snf(double u0, double u1);
extern double rt_powd_snf(double u0, double u1);
extern double rt_roundd_snf(double u);

#endif

//
// File trailer for SLAM_rtwutil.h
//
// [EOF]
//