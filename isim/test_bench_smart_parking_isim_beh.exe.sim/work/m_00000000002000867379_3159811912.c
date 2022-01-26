/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/University/LC Lab/Codes/LC_Project/park_space_number.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {0U, 7U};



static void Always_29_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 5);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t13 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB30:
LAB27:
LAB24:
LAB21:
LAB18:
LAB15:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(34, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 3, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB24;

LAB25:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB27;

LAB28:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB30;

LAB31:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB33;

}

static void Cont_53_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 3272);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002000867379_3159811912_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_53_1};
	xsi_register_didat("work_m_00000000002000867379_3159811912", "isim/test_bench_smart_parking_isim_beh.exe.sim/work/m_00000000002000867379_3159811912.didat");
	xsi_register_executes(pe);
}
