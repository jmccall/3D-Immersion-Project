#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* USBFS_bus_reset */
#define USBFS_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_bus_reset__INTC_MASK 0x800000u
#define USBFS_bus_reset__INTC_NUMBER 23u
#define USBFS_bus_reset__INTC_PRIOR_NUM 7u
#define USBFS_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBFS_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_Ext_CP_Clk */
#define ADC_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_Ext_CP_Clk__INDEX 0x00u
#define ADC_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* USBFS_arb_int */
#define USBFS_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_arb_int__INTC_MASK 0x400000u
#define USBFS_arb_int__INTC_NUMBER 22u
#define USBFS_arb_int__INTC_PRIOR_NUM 7u
#define USBFS_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBFS_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_sof_int */
#define USBFS_sof_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_sof_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_sof_int__INTC_MASK 0x200000u
#define USBFS_sof_int__INTC_NUMBER 21u
#define USBFS_sof_int__INTC_PRIOR_NUM 7u
#define USBFS_sof_int__INTC_PRIOR_REG CYREG_NVIC_PRI_21
#define USBFS_sof_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_sof_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_dp_int */
#define USBFS_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_dp_int__INTC_MASK 0x1000u
#define USBFS_dp_int__INTC_NUMBER 12u
#define USBFS_dp_int__INTC_PRIOR_NUM 7u
#define USBFS_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBFS_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_theACLK */
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x00u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x01u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x01u

/* LCD_LCDPort */
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* PWM_PWMUDB */
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB11_12_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB11_12_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB11_12_MSK
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB11_12_MSK
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK 0x80u
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS 7
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG CYREG_B0_UDB11_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB11_ST_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG CYREG_B0_UDB11_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG CYREG_B0_UDB11_ST_CTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK 0x80u
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG CYREG_B0_UDB11_MSK
#define PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B0_UDB11_12_A0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B0_UDB11_12_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B0_UDB11_12_D0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B0_UDB11_12_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B0_UDB11_12_F0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B0_UDB11_12_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B0_UDB11_A0_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B0_UDB11_A0
#define PWM_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B0_UDB11_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B0_UDB11_D0_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B0_UDB11_D0
#define PWM_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B0_UDB11_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B0_UDB11_F0_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B0_UDB11_F0
#define PWM_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B0_UDB11_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__MASK 0x01u
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__POS 0
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_REG CYREG_B0_UDB11_12_ST
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__MASK 0x04u
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__POS 2
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__MASK 0x08u
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__POS 3
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__MASK 0x20u
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__POS 5
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK 0x2Du
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_REG CYREG_B0_UDB11_MSK
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__PER_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CNT_REG CYREG_B0_UDB11_ST_CTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CONTROL_REG CYREG_B0_UDB11_ST_CTL
#define PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_REG CYREG_B0_UDB11_ST

/* USBFS_ep_0 */
#define USBFS_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_ep_0__INTC_MASK 0x1000000u
#define USBFS_ep_0__INTC_NUMBER 24u
#define USBFS_ep_0__INTC_PRIOR_NUM 7u
#define USBFS_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBFS_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_ep_1 */
#define USBFS_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_ep_1__INTC_MASK 0x01u
#define USBFS_ep_1__INTC_NUMBER 0u
#define USBFS_ep_1__INTC_PRIOR_NUM 7u
#define USBFS_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define USBFS_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_ep_2 */
#define USBFS_ep_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_ep_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_ep_2__INTC_MASK 0x02u
#define USBFS_ep_2__INTC_NUMBER 1u
#define USBFS_ep_2__INTC_PRIOR_NUM 7u
#define USBFS_ep_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define USBFS_ep_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_ep_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* PWM_Clock */
#define PWM_Clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define PWM_Clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define PWM_Clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define PWM_Clock__CFG2_SRC_SEL_MASK 0x07u
#define PWM_Clock__INDEX 0x01u
#define PWM_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define PWM_Clock__PM_ACT_MSK 0x02u
#define PWM_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define PWM_Clock__PM_STBY_MSK 0x02u

