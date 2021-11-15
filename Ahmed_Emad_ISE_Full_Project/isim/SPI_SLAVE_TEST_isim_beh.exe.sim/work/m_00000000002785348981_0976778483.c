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
static const char *ng0 = "F:/Si_VISION_INTERN/Assignment/Code/SPI_SLAVE/SPI_SLAVE_TEST.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "*** TEST CASE 1 -> Write /Read Operation ***";
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {8, 0};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {170U, 0U};
static const char *ng11 = "Write and read are PASSED";
static const char *ng12 = "Write and read are FAILED";
static int ng13[] = {256, 0};
static const char *ng14 = "Multi Write and read are PASSED";
static const char *ng15 = "Multi Write and read are FAILED";



static void Always_53_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3000);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_55_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4456);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 3000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2840);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t13 = (t5 + 4);
    t14 = (t8 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB5;

LAB6:
LAB7:    t41 = (t0 + 2040);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 1);
    goto LAB2;

LAB5:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    goto LAB7;

}

static void Initial_57_2(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);

LAB4:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(90, ng0);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB8:    xsi_set_current_line(80, ng0);

LAB10:    xsi_set_current_line(81, ng0);
    t13 = (t0 + 3160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3160);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    t21 = (t0 + 2200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t20, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 1720);
    xsi_vlogvar_assign_value(t25, t16, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB13:    xsi_set_current_line(85, ng0);

LAB15:    xsi_set_current_line(86, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1720);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB12;

LAB18:    xsi_set_current_line(90, ng0);

LAB20:    xsi_set_current_line(91, ng0);
    t13 = (t0 + 1720);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t17) == 0)
        goto LAB21;

LAB23:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;

LAB24:    t19 = (t16 + 4);
    t20 = (t15 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    *((unsigned int *)t16) = t32;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB26;

LAB25:    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 1U);
    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & 1U);
    t21 = (t0 + 1720);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    *((unsigned int *)t16) = 1;
    goto LAB24;

LAB26:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t20);
    *((unsigned int *)t16) = (t33 | t34);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t35 | t36);
    goto LAB25;

LAB27:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB17;

LAB28:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(115, ng0);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB40:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB31:    xsi_set_current_line(105, ng0);

LAB33:    xsi_set_current_line(106, ng0);
    t13 = (t0 + 3160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3160);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    t21 = (t0 + 2200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t20, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 1720);
    xsi_vlogvar_assign_value(t25, t16, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB30;

LAB36:    xsi_set_current_line(110, ng0);

LAB38:    xsi_set_current_line(111, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1720);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB35;

LAB41:    xsi_set_current_line(115, ng0);

LAB43:    xsi_set_current_line(116, ng0);
    t13 = (t0 + 1320U);
    t14 = *((char **)t13);
    t13 = (t0 + 3320);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    memset(t24, 0, 8);
    t18 = (t24 + 4);
    t19 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (t26 >> 0);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t19);
    t29 = (t28 >> 0);
    *((unsigned int *)t18) = t29;
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t30 & 127U);
    t31 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t31 & 127U);
    xsi_vlogtype_concat(t16, 8, 8, 2U, t24, 7, t14, 1);
    t20 = (t0 + 3320);
    xsi_vlogvar_assign_value(t20, t16, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB40;

LAB45:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t13 = (t5 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t13);
    t12 = *((unsigned int *)t14);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB49;

LAB46:    if (t30 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t17 = (t6 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(125, ng0);

LAB53:    xsi_set_current_line(126, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);

LAB52:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB48:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(123, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB52;

LAB54:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(147, ng0);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB55:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(152, ng0);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB60:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(158, ng0);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB65:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2520);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t13, 32);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB56:    xsi_set_current_line(147, ng0);

LAB58:    xsi_set_current_line(148, ng0);
    t13 = (t0 + 3160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3160);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    t21 = (t0 + 2200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t20, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 1720);
    xsi_vlogvar_assign_value(t25, t16, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB55;

LAB61:    xsi_set_current_line(152, ng0);

LAB63:    xsi_set_current_line(153, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1720);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB60;

LAB66:    xsi_set_current_line(158, ng0);

LAB68:    xsi_set_current_line(159, ng0);
    xsi_set_current_line(159, ng0);
    t15 = ((char*)((ng1)));
    t17 = (t0 + 2200);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 32);

LAB69:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB65;

LAB70:    xsi_set_current_line(159, ng0);

LAB72:    xsi_set_current_line(160, ng0);
    t13 = (t0 + 1720);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t17) == 0)
        goto LAB73;

LAB75:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;

LAB76:    t19 = (t16 + 4);
    t20 = (t15 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    *((unsigned int *)t16) = t32;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB78;

LAB77:    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 1U);
    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & 1U);
    t21 = (t0 + 1720);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    *((unsigned int *)t16) = 1;
    goto LAB76;

LAB78:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t20);
    *((unsigned int *)t16) = (t33 | t34);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t35 | t36);
    goto LAB77;

LAB79:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB69;

LAB80:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB82:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(180, ng0);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB87:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(187, ng0);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB92:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2680);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t13, 32);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t13);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB111;

LAB108:    if (t30 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t6) = 1;

LAB111:    t15 = (t6 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(201, ng0);

LAB115:    xsi_set_current_line(202, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);

LAB114:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB83:    xsi_set_current_line(175, ng0);

LAB85:    xsi_set_current_line(176, ng0);
    t13 = (t0 + 3160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3160);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng8)));
    t21 = (t0 + 2200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t20, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 1720);
    xsi_vlogvar_assign_value(t25, t16, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB82;

LAB88:    xsi_set_current_line(180, ng0);

LAB90:    xsi_set_current_line(181, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1720);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB87;

LAB93:    xsi_set_current_line(187, ng0);

LAB95:    xsi_set_current_line(189, ng0);
    xsi_set_current_line(189, ng0);
    t15 = ((char*)((ng1)));
    t17 = (t0 + 2200);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 32);

LAB96:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t13);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB102;

LAB101:    if (t30 != 0)
        goto LAB103;

LAB104:    t15 = (t6 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB105;

LAB106:
LAB107:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB92;

LAB97:    xsi_set_current_line(189, ng0);

LAB99:    xsi_set_current_line(190, ng0);
    t13 = (t0 + 1320U);
    t14 = *((char **)t13);
    t13 = (t0 + 3320);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    memset(t24, 0, 8);
    t18 = (t24 + 4);
    t19 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (t26 >> 0);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t19);
    t29 = (t28 >> 0);
    *((unsigned int *)t18) = t29;
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t30 & 127U);
    t31 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t31 & 127U);
    xsi_vlogtype_concat(t16, 8, 8, 2U, t24, 7, t14, 1);
    t20 = (t0 + 3320);
    xsi_vlogvar_assign_value(t20, t16, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 4704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB96;

LAB102:    *((unsigned int *)t6) = 1;
    goto LAB104;

LAB103:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(195, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 3480);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB107;

LAB110:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(199, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB114;

LAB116:    goto LAB1;

}


extern void work_m_00000000002785348981_0976778483_init()
{
	static char *pe[] = {(void *)Always_53_0,(void *)Always_55_1,(void *)Initial_57_2};
	xsi_register_didat("work_m_00000000002785348981_0976778483", "isim/SPI_SLAVE_TEST_isim_beh.exe.sim/work/m_00000000002785348981_0976778483.didat");
	xsi_register_executes(pe);
}
