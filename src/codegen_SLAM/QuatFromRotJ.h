//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: QuatFromRotJ.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 05-Aug-2015 15:44:55
//
#ifndef __QUATFROMROTJ_H__
#define __QUATFROMROTJ_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern void QuatFromRotJ(const double R[9], double b_Q[4]);
extern void b_QuatFromRotJ(double b_Q[4]);

#endif

//
// File trailer for QuatFromRotJ.h
//
// [EOF]
//