/* USBFS_USB */
#define USBFS_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBFS_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBFS_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBFS_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBFS_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBFS_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBFS_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBFS_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBFS_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBFS_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBFS_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBFS_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBFS_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBFS_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBFS_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBFS_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBFS_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBFS_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBFS_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBFS_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBFS_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBFS_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBFS_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBFS_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBFS_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBFS_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBFS_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBFS_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBFS_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBFS_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBFS_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBFS_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBFS_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBFS_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBFS_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBFS_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBFS_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBFS_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBFS_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBFS_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBFS_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBFS_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBFS_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBFS_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBFS_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBFS_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBFS_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBFS_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBFS_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBFS_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBFS_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBFS_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBFS_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBFS_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBFS_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBFS_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBFS_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBFS_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBFS_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBFS_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBFS_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBFS_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBFS_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBFS_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBFS_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBFS_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBFS_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBFS_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBFS_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBFS_USB__CR0 CYREG_USB_CR0
#define USBFS_USB__CR1 CYREG_USB_CR1
#define USBFS_USB__CWA CYREG_USB_CWA
#define USBFS_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBFS_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBFS_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBFS_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBFS_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBFS_USB__EP0_CR CYREG_USB_EP0_CR
#define USBFS_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBFS_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBFS_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBFS_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBFS_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBFS_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBFS_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBFS_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBFS_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBFS_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBFS_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBFS_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBFS_USB__PM_ACT_MSK 0x01u
#define USBFS_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBFS_USB__PM_STBY_MSK 0x01u
#define USBFS_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBFS_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBFS_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBFS_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBFS_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBFS_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBFS_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBFS_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBFS_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBFS_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBFS_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBFS_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBFS_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBFS_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBFS_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBFS_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBFS_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBFS_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBFS_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBFS_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBFS_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBFS_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBFS_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBFS_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBFS_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBFS_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBFS_USB__SOF0 CYREG_USB_SOF0
#define USBFS_USB__SOF1 CYREG_USB_SOF1
#define USBFS_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBFS_USB__USBIO_CR1 CYREG_USB_USBIO_CR1
#define USBFS_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN

/* ADC_DSM4 */
#define ADC_DSM4__BUF0 CYREG_DSM0_BUF0
#define ADC_DSM4__BUF1 CYREG_DSM0_BUF1
#define ADC_DSM4__BUF2 CYREG_DSM0_BUF2
#define ADC_DSM4__BUF3 CYREG_DSM0_BUF3
#define ADC_DSM4__CLK CYREG_DSM0_CLK
#define ADC_DSM4__CR0 CYREG_DSM0_CR0
#define ADC_DSM4__CR1 CYREG_DSM0_CR1
#define ADC_DSM4__CR10 CYREG_DSM0_CR10
#define ADC_DSM4__CR11 CYREG_DSM0_CR11
#define ADC_DSM4__CR12 CYREG_DSM0_CR12
#define ADC_DSM4__CR13 CYREG_DSM0_CR13
#define ADC_DSM4__CR14 CYREG_DSM0_CR14
#define ADC_DSM4__CR15 CYREG_DSM0_CR15
#define ADC_DSM4__CR16 CYREG_DSM0_CR16
#define ADC_DSM4__CR17 CYREG_DSM0_CR17
#define ADC_DSM4__CR2 CYREG_DSM0_CR2
#define ADC_DSM4__CR3 CYREG_DSM0_CR3
#define ADC_DSM4__CR4 CYREG_DSM0_CR4
#define ADC_DSM4__CR5 CYREG_DSM0_CR5
#define ADC_DSM4__CR6 CYREG_DSM0_CR6
#define ADC_DSM4__CR7 CYREG_DSM0_CR7
#define ADC_DSM4__CR8 CYREG_DSM0_CR8
#define ADC_DSM4__CR9 CYREG_DSM0_CR9
#define ADC_DSM4__DEM0 CYREG_DSM0_DEM0
#define ADC_DSM4__DEM1 CYREG_DSM0_DEM1
#define ADC_DSM4__MISC CYREG_DSM0_MISC
#define ADC_DSM4__OUT0 CYREG_DSM0_OUT0
#define ADC_DSM4__OUT1 CYREG_DSM0_OUT1
#define ADC_DSM4__REF0 CYREG_DSM0_REF0
#define ADC_DSM4__REF1 CYREG_DSM0_REF1
#define ADC_DSM4__REF2 CYREG_DSM0_REF2
#define ADC_DSM4__REF3 CYREG_DSM0_REF3
#define ADC_DSM4__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DSM4__SW0 CYREG_DSM0_SW0
#define ADC_DSM4__SW2 CYREG_DSM0_SW2
#define ADC_DSM4__SW3 CYREG_DSM0_SW3
#define ADC_DSM4__SW4 CYREG_DSM0_SW4
#define ADC_DSM4__SW6 CYREG_DSM0_SW6
#define ADC_DSM4__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DSM4__TST0 CYREG_DSM0_TST0
#define ADC_DSM4__TST1 CYREG_DSM0_TST1

