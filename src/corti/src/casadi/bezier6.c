/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
#define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
#define _CASADI_NAMESPACE_CONCAT(NS, ID) NS##ID
#define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
#define CASADI_PREFIX(ID) bezier6_##ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_f1 CASADI_PREFIX(f1)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)

static const casadi_int casadi_s0[6] = { 2, 1, 0, 2, 0, 1 };
static const casadi_int casadi_s1[5] = { 1, 1, 0, 1, 0 };
static const casadi_int casadi_s2[15] = { 1, 6, 0, 1, 2, 3, 4, 5, 6, 0, 0, 0, 0, 0, 0 };
static const casadi_int casadi_s3[7] = { 3, 1, 0, 3, 0, 1, 2 };

/* bezier6_solve:(wp_0[2],wp_1[2],T)->(P[1x6]) */
static int casadi_f0(
    const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w,
    int mem)
{
    casadi_real a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
    a0 = arg[0] ? arg[0][0] : 0;
    if (res[0] != 0) {
        res[0][0] = a0;
    }
    a1 = arg[0] ? arg[0][1] : 0;
    a2 = 5.;
    a3 = arg[2] ? arg[2][0] : 0;
    a4 = (a2 / a3);
    a5 = (a1 / a4);
    a6 = -5.;
    a7 = (a6 / a3);
    a8 = (a7 / a4);
    a9 = (a8 * a0);
    a5 = (a5 - a9);
    if (res[0] != 0) {
        res[0][1] = a5;
    }
    a5 = 4.;
    a7 = (a5 * a7);
    a7 = (a7 / a3);
    a9 = (a6 / a3);
    a9 = (a9 - a4);
    a9 = (a5 * a9);
    a9 = (a9 / a3);
    a8 = (a9 * a8);
    a7 = (a7 + a8);
    a8 = (a2 / a3);
    a8 = (a5 * a8);
    a8 = (a8 / a3);
    a7 = (a7 / a8);
    a7 = (a7 * a0);
    a9 = (a9 / a4);
    a9 = (a9 / a8);
    a9 = (a9 * a1);
    a7 = (a7 - a9);
    if (res[0] != 0) {
        res[0][2] = a7;
    }
    a7 = (a6 / a3);
    a9 = (a2 / a3);
    a9 = (a7 - a9);
    a9 = (a5 * a9);
    a9 = (a9 / a3);
    a1 = (a9 / a7);
    a6 = (a6 / a3);
    a6 = (a5 * a6);
    a6 = (a6 / a3);
    a1 = (a1 / a6);
    a8 = arg[1] ? arg[1][1] : 0;
    a1 = (a1 * a8);
    a2 = (a2 / a3);
    a4 = (a2 / a7);
    a9 = (a9 * a4);
    a5 = (a5 * a2);
    a5 = (a5 / a3);
    a9 = (a9 - a5);
    a9 = (a9 / a6);
    a6 = arg[1] ? arg[1][0] : 0;
    a9 = (a9 * a6);
    a1 = (a1 - a9);
    if (res[0] != 0) {
        res[0][3] = a1;
    }
    a8 = (a8 / a7);
    a4 = (a4 * a6);
    a8 = (a8 - a4);
    if (res[0] != 0) {
        res[0][4] = a8;
    }
    if (res[0] != 0) {
        res[0][5] = a6;
    }
    return 0;
}

int bezier6_solve(
    const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w,
    int mem)
{
    return casadi_f0(arg, res, iw, w, mem);
}

int bezier6_solve_alloc_mem(void)
{
    return 0;
}

int bezier6_solve_init_mem(int mem)
{
    return 0;
}

void bezier6_solve_free_mem(int mem)
{
}

int bezier6_solve_checkout(void)
{
    return 0;
}

void bezier6_solve_release(int mem)
{
}

void bezier6_solve_incref(void)
{
}

void bezier6_solve_decref(void)
{
}

casadi_int bezier6_solve_n_in(void) { return 3; }

casadi_int bezier6_solve_n_out(void) { return 1; }

casadi_real bezier6_solve_default_in(casadi_int i)
{
    switch (i) {
    default:
        return 0;
    }
}

const char* bezier6_solve_name_in(casadi_int i)
{
    switch (i) {
    case 0:
        return "wp_0";
    case 1:
        return "wp_1";
    case 2:
        return "T";
    default:
        return 0;
    }
}

const char* bezier6_solve_name_out(casadi_int i)
{
    switch (i) {
    case 0:
        return "P";
    default:
        return 0;
    }
}

