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
static const char *ng0 = "E:/University/LC Lab/Codes/LC_Project/FSM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5056);
    *((int *)t2) = 1;
    t3 = (t0 + 4520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1888U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(44, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3408);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB14;

}

static void Always_48_1(char *t0)
{
    char t9[8];
    char t36[8];
    char t42[8];
    char t53[8];
    char t62[8];
    char t78[8];
    char t86[8];
    char t113[8];
    char t128[8];
    char t137[8];
    char t153[8];
    char t161[8];
    char t189[8];
    char t204[8];
    char t213[8];
    char t229[8];
    char t237[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t236;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    char *t272;

LAB0:    t1 = (t0 + 4736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5072);
    *((int *)t2) = 1;
    t3 = (t0 + 4768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t10 = (t0 + 1888U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB20:    t18 = (t9 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB22;

LAB21:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t9 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB16;

LAB8:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t3) == 0)
        goto LAB26;

LAB28:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB29:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB31;

LAB30:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t2) == 0)
        goto LAB35;

LAB37:    t4 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t4) = 1;

LAB38:    t5 = (t9 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB40;

LAB39:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    t10 = (t9 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t0 + 2688U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t5);
    t20 = (t15 ^ t16);
    t21 = (t14 | t20);
    t22 = *((unsigned int *)t2);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB47;

LAB44:    if (t24 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t9) = 1;

LAB47:    t10 = (t9 + 4);
    t27 = *((unsigned int *)t10);
    t29 = (~(t27));
    t30 = *((unsigned int *)t9);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB50:
LAB43:
LAB34:    goto LAB16;

LAB10:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t3) == 0)
        goto LAB51;

LAB53:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB54:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB56;

LAB55:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t2) == 0)
        goto LAB60;

LAB62:    t4 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t4) = 1;

LAB63:    t5 = (t9 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB64:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    t10 = (t9 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:
LAB59:    goto LAB16;

LAB12:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t3) == 0)
        goto LAB69;

LAB71:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB72:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB74;

LAB73:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB77:    goto LAB16;

LAB14:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB148;

LAB146:    if (*((unsigned int *)t3) == 0)
        goto LAB145;

LAB147:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB148:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB150;

LAB149:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB151;

LAB152:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB153:    goto LAB16;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB22:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB21;

LAB23:    xsi_set_current_line(51, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 3568);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 3);
    goto LAB25;

LAB26:    *((unsigned int *)t9) = 1;
    goto LAB29;

LAB31:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB30;

LAB32:    xsi_set_current_line(54, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3568);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB34;

LAB35:    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB40:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB39;

LAB41:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng2)));
    t17 = (t0 + 3568);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 3);
    goto LAB43;

LAB46:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng3)));
    t17 = (t0 + 3568);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 3);
    goto LAB50;

LAB51:    *((unsigned int *)t9) = 1;
    goto LAB54;

LAB56:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB55;

LAB57:    xsi_set_current_line(59, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3568);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB59;

LAB60:    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB65:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB64;

LAB66:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng3)));
    t17 = (t0 + 3568);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 3);
    goto LAB68;

LAB69:    *((unsigned int *)t9) = 1;
    goto LAB72;

LAB74:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB73;

LAB75:    xsi_set_current_line(63, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3568);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB77;

LAB78:    xsi_set_current_line(65, ng0);

LAB81:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2048U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t7 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (t20 >> 4);
    t22 = (t21 & 1);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 4);
    t25 = (t24 & 1);
    *((unsigned int *)t4) = t25;
    t10 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t11 = (t9 + 4);
    t17 = (t10 + 4);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t10);
    t29 = (t26 ^ t27);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t17);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t33 & t40);
    if (t41 != 0)
        goto LAB83;

LAB82:    if (t39 != 0)
        goto LAB84;

LAB85:    memset(t42, 0, 8);
    t19 = (t36 + 4);
    t43 = *((unsigned int *)t19);
    t44 = (~(t43));
    t45 = *((unsigned int *)t36);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t19) != 0)
        goto LAB88;

LAB89:    t34 = (t42 + 4);
    t48 = *((unsigned int *)t42);
    t49 = (!(t48));
    t50 = *((unsigned int *)t34);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB90;

LAB91:    memcpy(t86, t42, 8);

LAB92:    memset(t113, 0, 8);
    t114 = (t86 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t86);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t114) != 0)
        goto LAB106;