/* USBFS_Dm */
#define USBFS_Dm__0__MASK 0x80u
#define USBFS_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBFS_Dm__0__PORT 15u
#define USBFS_Dm__0__SHIFT 7
#define USBFS_Dm__AG CYREG_PRT15_AG
#define USBFS_Dm__AMUX CYREG_PRT15_AMUX
#define USBFS_Dm__BIE CYREG_PRT15_BIE
#define USBFS_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBFS_Dm__BYP CYREG_PRT15_BYP
#define USBFS_Dm__CTL CYREG_PRT15_CTL
#define USBFS_Dm__DM0 CYREG_PRT15_DM0
#define USBFS_Dm__DM1 CYREG_PRT15_DM1
#define USBFS_Dm__DM2 CYREG_PRT15_DM2
#define USBFS_Dm__DR CYREG_PRT15_DR
#define USBFS_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBFS_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBFS_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBFS_Dm__MASK 0x80u
#define USBFS_Dm__PORT 15u
#define USBFS_Dm__PRT CYREG_PRT15_PRT
#define USBFS_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBFS_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBFS_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBFS_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBFS_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBFS_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBFS_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBFS_Dm__PS CYREG_PRT15_PS
#define USBFS_Dm__SHIFT 7
#define USBFS_Dm__SLW CYREG_PRT15_SLW

/* USBFS_Dp */
#define USBFS_Dp__0__MASK 0x40u
#define USBFS_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBFS_Dp__0__PORT 15u
#define USBFS_Dp__0__SHIFT 6
#define USBFS_Dp__AG CYREG_PRT15_AG
#define USBFS_Dp__AMUX CYREG_PRT15_AMUX
#define USBFS_Dp__BIE CYREG_PRT15_BIE
#define USBFS_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBFS_Dp__BYP CYREG_PRT15_BYP
#define USBFS_Dp__CTL CYREG_PRT15_CTL
#define USBFS_Dp__DM0 CYREG_PRT15_DM0
#define USBFS_Dp__DM1 CYREG_PRT15_DM1
#define USBFS_Dp__DM2 CYREG_PRT15_DM2
#define USBFS_Dp__DR CYREG_PRT15_DR
#define USBFS_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBFS_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBFS_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBFS_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBFS_Dp__MASK 0x40u
#define USBFS_Dp__PORT 15u
#define USBFS_Dp__PRT CYREG_PRT15_PRT
#define USBFS_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBFS_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBFS_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBFS_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBFS_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBFS_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBFS_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBFS_Dp__PS CYREG_PRT15_PS
#define USBFS_Dp__SHIFT 6
#define USBFS_Dp__SLW CYREG_PRT15_SLW
#define USBFS_Dp__SNAP CYREG_PICU_15_SNAP_15

/* ADC_DEC */
#define ADC_DEC__COHER CYREG_DEC_COHER
#define ADC_DEC__CR CYREG_DEC_CR
#define ADC_DEC__DR1 CYREG_DEC_DR1
#define ADC_DEC__DR2 CYREG_DEC_DR2
#define ADC_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DEC__PM_ACT_MSK 0x01u
#define ADC_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DEC__PM_STBY_MSK 0x01u
#define ADC_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DEC__SR CYREG_DEC_SR
#define ADC_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x20000000u
#define ADC_IRQ__INTC_NUMBER 29u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Finger1 */
#define Finger1__0__MASK 0x01u
#define Finger1__0__PC CYREG_PRT4_PC0
#define Finger1__0__PORT 4u
#define Finger1__0__SHIFT 0
#define Finger1__AG CYREG_PRT4_AG
#define Finger1__AMUX CYREG_PRT4_AMUX
#define Finger1__BIE CYREG_PRT4_BIE
#define Finger1__BIT_MASK CYREG_PRT4_BIT_MASK
#define Finger1__BYP CYREG_PRT4_BYP
#define Finger1__CTL CYREG_PRT4_CTL
#define Finger1__DM0 CYREG_PRT4_DM0
#define Finger1__DM1 CYREG_PRT4_DM1
#define Finger1__DM2 CYREG_PRT4_DM2
#define Finger1__DR CYREG_PRT4_DR
#define Finger1__INP_DIS CYREG_PRT4_INP_DIS
#define Finger1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Finger1__LCD_EN CYREG_PRT4_LCD_EN
#define Finger1__MASK 0x01u
#define Finger1__PORT 4u
#define Finger1__PRT CYREG_PRT4_PRT
#define Finger1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Finger1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Finger1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Finger1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Finger1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Finger1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Finger1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Finger1__PS CYREG_PRT4_PS
#define Finger1__SHIFT 0
#define Finger1__SLW CYREG_PRT4_SLW

