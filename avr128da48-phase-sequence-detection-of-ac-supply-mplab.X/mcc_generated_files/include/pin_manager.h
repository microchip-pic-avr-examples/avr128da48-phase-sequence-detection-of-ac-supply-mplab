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

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "port.h"

//get/set PD5 aliases
#define PD5_SetHigh() do { PORTD_OUTSET = 0x20; } while(0)
#define PD5_SetLow() do { PORTD_OUTCLR = 0x20; } while(0)
#define PD5_Toggle() do { PORTD_OUTTGL = 0x20; } while(0)
#define PD5_GetValue() (VPORTD.IN & (0x1 << 5))
#define PD5_SetDigitalInput() do { PORTD_DIRCLR = 0x20; } while(0)
#define PD5_SetDigitalOutput() do { PORTD_DIRSET = 0x20; } while(0)
#define PD5_SetPullUp() do { PORTD_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PD5_ResetPullUp() do { PORTD_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PD5_SetInverted() do { PORTD_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define PD5_ResetInverted() do { PORTD_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PD5_DisableInterruptOnChange() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PD5_EnableInterruptForBothEdges() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PD5_EnableInterruptForRisingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PD5_EnableInterruptForFallingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PD5_DisableDigitalInputBuffer() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PD5_EnableInterruptForLowLevelSensing() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PB2 aliases
#define PB2_SetHigh() do { PORTB_OUTSET = 0x4; } while(0)
#define PB2_SetLow() do { PORTB_OUTCLR = 0x4; } while(0)
#define PB2_Toggle() do { PORTB_OUTTGL = 0x4; } while(0)
#define PB2_GetValue() (VPORTB.IN & (0x1 << 2))
#define PB2_SetDigitalInput() do { PORTB_DIRCLR = 0x4; } while(0)
#define PB2_SetDigitalOutput() do { PORTB_DIRSET = 0x4; } while(0)
#define PB2_SetPullUp() do { PORTB_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PB2_ResetPullUp() do { PORTB_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PB2_SetInverted() do { PORTB_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define PB2_ResetInverted() do { PORTB_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PB2_DisableInterruptOnChange() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PB2_EnableInterruptForBothEdges() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PB2_EnableInterruptForRisingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PB2_EnableInterruptForFallingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PB2_DisableDigitalInputBuffer() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PB2_EnableInterruptForLowLevelSensing() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PD4 aliases
#define PD4_SetHigh() do { PORTD_OUTSET = 0x10; } while(0)
#define PD4_SetLow() do { PORTD_OUTCLR = 0x10; } while(0)
#define PD4_Toggle() do { PORTD_OUTTGL = 0x10; } while(0)
#define PD4_GetValue() (VPORTD.IN & (0x1 << 4))
#define PD4_SetDigitalInput() do { PORTD_DIRCLR = 0x10; } while(0)
#define PD4_SetDigitalOutput() do { PORTD_DIRSET = 0x10; } while(0)
#define PD4_SetPullUp() do { PORTD_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PD4_ResetPullUp() do { PORTD_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PD4_SetInverted() do { PORTD_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define PD4_ResetInverted() do { PORTD_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PD4_DisableInterruptOnChange() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PD4_EnableInterruptForBothEdges() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PD4_EnableInterruptForRisingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PD4_EnableInterruptForFallingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PD4_DisableDigitalInputBuffer() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PD4_EnableInterruptForLowLevelSensing() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD9833_FSN1 aliases
#define AD9833_FSN1_SetHigh() do { PORTD_OUTSET = 0x80; } while(0)
#define AD9833_FSN1_SetLow() do { PORTD_OUTCLR = 0x80; } while(0)
#define AD9833_FSN1_Toggle() do { PORTD_OUTTGL = 0x80; } while(0)
#define AD9833_FSN1_GetValue() (VPORTD.IN & (0x1 << 7))
#define AD9833_FSN1_SetDigitalInput() do { PORTD_DIRCLR = 0x80; } while(0)
#define AD9833_FSN1_SetDigitalOutput() do { PORTD_DIRSET = 0x80; } while(0)
#define AD9833_FSN1_SetPullUp() do { PORTD_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN1_ResetPullUp() do { PORTD_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN1_SetInverted() do { PORTD_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define AD9833_FSN1_ResetInverted() do { PORTD_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD9833_FSN1_DisableInterruptOnChange() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD9833_FSN1_EnableInterruptForBothEdges() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD9833_FSN1_EnableInterruptForRisingEdge() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD9833_FSN1_EnableInterruptForFallingEdge() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD9833_FSN1_DisableDigitalInputBuffer() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD9833_FSN1_EnableInterruptForLowLevelSensing() do { PORTD.PIN7CTRL = (PORTD.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set WC_OE2 aliases
#define WC_OE2_SetHigh() do { PORTB_OUTSET = 0x20; } while(0)
#define WC_OE2_SetLow() do { PORTB_OUTCLR = 0x20; } while(0)
#define WC_OE2_Toggle() do { PORTB_OUTTGL = 0x20; } while(0)
#define WC_OE2_GetValue() (VPORTB.IN & (0x1 << 5))
#define WC_OE2_SetDigitalInput() do { PORTB_DIRCLR = 0x20; } while(0)
#define WC_OE2_SetDigitalOutput() do { PORTB_DIRSET = 0x20; } while(0)
#define WC_OE2_SetPullUp() do { PORTB_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define WC_OE2_ResetPullUp() do { PORTB_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define WC_OE2_SetInverted() do { PORTB_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define WC_OE2_ResetInverted() do { PORTB_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define WC_OE2_DisableInterruptOnChange() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define WC_OE2_EnableInterruptForBothEdges() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define WC_OE2_EnableInterruptForRisingEdge() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define WC_OE2_EnableInterruptForFallingEdge() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define WC_OE2_DisableDigitalInputBuffer() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define WC_OE2_EnableInterruptForLowLevelSensing() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD5227_CS3 aliases
#define AD5227_CS3_SetHigh() do { PORTB_OUTSET = 0x10; } while(0)
#define AD5227_CS3_SetLow() do { PORTB_OUTCLR = 0x10; } while(0)
#define AD5227_CS3_Toggle() do { PORTB_OUTTGL = 0x10; } while(0)
#define AD5227_CS3_GetValue() (VPORTB.IN & (0x1 << 4))
#define AD5227_CS3_SetDigitalInput() do { PORTB_DIRCLR = 0x10; } while(0)
#define AD5227_CS3_SetDigitalOutput() do { PORTB_DIRSET = 0x10; } while(0)
#define AD5227_CS3_SetPullUp() do { PORTB_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS3_ResetPullUp() do { PORTB_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS3_SetInverted() do { PORTB_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define AD5227_CS3_ResetInverted() do { PORTB_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD5227_CS3_DisableInterruptOnChange() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD5227_CS3_EnableInterruptForBothEdges() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD5227_CS3_EnableInterruptForRisingEdge() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD5227_CS3_EnableInterruptForFallingEdge() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD5227_CS3_DisableDigitalInputBuffer() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD5227_CS3_EnableInterruptForLowLevelSensing() do { PORTB.PIN4CTRL = (PORTB.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PD6 aliases
#define PD6_SetHigh() do { PORTD_OUTSET = 0x40; } while(0)
#define PD6_SetLow() do { PORTD_OUTCLR = 0x40; } while(0)
#define PD6_Toggle() do { PORTD_OUTTGL = 0x40; } while(0)
#define PD6_GetValue() (VPORTD.IN & (0x1 << 6))
#define PD6_SetDigitalInput() do { PORTD_DIRCLR = 0x40; } while(0)
#define PD6_SetDigitalOutput() do { PORTD_DIRSET = 0x40; } while(0)
#define PD6_SetPullUp() do { PORTD_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PD6_ResetPullUp() do { PORTD_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PD6_SetInverted() do { PORTD_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define PD6_ResetInverted() do { PORTD_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PD6_DisableInterruptOnChange() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PD6_EnableInterruptForBothEdges() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PD6_EnableInterruptForRisingEdge() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PD6_EnableInterruptForFallingEdge() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PD6_DisableDigitalInputBuffer() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PD6_EnableInterruptForLowLevelSensing() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD5227_CS2 aliases
#define AD5227_CS2_SetHigh() do { PORTE_OUTSET = 0x4; } while(0)
#define AD5227_CS2_SetLow() do { PORTE_OUTCLR = 0x4; } while(0)
#define AD5227_CS2_Toggle() do { PORTE_OUTTGL = 0x4; } while(0)
#define AD5227_CS2_GetValue() (VPORTE.IN & (0x1 << 2))
#define AD5227_CS2_SetDigitalInput() do { PORTE_DIRCLR = 0x4; } while(0)
#define AD5227_CS2_SetDigitalOutput() do { PORTE_DIRSET = 0x4; } while(0)
#define AD5227_CS2_SetPullUp() do { PORTE_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS2_ResetPullUp() do { PORTE_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS2_SetInverted() do { PORTE_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define AD5227_CS2_ResetInverted() do { PORTE_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD5227_CS2_DisableInterruptOnChange() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD5227_CS2_EnableInterruptForBothEdges() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD5227_CS2_EnableInterruptForRisingEdge() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD5227_CS2_EnableInterruptForFallingEdge() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD5227_CS2_DisableDigitalInputBuffer() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD5227_CS2_EnableInterruptForLowLevelSensing() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PC0 aliases
#define PC0_SetHigh() do { PORTC_OUTSET = 0x1; } while(0)
#define PC0_SetLow() do { PORTC_OUTCLR = 0x1; } while(0)
#define PC0_Toggle() do { PORTC_OUTTGL = 0x1; } while(0)
#define PC0_GetValue() (VPORTC.IN & (0x1 << 0))
#define PC0_SetDigitalInput() do { PORTC_DIRCLR = 0x1; } while(0)
#define PC0_SetDigitalOutput() do { PORTC_DIRSET = 0x1; } while(0)
#define PC0_SetPullUp() do { PORTC_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PC0_ResetPullUp() do { PORTC_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PC0_SetInverted() do { PORTC_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define PC0_ResetInverted() do { PORTC_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PC0_DisableInterruptOnChange() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PC0_EnableInterruptForBothEdges() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PC0_EnableInterruptForRisingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PC0_EnableInterruptForFallingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PC0_DisableDigitalInputBuffer() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PC0_EnableInterruptForLowLevelSensing() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD9833_FSN3 aliases
#define AD9833_FSN3_SetHigh() do { PORTE_OUTSET = 0x2; } while(0)
#define AD9833_FSN3_SetLow() do { PORTE_OUTCLR = 0x2; } while(0)
#define AD9833_FSN3_Toggle() do { PORTE_OUTTGL = 0x2; } while(0)
#define AD9833_FSN3_GetValue() (VPORTE.IN & (0x1 << 1))
#define AD9833_FSN3_SetDigitalInput() do { PORTE_DIRCLR = 0x2; } while(0)
#define AD9833_FSN3_SetDigitalOutput() do { PORTE_DIRSET = 0x2; } while(0)
#define AD9833_FSN3_SetPullUp() do { PORTE_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN3_ResetPullUp() do { PORTE_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN3_SetInverted() do { PORTE_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define AD9833_FSN3_ResetInverted() do { PORTE_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD9833_FSN3_DisableInterruptOnChange() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD9833_FSN3_EnableInterruptForBothEdges() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD9833_FSN3_EnableInterruptForRisingEdge() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD9833_FSN3_EnableInterruptForFallingEdge() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD9833_FSN3_DisableDigitalInputBuffer() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD9833_FSN3_EnableInterruptForLowLevelSensing() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA0 aliases
#define PA0_SetHigh() do { PORTA_OUTSET = 0x1; } while(0)
#define PA0_SetLow() do { PORTA_OUTCLR = 0x1; } while(0)
#define PA0_Toggle() do { PORTA_OUTTGL = 0x1; } while(0)
#define PA0_GetValue() (VPORTA.IN & (0x1 << 0))
#define PA0_SetDigitalInput() do { PORTA_DIRCLR = 0x1; } while(0)
#define PA0_SetDigitalOutput() do { PORTA_DIRSET = 0x1; } while(0)
#define PA0_SetPullUp() do { PORTA_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA0_ResetPullUp() do { PORTA_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA0_SetInverted() do { PORTA_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define PA0_ResetInverted() do { PORTA_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA0_DisableInterruptOnChange() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA0_EnableInterruptForBothEdges() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA0_EnableInterruptForRisingEdge() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA0_EnableInterruptForFallingEdge() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA0_DisableDigitalInputBuffer() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA0_EnableInterruptForLowLevelSensing() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PE3 aliases
#define PE3_SetHigh() do { PORTE_OUTSET = 0x8; } while(0)
#define PE3_SetLow() do { PORTE_OUTCLR = 0x8; } while(0)
#define PE3_Toggle() do { PORTE_OUTTGL = 0x8; } while(0)
#define PE3_GetValue() (VPORTE.IN & (0x1 << 3))
#define PE3_SetDigitalInput() do { PORTE_DIRCLR = 0x8; } while(0)
#define PE3_SetDigitalOutput() do { PORTE_DIRSET = 0x8; } while(0)
#define PE3_SetPullUp() do { PORTE_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PE3_ResetPullUp() do { PORTE_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PE3_SetInverted() do { PORTE_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define PE3_ResetInverted() do { PORTE_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PE3_DisableInterruptOnChange() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PE3_EnableInterruptForBothEdges() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PE3_EnableInterruptForRisingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PE3_EnableInterruptForFallingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PE3_DisableDigitalInputBuffer() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PE3_EnableInterruptForLowLevelSensing() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PC1 aliases
#define PC1_SetHigh() do { PORTC_OUTSET = 0x2; } while(0)
#define PC1_SetLow() do { PORTC_OUTCLR = 0x2; } while(0)
#define PC1_Toggle() do { PORTC_OUTTGL = 0x2; } while(0)
#define PC1_GetValue() (VPORTC.IN & (0x1 << 1))
#define PC1_SetDigitalInput() do { PORTC_DIRCLR = 0x2; } while(0)
#define PC1_SetDigitalOutput() do { PORTC_DIRSET = 0x2; } while(0)
#define PC1_SetPullUp() do { PORTC_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PC1_ResetPullUp() do { PORTC_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PC1_SetInverted() do { PORTC_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define PC1_ResetInverted() do { PORTC_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PC1_DisableInterruptOnChange() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PC1_EnableInterruptForBothEdges() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PC1_EnableInterruptForRisingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PC1_EnableInterruptForFallingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PC1_DisableDigitalInputBuffer() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PC1_EnableInterruptForLowLevelSensing() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA2 aliases
#define PA2_SetHigh() do { PORTA_OUTSET = 0x4; } while(0)
#define PA2_SetLow() do { PORTA_OUTCLR = 0x4; } while(0)
#define PA2_Toggle() do { PORTA_OUTTGL = 0x4; } while(0)
#define PA2_GetValue() (VPORTA.IN & (0x1 << 2))
#define PA2_SetDigitalInput() do { PORTA_DIRCLR = 0x4; } while(0)
#define PA2_SetDigitalOutput() do { PORTA_DIRSET = 0x4; } while(0)
#define PA2_SetPullUp() do { PORTA_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA2_ResetPullUp() do { PORTA_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA2_SetInverted() do { PORTA_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define PA2_ResetInverted() do { PORTA_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA2_DisableInterruptOnChange() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA2_EnableInterruptForBothEdges() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA2_EnableInterruptForRisingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA2_EnableInterruptForFallingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA2_DisableDigitalInputBuffer() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA2_EnableInterruptForLowLevelSensing() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA1 aliases
#define PA1_SetHigh() do { PORTA_OUTSET = 0x2; } while(0)
#define PA1_SetLow() do { PORTA_OUTCLR = 0x2; } while(0)
#define PA1_Toggle() do { PORTA_OUTTGL = 0x2; } while(0)
#define PA1_GetValue() (VPORTA.IN & (0x1 << 1))
#define PA1_SetDigitalInput() do { PORTA_DIRCLR = 0x2; } while(0)
#define PA1_SetDigitalOutput() do { PORTA_DIRSET = 0x2; } while(0)
#define PA1_SetPullUp() do { PORTA_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA1_ResetPullUp() do { PORTA_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA1_SetInverted() do { PORTA_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define PA1_ResetInverted() do { PORTA_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA1_DisableInterruptOnChange() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA1_EnableInterruptForBothEdges() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA1_EnableInterruptForRisingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA1_EnableInterruptForFallingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA1_DisableDigitalInputBuffer() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA1_EnableInterruptForLowLevelSensing() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LED0 aliases
#define LED0_SetHigh() do { PORTC_OUTSET = 0x40; } while(0)
#define LED0_SetLow() do { PORTC_OUTCLR = 0x40; } while(0)
#define LED0_Toggle() do { PORTC_OUTTGL = 0x40; } while(0)
#define LED0_GetValue() (VPORTC.IN & (0x1 << 6))
#define LED0_SetDigitalInput() do { PORTC_DIRCLR = 0x40; } while(0)
#define LED0_SetDigitalOutput() do { PORTC_DIRSET = 0x40; } while(0)
#define LED0_SetPullUp() do { PORTC_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED0_ResetPullUp() do { PORTC_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED0_SetInverted() do { PORTC_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define LED0_ResetInverted() do { PORTC_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED0_DisableInterruptOnChange() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED0_EnableInterruptForBothEdges() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED0_EnableInterruptForRisingEdge() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED0_EnableInterruptForFallingEdge() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED0_DisableDigitalInputBuffer() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED0_EnableInterruptForLowLevelSensing() do { PORTC.PIN6CTRL = (PORTC.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA4 aliases
#define PA4_SetHigh() do { PORTA_OUTSET = 0x10; } while(0)
#define PA4_SetLow() do { PORTA_OUTCLR = 0x10; } while(0)
#define PA4_Toggle() do { PORTA_OUTTGL = 0x10; } while(0)
#define PA4_GetValue() (VPORTA.IN & (0x1 << 4))
#define PA4_SetDigitalInput() do { PORTA_DIRCLR = 0x10; } while(0)
#define PA4_SetDigitalOutput() do { PORTA_DIRSET = 0x10; } while(0)
#define PA4_SetPullUp() do { PORTA_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA4_ResetPullUp() do { PORTA_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA4_SetInverted() do { PORTA_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define PA4_ResetInverted() do { PORTA_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA4_DisableInterruptOnChange() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA4_EnableInterruptForBothEdges() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA4_EnableInterruptForRisingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA4_EnableInterruptForFallingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA4_DisableDigitalInputBuffer() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA4_EnableInterruptForLowLevelSensing() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA6 aliases
#define PA6_SetHigh() do { PORTA_OUTSET = 0x40; } while(0)
#define PA6_SetLow() do { PORTA_OUTCLR = 0x40; } while(0)
#define PA6_Toggle() do { PORTA_OUTTGL = 0x40; } while(0)
#define PA6_GetValue() (VPORTA.IN & (0x1 << 6))
#define PA6_SetDigitalInput() do { PORTA_DIRCLR = 0x40; } while(0)
#define PA6_SetDigitalOutput() do { PORTA_DIRSET = 0x40; } while(0)
#define PA6_SetPullUp() do { PORTA_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA6_ResetPullUp() do { PORTA_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA6_SetInverted() do { PORTA_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define PA6_ResetInverted() do { PORTA_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA6_DisableInterruptOnChange() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA6_EnableInterruptForBothEdges() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA6_EnableInterruptForRisingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA6_EnableInterruptForFallingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA6_DisableDigitalInputBuffer() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA6_EnableInterruptForLowLevelSensing() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set SW aliases
#define SW_SetHigh() do { PORTC_OUTSET = 0x80; } while(0)
#define SW_SetLow() do { PORTC_OUTCLR = 0x80; } while(0)
#define SW_Toggle() do { PORTC_OUTTGL = 0x80; } while(0)
#define SW_GetValue() (VPORTC.IN & (0x1 << 7))
#define SW_SetDigitalInput() do { PORTC_DIRCLR = 0x80; } while(0)
#define SW_SetDigitalOutput() do { PORTC_DIRSET = 0x80; } while(0)
#define SW_SetPullUp() do { PORTC_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW_ResetPullUp() do { PORTC_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW_SetInverted() do { PORTC_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define SW_ResetInverted() do { PORTC_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW_DisableInterruptOnChange() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW_EnableInterruptForBothEdges() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW_EnableInterruptForRisingEdge() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW_EnableInterruptForFallingEdge() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW_DisableDigitalInputBuffer() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW_EnableInterruptForLowLevelSensing() do { PORTC.PIN7CTRL = (PORTC.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PA5 aliases
#define PA5_SetHigh() do { PORTA_OUTSET = 0x20; } while(0)
#define PA5_SetLow() do { PORTA_OUTCLR = 0x20; } while(0)
#define PA5_Toggle() do { PORTA_OUTTGL = 0x20; } while(0)
#define PA5_GetValue() (VPORTA.IN & (0x1 << 5))
#define PA5_SetDigitalInput() do { PORTA_DIRCLR = 0x20; } while(0)
#define PA5_SetDigitalOutput() do { PORTA_DIRSET = 0x20; } while(0)
#define PA5_SetPullUp() do { PORTA_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PA5_ResetPullUp() do { PORTA_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PA5_SetInverted() do { PORTA_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define PA5_ResetInverted() do { PORTA_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PA5_DisableInterruptOnChange() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PA5_EnableInterruptForBothEdges() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PA5_EnableInterruptForRisingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PA5_EnableInterruptForFallingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PA5_DisableDigitalInputBuffer() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PA5_EnableInterruptForLowLevelSensing() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD5227_CS1 aliases
#define AD5227_CS1_SetHigh() do { PORTA_OUTSET = 0x80; } while(0)
#define AD5227_CS1_SetLow() do { PORTA_OUTCLR = 0x80; } while(0)
#define AD5227_CS1_Toggle() do { PORTA_OUTTGL = 0x80; } while(0)
#define AD5227_CS1_GetValue() (VPORTA.IN & (0x1 << 7))
#define AD5227_CS1_SetDigitalInput() do { PORTA_DIRCLR = 0x80; } while(0)
#define AD5227_CS1_SetDigitalOutput() do { PORTA_DIRSET = 0x80; } while(0)
#define AD5227_CS1_SetPullUp() do { PORTA_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS1_ResetPullUp() do { PORTA_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD5227_CS1_SetInverted() do { PORTA_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define AD5227_CS1_ResetInverted() do { PORTA_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD5227_CS1_DisableInterruptOnChange() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD5227_CS1_EnableInterruptForBothEdges() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD5227_CS1_EnableInterruptForRisingEdge() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD5227_CS1_EnableInterruptForFallingEdge() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD5227_CS1_DisableDigitalInputBuffer() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD5227_CS1_EnableInterruptForLowLevelSensing() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AD9833_FSN2 aliases
#define AD9833_FSN2_SetHigh() do { PORTF_OUTSET = 0x8; } while(0)
#define AD9833_FSN2_SetLow() do { PORTF_OUTCLR = 0x8; } while(0)
#define AD9833_FSN2_Toggle() do { PORTF_OUTTGL = 0x8; } while(0)
#define AD9833_FSN2_GetValue() (VPORTF.IN & (0x1 << 3))
#define AD9833_FSN2_SetDigitalInput() do { PORTF_DIRCLR = 0x8; } while(0)
#define AD9833_FSN2_SetDigitalOutput() do { PORTF_DIRSET = 0x8; } while(0)
#define AD9833_FSN2_SetPullUp() do { PORTF_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN2_ResetPullUp() do { PORTF_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AD9833_FSN2_SetInverted() do { PORTF_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define AD9833_FSN2_ResetInverted() do { PORTF_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AD9833_FSN2_DisableInterruptOnChange() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AD9833_FSN2_EnableInterruptForBothEdges() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AD9833_FSN2_EnableInterruptForRisingEdge() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AD9833_FSN2_EnableInterruptForFallingEdge() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AD9833_FSN2_DisableDigitalInputBuffer() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AD9833_FSN2_EnableInterruptForLowLevelSensing() do { PORTF.PIN3CTRL = (PORTF.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PD1 aliases
#define PD1_SetHigh() do { PORTD_OUTSET = 0x2; } while(0)
#define PD1_SetLow() do { PORTD_OUTCLR = 0x2; } while(0)
#define PD1_Toggle() do { PORTD_OUTTGL = 0x2; } while(0)
#define PD1_GetValue() (VPORTD.IN & (0x1 << 1))
#define PD1_SetDigitalInput() do { PORTD_DIRCLR = 0x2; } while(0)
#define PD1_SetDigitalOutput() do { PORTD_DIRSET = 0x2; } while(0)
#define PD1_SetPullUp() do { PORTD_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PD1_ResetPullUp() do { PORTD_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PD1_SetInverted() do { PORTD_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define PD1_ResetInverted() do { PORTD_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PD1_DisableInterruptOnChange() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PD1_EnableInterruptForBothEdges() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PD1_EnableInterruptForRisingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PD1_EnableInterruptForFallingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PD1_DisableDigitalInputBuffer() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PD1_EnableInterruptForLowLevelSensing() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set WC_OE1 aliases
#define WC_OE1_SetHigh() do { PORTD_OUTSET = 0x1; } while(0)
#define WC_OE1_SetLow() do { PORTD_OUTCLR = 0x1; } while(0)
#define WC_OE1_Toggle() do { PORTD_OUTTGL = 0x1; } while(0)
#define WC_OE1_GetValue() (VPORTD.IN & (0x1 << 0))
#define WC_OE1_SetDigitalInput() do { PORTD_DIRCLR = 0x1; } while(0)
#define WC_OE1_SetDigitalOutput() do { PORTD_DIRSET = 0x1; } while(0)
#define WC_OE1_SetPullUp() do { PORTD_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define WC_OE1_ResetPullUp() do { PORTD_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define WC_OE1_SetInverted() do { PORTD_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define WC_OE1_ResetInverted() do { PORTD_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define WC_OE1_DisableInterruptOnChange() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define WC_OE1_EnableInterruptForBothEdges() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define WC_OE1_EnableInterruptForRisingEdge() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define WC_OE1_EnableInterruptForFallingEdge() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define WC_OE1_DisableDigitalInputBuffer() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define WC_OE1_EnableInterruptForLowLevelSensing() do { PORTD.PIN0CTRL = (PORTD.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PB1 aliases
#define PB1_SetHigh() do { PORTB_OUTSET = 0x2; } while(0)
#define PB1_SetLow() do { PORTB_OUTCLR = 0x2; } while(0)
#define PB1_Toggle() do { PORTB_OUTTGL = 0x2; } while(0)
#define PB1_GetValue() (VPORTB.IN & (0x1 << 1))
#define PB1_SetDigitalInput() do { PORTB_DIRCLR = 0x2; } while(0)
#define PB1_SetDigitalOutput() do { PORTB_DIRSET = 0x2; } while(0)
#define PB1_SetPullUp() do { PORTB_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PB1_ResetPullUp() do { PORTB_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PB1_SetInverted() do { PORTB_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define PB1_ResetInverted() do { PORTB_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PB1_DisableInterruptOnChange() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PB1_EnableInterruptForBothEdges() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PB1_EnableInterruptForRisingEdge() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PB1_EnableInterruptForFallingEdge() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PB1_DisableDigitalInputBuffer() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PB1_EnableInterruptForLowLevelSensing() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set WC_OE3 aliases
#define WC_OE3_SetHigh() do { PORTD_OUTSET = 0x4; } while(0)
#define WC_OE3_SetLow() do { PORTD_OUTCLR = 0x4; } while(0)
#define WC_OE3_Toggle() do { PORTD_OUTTGL = 0x4; } while(0)
#define WC_OE3_GetValue() (VPORTD.IN & (0x1 << 2))
#define WC_OE3_SetDigitalInput() do { PORTD_DIRCLR = 0x4; } while(0)
#define WC_OE3_SetDigitalOutput() do { PORTD_DIRSET = 0x4; } while(0)
#define WC_OE3_SetPullUp() do { PORTD_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define WC_OE3_ResetPullUp() do { PORTD_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define WC_OE3_SetInverted() do { PORTD_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define WC_OE3_ResetInverted() do { PORTD_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define WC_OE3_DisableInterruptOnChange() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define WC_OE3_EnableInterruptForBothEdges() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define WC_OE3_EnableInterruptForRisingEdge() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define WC_OE3_EnableInterruptForFallingEdge() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define WC_OE3_DisableDigitalInputBuffer() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define WC_OE3_EnableInterruptForLowLevelSensing() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set PB0 aliases
#define PB0_SetHigh() do { PORTB_OUTSET = 0x1; } while(0)
#define PB0_SetLow() do { PORTB_OUTCLR = 0x1; } while(0)
#define PB0_Toggle() do { PORTB_OUTTGL = 0x1; } while(0)
#define PB0_GetValue() (VPORTB.IN & (0x1 << 0))
#define PB0_SetDigitalInput() do { PORTB_DIRCLR = 0x1; } while(0)
#define PB0_SetDigitalOutput() do { PORTB_DIRSET = 0x1; } while(0)
#define PB0_SetPullUp() do { PORTB_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define PB0_ResetPullUp() do { PORTB_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define PB0_SetInverted() do { PORTB_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define PB0_ResetInverted() do { PORTB_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define PB0_DisableInterruptOnChange() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define PB0_EnableInterruptForBothEdges() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define PB0_EnableInterruptForRisingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define PB0_EnableInterruptForFallingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define PB0_DisableDigitalInputBuffer() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define PB0_EnableInterruptForLowLevelSensing() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