LAB107:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = (!(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB108;

LAB109:    memcpy(t161, t113, 8);

LAB110:    memset(t189, 0, 8);
    t190 = (t161 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t161);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t190) != 0)
        goto LAB124;

LAB125:    t197 = (t189 + 4);
    t198 = *((unsigned int *)t189);
    t199 = (!(t198));
    t200 = *((unsigned int *)t197);
    t201 = (t199 || t200);
    if (t201 > 0)
        goto LAB126;

LAB127:    memcpy(t237, t189, 8);

LAB128:    t265 = (t237 + 4);
    t266 = *((unsigned int *)t265);
    t267 = (~(t266));
    t268 = *((unsigned int *)t237);
    t269 = (t268 & t267);
    t270 = (t269 != 0);
    if (t270 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(72, ng0);

LAB144:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB142:    goto LAB80;

LAB83:    *((unsigned int *)t36) = 1;
    goto LAB85;

LAB84:    t18 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t42) = 1;
    goto LAB89;

LAB88:    t28 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB89;

LAB90:    t35 = (t0 + 2048U);
    t52 = *((char **)t35);
    memset(t53, 0, 8);
    t35 = (t53 + 4);
    t54 = (t52 + 4);
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 5);
    t57 = (t56 & 1);
    *((unsigned int *)t53) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 >> 5);
    t60 = (t59 & 1);
    *((unsigned int *)t35) = t60;
    t61 = ((char*)((ng2)));
    memset(t62, 0, 8);
    t63 = (t53 + 4);
    t64 = (t61 + 4);
    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t63);
    t69 = *((unsigned int *)t64);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t64);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB94;

LAB93:    if (t74 != 0)
        goto LAB95;

LAB96:    memset(t78, 0, 8);
    t79 = (t62 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t62);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t79) != 0)
        goto LAB99;

LAB100:    t87 = *((unsigned int *)t42);
    t88 = *((unsigned int *)t78);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = (t42 + 4);
    t91 = (t78 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB92;

LAB94:    *((unsigned int *)t62) = 1;
    goto LAB96;

LAB95:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t78) = 1;
    goto LAB100;

LAB99:    t85 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB100;

LAB101:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t42 + 4);
    t101 = (t78 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t42);
    t8 = (t104 & t103);
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t78);
    t108 = (t107 & t106);
    t109 = (~(t8));
    t110 = (~(t108));
    t111 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t111 & t109);
    t112 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t112 & t110);
    goto LAB103;

LAB104:    *((unsigned int *)t113) = 1;
    goto LAB107;

LAB106:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB107;

LAB108:    t126 = (t0 + 2048U);
    t127 = *((char **)t126);
    memset(t128, 0, 8);
    t126 = (t128 + 4);
    t129 = (t127 + 4);
    t130 = *((unsigned int *)t127);
    t131 = (t130 >> 6);
    t132 = (t131 & 1);
    *((unsigned int *)t128) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 >> 6);
    t135 = (t134 & 1);
    *((unsigned int *)t126) = t135;
    t136 = ((char*)((ng2)));
    memset(t137, 0, 8);
    t138 = (t128 + 4);
    t139 = (t136 + 4);
    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = *((unsigned int *)t138);
    t144 = *((unsigned int *)t139);
    t145 = (t143 ^ t144);
    t146 = (t142 | t145);
    t147 = *((unsigned int *)t138);
    t148 = *((unsigned int *)t139);
    t149 = (t147 | t148);
    t150 = (~(t149));
    t151 = (t146 & t150);
    if (t151 != 0)
        goto LAB112;

LAB111:    if (t149 != 0)
        goto LAB113;

LAB114:    memset(t153, 0, 8);
    t154 = (t137 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t137);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t154) != 0)
        goto LAB117;

LAB118:    t162 = *((unsigned int *)t113);
    t163 = *((unsigned int *)t153);
    t164 = (t162 | t163);
    *((unsigned int *)t161) = t164;
    t165 = (t113 + 4);
    t166 = (t153 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB112:    *((unsigned int *)t137) = 1;
    goto LAB114;

LAB113:    t152 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t153) = 1;
    goto LAB118;

LAB117:    t160 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB118;

LAB119:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t113 + 4);
    t176 = (t153 + 4);
    t177 = *((unsigned int *)t175);
    t178 = (~(t177));
    t179 = *((unsigned int *)t113);
    t180 = (t179 & t178);
    t181 = *((unsigned int *)t176);
    t182 = (~(t181));
    t183 = *((unsigned int *)t153);
    t184 = (t183 & t182);
    t185 = (~(t180));
    t186 = (~(t184));
    t187 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t187 & t185);
    t188 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t188 & t186);
    goto LAB121;

