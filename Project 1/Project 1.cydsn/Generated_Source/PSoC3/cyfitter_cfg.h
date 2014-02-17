/*******************************************************************************
* FILENAME: cyfitter_cfg.h
* PSoC Creator 2.1 Nightly Build 1118
*
* Description:
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright 2010-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef CYFITTER_CFG_H
#define CYFITTER_CFG_H

#include <cytypes.h>

extern void cyfitter_cfg(void);

/* Analog Set/Unset methods */
extern void AnalogSetDefault(void);
extern void SetAnalogRoutingPumps(uint8 enabled);
extern void ADC_AMux_Set(uint8 channel);
extern void ADC_AMux_Unset(uint8 channel);


#endif /* CYFITTER_CFG_H */

/*[]*/