/* Finger2 */
#define Finger2__0__MASK 0x02u
#define Finger2__0__PC CYREG_PRT4_PC1
#define Finger2__0__PORT 4u
#define Finger2__0__SHIFT 1
#define Finger2__AG CYREG_PRT4_AG
#define Finger2__AMUX CYREG_PRT4_AMUX
#define Finger2__BIE CYREG_PRT4_BIE
#define Finger2__BIT_MASK CYREG_PRT4_BIT_MASK
#define Finger2__BYP CYREG_PRT4_BYP
#define Finger2__CTL CYREG_PRT4_CTL
#define Finger2__DM0 CYREG_PRT4_DM0
#define Finger2__DM1 CYREG_PRT4_DM1
#define Finger2__DM2 CYREG_PRT4_DM2
#define Finger2__DR CYREG_PRT4_DR
#define Finger2__INP_DIS CYREG_PRT4_INP_DIS
#define Finger2__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Finger2__LCD_EN CYREG_PRT4_LCD_EN
#define Finger2__MASK 0x02u
#define Finger2__PORT 4u
#define Finger2__PRT CYREG_PRT4_PRT
#define Finger2__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Finger2__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Finger2__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Finger2__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Finger2__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Finger2__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Finger2__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Finger2__PS CYREG_PRT4_PS
#define Finger2__SHIFT 1
#define Finger2__SLW CYREG_PRT4_SLW

/* Finger3 */
#define Finger3__0__MASK 0x04u
#define Finger3__0__PC CYREG_PRT4_PC2
#define Finger3__0__PORT 4u
#define Finger3__0__SHIFT 2
#define Finger3__AG CYREG_PRT4_AG
#define Finger3__AMUX CYREG_PRT4_AMUX
#define Finger3__BIE CYREG_PRT4_BIE
#define Finger3__BIT_MASK CYREG_PRT4_BIT_MASK
#define Finger3__BYP CYREG_PRT4_BYP
#define Finger3__CTL CYREG_PRT4_CTL
#define Finger3__DM0 CYREG_PRT4_DM0
#define Finger3__DM1 CYREG_PRT4_DM1
#define Finger3__DM2 CYREG_PRT4_DM2
#define Finger3__DR CYREG_PRT4_DR
#define Finger3__INP_DIS CYREG_PRT4_INP_DIS
#define Finger3__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Finger3__LCD_EN CYREG_PRT4_LCD_EN
#define Finger3__MASK 0x04u
#define Finger3__PORT 4u
#define Finger3__PRT CYREG_PRT4_PRT
#define Finger3__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Finger3__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Finger3__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Finger3__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Finger3__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Finger3__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Finger3__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Finger3__PS CYREG_PRT4_PS
#define Finger3__SHIFT 2
#define Finger3__SLW CYREG_PRT4_SLW

/* Finger4 */
#define Finger4__0__MASK 0x08u
#define Finger4__0__PC CYREG_PRT4_PC3
#define Finger4__0__PORT 4u
#define Finger4__0__SHIFT 3
#define Finger4__AG CYREG_PRT4_AG
#define Finger4__AMUX CYREG_PRT4_AMUX
#define Finger4__BIE CYREG_PRT4_BIE
#define Finger4__BIT_MASK CYREG_PRT4_BIT_MASK
#define Finger4__BYP CYREG_PRT4_BYP
#define Finger4__CTL CYREG_PRT4_CTL
#define Finger4__DM0 CYREG_PRT4_DM0
#define Finger4__DM1 CYREG_PRT4_DM1
#define Finger4__DM2 CYREG_PRT4_DM2
#define Finger4__DR CYREG_PRT4_DR
#define Finger4__INP_DIS CYREG_PRT4_INP_DIS
#define Finger4__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Finger4__LCD_EN CYREG_PRT4_LCD_EN
#define Finger4__MASK 0x08u
#define Finger4__PORT 4u
#define Finger4__PRT CYREG_PRT4_PRT
#define Finger4__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Finger4__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Finger4__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Finger4__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Finger4__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Finger4__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Finger4__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Finger4__PS CYREG_PRT4_PS
#define Finger4__SHIFT 3
#define Finger4__SLW CYREG_PRT4_SLW