const casadi_int* bezier6_solve_sparsity_in(casadi_int i)
{
    switch (i) {
    case 0:
        return casadi_s0;
    case 1:
        return casadi_s0;
    case 2:
        return casadi_s1;
    default:
        return 0;
    }
}

const casadi_int* bezier6_solve_sparsity_out(casadi_int i)
{
    switch (i) {
    case 0:
        return casadi_s2;
    default:
        return 0;
    }
}

int bezier6_solve_work(
    casadi_int* sz_arg, casadi_int* sz_res, casadi_int* sz_iw,
    casadi_int* sz_w)
{
    if (sz_arg) {
        *sz_arg = 3;
    }
    if (sz_res) {
        *sz_res = 1;
    }
    if (sz_iw) {
        *sz_iw = 0;
    }
    if (sz_w) {
        *sz_w = 0;
    }
    return 0;
}

/* bezier6_traj:(t,T,P[1x6])->(r[3]) */
static int casadi_f1(
    const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w,
    int mem)
{
    casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7, a8, a9;
    a0 = arg[2] ? arg[2][0] : 0;
    a1 = 1.;
    a2 = arg[0] ? arg[0][0] : 0;
    a3 = arg[1] ? arg[1][0] : 0;
    a4 = (a2 / a3);
    a5 = (a1 - a4);
    a5 = (a0 * a5);
    a6 = arg[2] ? arg[2][1] : 0;
    a7 = (a6 * a4);
    a5 = (a5 + a7);
    a7 = (a1 - a4);
    a5 = (a5 * a7);
    a7 = (a1 - a4);
    a7 = (a6 * a7);
    a8 = arg[2] ? arg[2][2] : 0;
    a9 = (a8 * a4);
    a7 = (a7 + a9);
    a9 = (a7 * a4);
    a5 = (a5 + a9);
    a9 = (a1 - a4);
    a5 = (a5 * a9);
    a9 = (a1 - a4);
    a7 = (a7 * a9);
    a9 = (a1 - a4);
    a9 = (a8 * a9);
    a10 = arg[2] ? arg[2][3] : 0;
    a11 = (a10 * a4);
    a9 = (a9 + a11);
    a11 = (a9 * a4);
    a7 = (a7 + a11);
    a11 = (a7 * a4);
    a5 = (a5 + a11);
    a11 = (a1 - a4);
    a5 = (a5 * a11);
    a11 = (a1 - a4);
    a7 = (a7 * a11);
    a11 = (a1 - a4);
    a9 = (a9 * a11);
    a11 = (a1 - a4);
    a11 = (a10 * a11);
    a12 = arg[2] ? arg[2][4] : 0;
    a13 = (a12 * a4);
    a11 = (a11 + a13);
    a13 = (a11 * a4);
    a9 = (a9 + a13);
    a13 = (a9 * a4);
    a7 = (a7 + a13);
    a13 = (a7 * a4);
    a5 = (a5 + a13);
    a13 = (a1 - a4);
    a5 = (a5 * a13);
    a13 = (a1 - a4);
    a7 = (a7 * a13);
    a13 = (a1 - a4);
    a9 = (a9 * a13);
    a13 = (a1 - a4);
    a11 = (a11 * a13);
    a13 = (a1 - a4);
    a13 = (a12 * a13);
    a14 = arg[2] ? arg[2][5] : 0;
    a15 = (a14 * a4);
    a13 = (a13 + a15);
    a13 = (a13 * a4);
    a11 = (a11 + a13);
    a11 = (a11 * a4);
    a9 = (a9 + a11);
    a9 = (a9 * a4);
    a7 = (a7 + a9);
    a7 = (a7 * a4);
    a5 = (a5 + a7);
    if (res[0] != 0) {
        res[0][0] = a5;
    }
    a5 = 5.;
    a0 = (a6 - a0);
    a0 = (a5 * a0);
    a0 = (a0 / a3);
    a7 = (a2 / a3);
    a4 = (a1 - a7);
    a4 = (a0 * a4);
    a6 = (a8 - a6);
    a6 = (a5 * a6);
    a6 = (a6 / a3);
    a9 = (a6 * a7);
    a4 = (a4 + a9);
    a9 = (a1 - a7);
    a4 = (a4 * a9);
    a9 = (a1 - a7);
    a9 = (a6 * a9);
    a8 = (a10 - a8);
    a8 = (a5 * a8);
    a8 = (a8 / a3);
    a11 = (a8 * a7);
    a9 = (a9 + a11);
    a11 = (a9 * a7);
    a4 = (a4 + a11);
    a11 = (a1 - a7);
    a4 = (a4 * a11);
    a11 = (a1 - a7);
    a9 = (a9 * a11);
    a11 = (a1 - a7);
    a11 = (a8 * a11);
    a10 = (a12 - a10);
    a10 = (a5 * a10);
    a10 = (a10 / a3);
    a13 = (a10 * a7);
    a11 = (a11 + a13);
    a13 = (a11 * a7);
    a9 = (a9 + a13);
    a13 = (a9 * a7);
    a4 = (a4 + a13);
    a13 = (a1 - a7);
    a4 = (a4 * a13);
    a13 = (a1 - a7);
    a9 = (a9 * a13);
    a13 = (a1 - a7);
    a11 = (a11 * a13);
    a13 = (a1 - a7);
    a13 = (a10 * a13);
    a14 = (a14 - a12);
    a5 = (a5 * a14);
    a5 = (a5 / a3);
    a14 = (a5 * a7);
    a13 = (a13 + a14);
    a13 = (a13 * a7);
    a11 = (a11 + a13);
    a11 = (a11 * a7);
    a9 = (a9 + a11);
    a9 = (a9 * a7);
    a4 = (a4 + a9);
    if (res[0] != 0) {
        res[0][1] = a4;
    }
    a4 = 4.;
    a0 = (a6 - a0);
    a0 = (a4 * a0);
    a0 = (a0 / a3);
    a2 = (a2 / a3);
    a9 = (a1 - a2);
    a0 = (a0 * a9);
    a6 = (a8 - a6);
    a6 = (a4 * a6);
    a6 = (a6 / a3);
    a9 = (a6 * a2);
    a0 = (a0 + a9);
    a9 = (a1 - a2);
    a0 = (a0 * a9);
    a9 = (a1 - a2);
    a6 = (a6 * a9);
    a8 = (a10 - a8);
    a8 = (a4 * a8);
    a8 = (a8 / a3);
    a9 = (a8 * a2);
    a6 = (a6 + a9);
    a9 = (a6 * a2);
    a0 = (a0 + a9);
    a9 = (a1 - a2);
    a0 = (a0 * a9);
    a9 = (a1 - a2);
    a6 = (a6 * a9);
    a1 = (a1 - a2);
    a8 = (a8 * a1);
    a5 = (a5 - a10);
    a4 = (a4 * a5);
    a4 = (a4 / a3);
    a4 = (a4 * a2);
    a8 = (a8 + a4);
    a8 = (a8 * a2);
    a6 = (a6 + a8);
    a6 = (a6 * a2);
    a0 = (a0 + a6);
    if (res[0] != 0) {
        res[0][2] = a0;
    }
    return 0;
}

