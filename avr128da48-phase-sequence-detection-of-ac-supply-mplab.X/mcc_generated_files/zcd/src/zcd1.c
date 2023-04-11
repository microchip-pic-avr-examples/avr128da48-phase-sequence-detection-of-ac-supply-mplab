/**
  ZCD1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    zcd1.c

  @Summary
    This is the generated driver implementation file for the ZCD1

  @Description
    This source file provides APIs for ZCD1.
    Generation Information :
        Driver Version    :  1.0.0
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.20
        MPLAB             :  MPLABX v5.40
*/
/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/


#include "../zcd1.h"

extern volatile uint8_t ZCD_Int_flag[3];       //application variables 
extern volatile uint8_t PhaseLossFlag[3];      //For 3 ZCD solution (64 pin controller)	

extern volatile uint16_t timerCounterValue;   //we need uint16_t array for 64 pin controller timer calculation 

int8_t ZCD1_Initialize(void)
{   
    //INTMODE Interrupt on rising input signal; 
    ZCD1.INTCTRL = 0x1;

    //ENABLE enabled; INVERT disabled; RUNSTDBY disabled; OUTEN disabled; 
    ZCD1.CTRLA = 0x1;
    
    return 0;
}

ISR(ZCD1_ZCD_vect)
{
    /* Insert your ZCD interrupt handling code here */
 if (ZCD_Int_flag[0] == 1)
    {
	    ZCD_Int_flag[0] = 0;
	    timerCounterValue  = TCA0_SINGLE_CNT; 
	}
 ZCD_Int_flag[1] = 1;
 PhaseLossFlag[1] = 1;
    /* The interrupt flag has to be cleared manually */
    ZCD1.STATUS = ZCD_CROSSIF_bm;
}
