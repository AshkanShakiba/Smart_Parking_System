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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003576798793_3190593924_init();
    work_m_00000000002139699342_2825296176_init();
    work_m_00000000003023228933_3134404318_init();
    work_m_00000000001960098936_0040849851_init();
    work_m_00000000003473992844_2679662850_init();
    work_m_00000000002714261068_0422081018_init();
    work_m_00000000002624979619_3160691583_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002624979619_3160691583");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