LAB122:    *((unsigned int *)t189) = 1;
    goto LAB125;

LAB124:    t196 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB125;

LAB126:    t202 = (t0 + 2048U);
    t203 = *((char **)t202);
    memset(t204, 0, 8);
    t202 = (t204 + 4);
    t205 = (t203 + 4);
    t206 = *((unsigned int *)t203);
    t207 = (t206 >> 7);
    t208 = (t207 & 1);
    *((unsigned int *)t204) = t208;
    t209 = *((unsigned int *)t205);
    t210 = (t209 >> 7);
    t211 = (t210 & 1);
    *((unsigned int *)t202) = t211;
    t212 = ((char*)((ng2)));
    memset(t213, 0, 8);
    t214 = (t204 + 4);
    t215 = (t212 + 4);
    t216 = *((unsigned int *)t204);
    t217 = *((unsigned int *)t212);
    t218 = (t216 ^ t217);
    t219 = *((unsigned int *)t214);
    t220 = *((unsigned int *)t215);
    t221 = (t219 ^ t220);
    t222 = (t218 | t221);
    t223 = *((unsigned int *)t214);
    t224 = *((unsigned int *)t215);
    t225 = (t223 | t224);
    t226 = (~(t225));
    t227 = (t222 & t226);
    if (t227 != 0)
        goto LAB130;

LAB129:    if (t225 != 0)
        goto LAB131;

LAB132:    memset(t229, 0, 8);
    t230 = (t213 + 4);
    t231 = *((unsigned int *)t230);
    t232 = (~(t231));
    t233 = *((unsigned int *)t213);
    t234 = (t233 & t232);
    t235 = (t234 & 1U);
    if (t235 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t230) != 0)
        goto LAB135;

LAB136:    t238 = *((unsigned int *)t189);
    t239 = *((unsigned int *)t229);
    t240 = (t238 | t239);
    *((unsigned int *)t237) = t240;
    t241 = (t189 + 4);
    t242 = (t229 + 4);
    t243 = (t237 + 4);
    t244 = *((unsigned int *)t241);
    t245 = *((unsigned int *)t242);
    t246 = (t244 | t245);
    *((unsigned int *)t243) = t246;
    t247 = *((unsigned int *)t243);
    t248 = (t247 != 0);
    if (t248 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB128;

LAB130:    *((unsigned int *)t213) = 1;
    goto LAB132;

LAB131:    t228 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t228) = 1;
    goto LAB132;

LAB133:    *((unsigned int *)t229) = 1;
    goto LAB136;

LAB135:    t236 = (t229 + 4);
    *((unsigned int *)t229) = 1;
    *((unsigned int *)t236) = 1;
    goto LAB136;

LAB137:    t249 = *((unsigned int *)t237);
    t250 = *((unsigned int *)t243);
    *((unsigned int *)t237) = (t249 | t250);
    t251 = (t189 + 4);
    t252 = (t229 + 4);
    t253 = *((unsigned int *)t251);
    t254 = (~(t253));
    t255 = *((unsigned int *)t189);
    t256 = (t255 & t254);
    t257 = *((unsigned int *)t252);
    t258 = (~(t257));
    t259 = *((unsigned int *)t229);
    t260 = (t259 & t258);
    t261 = (~(t256));
    t262 = (~(t260));
    t263 = *((unsigned int *)t243);
    *((unsigned int *)t243) = (t263 & t261);
    t264 = *((unsigned int *)t243);
    *((unsigned int *)t243) = (t264 & t262);
    goto LAB139;

LAB140:    xsi_set_current_line(67, ng0);

LAB143:    xsi_set_current_line(68, ng0);
    t271 = ((char*)((ng6)));
    t272 = (t0 + 3088);
    xsi_vlogvar_assign_value(t272, t271, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB142;

LAB145:    *((unsigned int *)t9) = 1;
    goto LAB148;

LAB150:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB149;

LAB151:    xsi_set_current_line(78, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3568);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB153;

}


extern void work_m_00000000000418130518_4020927633_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000000418130518_4020927633", "isim/test_bench_isim_beh.exe.sim/work/m_00000000000418130518_4020927633.didat");
	xsi_register_executes(pe);
}
