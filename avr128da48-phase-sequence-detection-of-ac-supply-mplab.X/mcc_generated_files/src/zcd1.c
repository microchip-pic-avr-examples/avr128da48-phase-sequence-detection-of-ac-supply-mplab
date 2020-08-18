/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/
/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/


#include "../include/zcd1.h"

extern volatile uint8_t ZCD_Int_flag[3];       //application variables 
extern volatile uint8_t PhaseLossFlag[3];      //For 3 ZCD solution (64 pin controller)	

extern volatile uint16_t timerCounterValue[3];   //we need uint16_t array for 64 pin controller timer calculation 

int8_t ZCD1_Initialize()
{   
    //INTMODE RISING; 
    ZCD1.INTCTRL = 0x01;

    //RUNSTDBY disabled; OUTEN disabled; INVERT disabled; ENABLE enabled; 
    ZCD1.CTRLA = 0x01;
    
    return 0;
}

ISR(ZCD1_ZCD_vect)
{
    /* Insert your ZCD interrupt handling code here */
 if (ZCD_Int_flag[0] == 1)
    {
	    ZCD_Int_flag[0] = 0;
	    timerCounterValue[0] = TCA0_SINGLE_CNT; 
	}
 ZCD_Int_flag[1] = 1;
 PhaseLossFlag[1] = 1;
    /* The interrupt flag has to be cleared manually */
    ZCD1.STATUS = ZCD_CROSSIF_bm;
}
