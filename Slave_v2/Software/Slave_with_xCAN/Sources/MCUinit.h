/*
** ###################################################################
**     This code is generated by the Device Initialization Tool.
**     It is overwritten during code generation.
**     USER MODIFICATION ARE PRESERVED ONLY INSIDE EXPLICITLY MARKED SECTIONS.
**
**     Project   : Slave_with_xCAN
**     Processor : MC9S12XDP512BMFV
**     Version   : Component 02.004, Driver 01.05, CPU db: 2.87.301
**     Datasheet : MC9S12XDP512RMV2 Rev. 2.18 May 2008
**     Date/Time : 05/11/2014, 8:06 PM
**     Abstract  :
**         This module contains device initialization code 
**         for selected on-chip peripherals.
**     Contents  :
**         Function "MCU_init" initializes selected peripherals
**
**     Copyright : 1997 - 2010 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################
*/

#ifndef __Slave_with_xCAN_H
#define __Slave_with_xCAN_H 1

/* Include shared modules, which are used for whole project */


/* User declarations and definitions */
/*   Code, declarations and definitions here will be preserved during code generation */
/* End of user declarations and definitions */
#pragma CODE_SEG DEFAULT

extern void MCU_init(void);
/*
** ===================================================================
**     Method      :  MCU_init (component MC9S12XDP512_144)
**
**     Description :
**         Device initialization code for selected peripherals.
** ===================================================================
*/



/*lint -save  -e765 Disable MISRA rule (8.10) checking. */
#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isr_default(void);
/*
** ===================================================================
**     Interrupt handler : isr_default
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iPIT2_1kHz(void);
/*
** ===================================================================
**     Interrupt handler : iPIT2_1kHz
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iPIT1_16kHz(void);
/*
** ===================================================================
**     Interrupt handler : iPIT1_16kHz
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iPIT0_10Hz(void);
/*
** ===================================================================
**     Interrupt handler : iPIT0_10Hz
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isrVcan0tx(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0tx
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iCAN0_RX(void);
/*
** ===================================================================
**     Interrupt handler : iCAN0_RX
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isrVcan0err(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0err
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isrVcan0wkup(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0wkup
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isrVspi1(void);
/*
** ===================================================================
**     Interrupt handler : isrVspi1
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void isrVporth(void);
/*
** ===================================================================
**     Interrupt handler : isrVporth
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iADC1_seq_complete(void);
/*
** ===================================================================
**     Interrupt handler : iADC1_seq_complete
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



#pragma CODE_SEG __NEAR_SEG NON_BANKED
__interrupt void iADC0_seq_complete(void);
/*
** ===================================================================
**     Interrupt handler : iADC0_seq_complete
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#pragma CODE_SEG DEFAULT



/*lint -restore Enable MISRA rule (8.10) checking. */



/* END Slave_with_xCAN */

#endif
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.02 [04.44]
**     for the Freescale HCS12X series of microcontrollers.
**
** ###################################################################
*/