int bezier6_traj(
    const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w,
    int mem)
{
    return casadi_f1(arg, res, iw, w, mem);
}

int bezier6_traj_alloc_mem(void)
{
    return 0;
}

int bezier6_traj_init_mem(int mem)
{
    return 0;
}

void bezier6_traj_free_mem(int mem)
{
}

int bezier6_traj_checkout(void)
{
    return 0;
}

void bezier6_traj_release(int mem)
{
}

void bezier6_traj_incref(void)
{
}

void bezier6_traj_decref(void)
{
}

casadi_int bezier6_traj_n_in(void) { return 3; }

casadi_int bezier6_traj_n_out(void) { return 1; }

casadi_real bezier6_traj_default_in(casadi_int i)
{
    switch (i) {
    default:
        return 0;
    }
}

const char* bezier6_traj_name_in(casadi_int i)
{
    switch (i) {
    case 0:
        return "t";
    case 1:
        return "T";
    case 2:
        return "P";
    default:
        return 0;
    }
}

const char* bezier6_traj_name_out(casadi_int i)
{
    switch (i) {
    case 0:
        return "r";
    default:
        return 0;
    }
}

const casadi_int* bezier6_traj_sparsity_in(casadi_int i)
{
    switch (i) {
    case 0:
        return casadi_s1;
    case 1:
        return casadi_s1;
    case 2:
        return casadi_s2;
    default:
        return 0;
    }
}

const casadi_int* bezier6_traj_sparsity_out(casadi_int i)
{
    switch (i) {
    case 0:
        return casadi_s3;
    default:
        return 0;
    }
}

int bezier6_traj_work(
    casadi_int* sz_arg, casadi_int* sz_res, casadi_int* sz_iw,
    casadi_int* sz_w)
{
    if (sz_arg) {
        *sz_arg = 3;
    }
    if (sz_res) {
        *sz_res = 1;
    }
    if (sz_iw) {
        *sz_iw = 0;
    }
    if (sz_w) {
        *sz_w = 0;
    }
    return 0;
}

#ifdef __cplusplus
} /* extern "C" */
#endif