/* LED_1 */
#define LED_1__0__MASK 0x04u
#define LED_1__0__PC CYREG_PRT6_PC2
#define LED_1__0__PORT 6u
#define LED_1__0__SHIFT 2
#define LED_1__AG CYREG_PRT6_AG
#define LED_1__AMUX CYREG_PRT6_AMUX
#define LED_1__BIE CYREG_PRT6_BIE
#define LED_1__BIT_MASK CYREG_PRT6_BIT_MASK
#define LED_1__BYP CYREG_PRT6_BYP
#define LED_1__CTL CYREG_PRT6_CTL
#define LED_1__DM0 CYREG_PRT6_DM0
#define LED_1__DM1 CYREG_PRT6_DM1
#define LED_1__DM2 CYREG_PRT6_DM2
#define LED_1__DR CYREG_PRT6_DR
#define LED_1__INP_DIS CYREG_PRT6_INP_DIS
#define LED_1__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define LED_1__LCD_EN CYREG_PRT6_LCD_EN
#define LED_1__MASK 0x04u
#define LED_1__PORT 6u
#define LED_1__PRT CYREG_PRT6_PRT
#define LED_1__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define LED_1__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define LED_1__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define LED_1__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define LED_1__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define LED_1__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define LED_1__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define LED_1__PS CYREG_PRT6_PS
#define LED_1__SHIFT 2
#define LED_1__SLW CYREG_PRT6_SLW

/* LED_2 */
#define LED_2__0__MASK 0x08u
#define LED_2__0__PC CYREG_PRT6_PC3
#define LED_2__0__PORT 6u
#define LED_2__0__SHIFT 3
#define LED_2__AG CYREG_PRT6_AG
#define LED_2__AMUX CYREG_PRT6_AMUX
#define LED_2__BIE CYREG_PRT6_BIE
#define LED_2__BIT_MASK CYREG_PRT6_BIT_MASK
#define LED_2__BYP CYREG_PRT6_BYP
#define LED_2__CTL CYREG_PRT6_CTL
#define LED_2__DM0 CYREG_PRT6_DM0
#define LED_2__DM1 CYREG_PRT6_DM1
#define LED_2__DM2 CYREG_PRT6_DM2
#define LED_2__DR CYREG_PRT6_DR
#define LED_2__INP_DIS CYREG_PRT6_INP_DIS
#define LED_2__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define LED_2__LCD_EN CYREG_PRT6_LCD_EN
#define LED_2__MASK 0x08u
#define LED_2__PORT 6u
#define LED_2__PRT CYREG_PRT6_PRT
#define LED_2__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define LED_2__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define LED_2__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define LED_2__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define LED_2__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define LED_2__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define LED_2__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define LED_2__PS CYREG_PRT6_PS
#define LED_2__SHIFT 3
#define LED_2__SLW CYREG_PRT6_SLW

/* SW_In */
#define SW_In__0__MASK 0x02u
#define SW_In__0__PC CYREG_PRT6_PC1
#define SW_In__0__PORT 6u
#define SW_In__0__SHIFT 1
#define SW_In__AG CYREG_PRT6_AG
#define SW_In__AMUX CYREG_PRT6_AMUX
#define SW_In__BIE CYREG_PRT6_BIE
#define SW_In__BIT_MASK CYREG_PRT6_BIT_MASK
#define SW_In__BYP CYREG_PRT6_BYP
#define SW_In__CTL CYREG_PRT6_CTL
#define SW_In__DM0 CYREG_PRT6_DM0
#define SW_In__DM1 CYREG_PRT6_DM1
#define SW_In__DM2 CYREG_PRT6_DM2
#define SW_In__DR CYREG_PRT6_DR
#define SW_In__INP_DIS CYREG_PRT6_INP_DIS
#define SW_In__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define SW_In__LCD_EN CYREG_PRT6_LCD_EN
#define SW_In__MASK 0x02u
#define SW_In__PORT 6u
#define SW_In__PRT CYREG_PRT6_PRT
#define SW_In__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define SW_In__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define SW_In__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define SW_In__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define SW_In__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define SW_In__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define SW_In__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define SW_In__PS CYREG_PRT6_PS
#define SW_In__SHIFT 1
#define SW_In__SLW CYREG_PRT6_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIG_FASTBOOT_ENABLED 0
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC5LP
#define BCLK__BUS_CLK__HZ 48000000U
#define BCLK__BUS_CLK__KHZ 48000U
#define BCLK__BUS_CLK__MHZ 48U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_REQXRES 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
#define CYDEV_VIO3_MV 5000
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