void PIN_MANAGER_Initialize();
void PORTD_PD5_DefaultInterruptHandler(void);
void PORTD_PD5_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTB_PB2_DefaultInterruptHandler(void);
void PORTB_PB2_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_PD4_DefaultInterruptHandler(void);
void PORTD_PD4_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_AD9833_FSN1_DefaultInterruptHandler(void);
void PORTD_AD9833_FSN1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTB_WC_OE2_DefaultInterruptHandler(void);
void PORTB_WC_OE2_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTB_AD5227_CS3_DefaultInterruptHandler(void);
void PORTB_AD5227_CS3_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_PD6_DefaultInterruptHandler(void);
void PORTD_PD6_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTE_AD5227_CS2_DefaultInterruptHandler(void);
void PORTE_AD5227_CS2_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTC_PC0_DefaultInterruptHandler(void);
void PORTC_PC0_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTE_AD9833_FSN3_DefaultInterruptHandler(void);
void PORTE_AD9833_FSN3_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA0_DefaultInterruptHandler(void);
void PORTA_PA0_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTE_PE3_DefaultInterruptHandler(void);
void PORTE_PE3_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTC_PC1_DefaultInterruptHandler(void);
void PORTC_PC1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA2_DefaultInterruptHandler(void);
void PORTA_PA2_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA1_DefaultInterruptHandler(void);
void PORTA_PA1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTC_LED0_DefaultInterruptHandler(void);
void PORTC_LED0_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA4_DefaultInterruptHandler(void);
void PORTA_PA4_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA6_DefaultInterruptHandler(void);
void PORTA_PA6_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTC_SW_DefaultInterruptHandler(void);
void PORTC_SW_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_PA5_DefaultInterruptHandler(void);
void PORTA_PA5_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTA_AD5227_CS1_DefaultInterruptHandler(void);
void PORTA_AD5227_CS1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTF_AD9833_FSN2_DefaultInterruptHandler(void);
void PORTF_AD9833_FSN2_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_PD1_DefaultInterruptHandler(void);
void PORTD_PD1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_WC_OE1_DefaultInterruptHandler(void);
void PORTD_WC_OE1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTB_PB1_DefaultInterruptHandler(void);
void PORTB_PB1_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTD_WC_OE3_DefaultInterruptHandler(void);
void PORTD_WC_OE3_SetInterruptHandler(void (* interruptHandler)(void)) ;
void PORTB_PB0_DefaultInterruptHandler(void);
void PORTB_PB0_SetInterruptHandler(void (* interruptHandler)(void)) ;
#endif /* PINS_H_INCLUDED */
