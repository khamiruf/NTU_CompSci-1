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
    work_m_00000000001234773414_3832581141_init();
    work_m_00000000001064092792_3480948628_init();
    work_m_00000000000795732679_2150015534_init();
    work_m_00000000004034133344_3037777339_init();
    work_m_00000000002320704264_1621107508_init();
    work_m_00000000002786870122_2067619323_init();
    work_m_00000000000265529581_2725559894_init();
    work_m_00000000000079571524_2684609642_init();
    work_m_00000000003539225538_3790717934_init();
    work_m_00000000000465231889_3213298780_init();
    work_m_00000000003812254087_3797123641_init();
    work_m_00000000000543564739_2663573311_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000543564739_2663573311");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
