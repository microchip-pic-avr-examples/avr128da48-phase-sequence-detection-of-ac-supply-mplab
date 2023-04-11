/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set IO_PD4 aliases
#define IO_PD4_SetHigh() do { PORTD_OUTSET = 0x10; } while(0)
#define IO_PD4_SetLow() do { PORTD_OUTCLR = 0x10; } while(0)
#define IO_PD4_Toggle() do { PORTD_OUTTGL = 0x10; } while(0)
#define IO_PD4_GetValue() (VPORTD.IN & (0x1 << 4))
#define IO_PD4_SetDigitalInput() do { PORTD_DIRCLR = 0x10; } while(0)
#define IO_PD4_SetDigitalOutput() do { PORTD_DIRSET = 0x10; } while(0)
#define IO_PD4_SetPullUp() do { PORTD_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PD4_ResetPullUp() do { PORTD_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PD4_SetInverted() do { PORTD_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PD4_ResetInverted() do { PORTD_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PD4_DisableInterruptOnChange() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PD4_EnableInterruptForBothEdges() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PD4_EnableInterruptForRisingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PD4_EnableInterruptForFallingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PD4_DisableDigitalInputBuffer() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PD4_EnableInterruptForLowLevelSensing() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PD5 aliases
#define IO_PD5_SetHigh() do { PORTD_OUTSET = 0x20; } while(0)
#define IO_PD5_SetLow() do { PORTD_OUTCLR = 0x20; } while(0)
#define IO_PD5_Toggle() do { PORTD_OUTTGL = 0x20; } while(0)
#define IO_PD5_GetValue() (VPORTD.IN & (0x1 << 5))
#define IO_PD5_SetDigitalInput() do { PORTD_DIRCLR = 0x20; } while(0)
#define IO_PD5_SetDigitalOutput() do { PORTD_DIRSET = 0x20; } while(0)
#define IO_PD5_SetPullUp() do { PORTD_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PD5_ResetPullUp() do { PORTD_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PD5_SetInverted() do { PORTD_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PD5_ResetInverted() do { PORTD_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PD5_DisableInterruptOnChange() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PD5_EnableInterruptForBothEdges() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PD5_EnableInterruptForRisingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PD5_EnableInterruptForFallingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PD5_DisableDigitalInputBuffer() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PD5_EnableInterruptForLowLevelSensing() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PD6 aliases
#define IO_PD6_SetHigh() do { PORTD_OUTSET = 0x40; } while(0)
#define IO_PD6_SetLow() do { PORTD_OUTCLR = 0x40; } while(0)
#define IO_PD6_Toggle() do { PORTD_OUTTGL = 0x40; } while(0)
#define IO_PD6_GetValue() (VPORTD.IN & (0x1 << 6))
#define IO_PD6_SetDigitalInput() do { PORTD_DIRCLR = 0x40; } while(0)
#define IO_PD6_SetDigitalOutput() do { PORTD_DIRSET = 0x40; } while(0)
#define IO_PD6_SetPullUp() do { PORTD_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PD6_ResetPullUp() do { PORTD_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PD6_SetInverted() do { PORTD_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PD6_ResetInverted() do { PORTD_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PD6_DisableInterruptOnChange() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PD6_EnableInterruptForBothEdges() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PD6_EnableInterruptForRisingEdge() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PD6_EnableInterruptForFallingEdge() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PD6_DisableDigitalInputBuffer() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PD6_EnableInterruptForLowLevelSensing() do { PORTD.PIN6CTRL = (PORTD.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PE3 aliases
#define IO_PE3_SetHigh() do { PORTE_OUTSET = 0x8; } while(0)
#define IO_PE3_SetLow() do { PORTE_OUTCLR = 0x8; } while(0)
#define IO_PE3_Toggle() do { PORTE_OUTTGL = 0x8; } while(0)
#define IO_PE3_GetValue() (VPORTE.IN & (0x1 << 3))
#define IO_PE3_SetDigitalInput() do { PORTE_DIRCLR = 0x8; } while(0)
#define IO_PE3_SetDigitalOutput() do { PORTE_DIRSET = 0x8; } while(0)
#define IO_PE3_SetPullUp() do { PORTE_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PE3_ResetPullUp() do { PORTE_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PE3_SetInverted() do { PORTE_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PE3_ResetInverted() do { PORTE_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PE3_DisableInterruptOnChange() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PE3_EnableInterruptForBothEdges() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PE3_EnableInterruptForRisingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PE3_EnableInterruptForFallingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PE3_DisableDigitalInputBuffer() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PE3_EnableInterruptForLowLevelSensing() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PD1 aliases
#define IO_PD1_SetHigh() do { PORTD_OUTSET = 0x2; } while(0)
#define IO_PD1_SetLow() do { PORTD_OUTCLR = 0x2; } while(0)
#define IO_PD1_Toggle() do { PORTD_OUTTGL = 0x2; } while(0)
#define IO_PD1_GetValue() (VPORTD.IN & (0x1 << 1))
#define IO_PD1_SetDigitalInput() do { PORTD_DIRCLR = 0x2; } while(0)
#define IO_PD1_SetDigitalOutput() do { PORTD_DIRSET = 0x2; } while(0)
#define IO_PD1_SetPullUp() do { PORTD_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PD1_ResetPullUp() do { PORTD_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PD1_SetInverted() do { PORTD_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PD1_ResetInverted() do { PORTD_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PD1_DisableInterruptOnChange() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PD1_EnableInterruptForBothEdges() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PD1_EnableInterruptForRisingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PD1_EnableInterruptForFallingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PD1_DisableDigitalInputBuffer() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PD1_EnableInterruptForLowLevelSensing() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PA5 aliases
#define IO_PA5_SetHigh() do { PORTA_OUTSET = 0x20; } while(0)
#define IO_PA5_SetLow() do { PORTA_OUTCLR = 0x20; } while(0)
#define IO_PA5_Toggle() do { PORTA_OUTTGL = 0x20; } while(0)
#define IO_PA5_GetValue() (VPORTA.IN & (0x1 << 5))
#define IO_PA5_SetDigitalInput() do { PORTA_DIRCLR = 0x20; } while(0)
#define IO_PA5_SetDigitalOutput() do { PORTA_DIRSET = 0x20; } while(0)
#define IO_PA5_SetPullUp() do { PORTA_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA5_ResetPullUp() do { PORTA_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA5_SetInverted() do { PORTA_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA5_ResetInverted() do { PORTA_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA5_DisableInterruptOnChange() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA5_EnableInterruptForBothEdges() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA5_EnableInterruptForRisingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA5_EnableInterruptForFallingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA5_DisableDigitalInputBuffer() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA5_EnableInterruptForLowLevelSensing() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PA4 aliases
#define IO_PA4_SetHigh() do { PORTA_OUTSET = 0x10; } while(0)
#define IO_PA4_SetLow() do { PORTA_OUTCLR = 0x10; } while(0)
#define IO_PA4_Toggle() do { PORTA_OUTTGL = 0x10; } while(0)
#define IO_PA4_GetValue() (VPORTA.IN & (0x1 << 4))
#define IO_PA4_SetDigitalInput() do { PORTA_DIRCLR = 0x10; } while(0)
#define IO_PA4_SetDigitalOutput() do { PORTA_DIRSET = 0x10; } while(0)
#define IO_PA4_SetPullUp() do { PORTA_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA4_ResetPullUp() do { PORTA_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA4_SetInverted() do { PORTA_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA4_ResetInverted() do { PORTA_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA4_DisableInterruptOnChange() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA4_EnableInterruptForBothEdges() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA4_EnableInterruptForRisingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA4_EnableInterruptForFallingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA4_DisableDigitalInputBuffer() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA4_EnableInterruptForLowLevelSensing() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PA6 aliases
#define IO_PA6_SetHigh() do { PORTA_OUTSET = 0x40; } while(0)
#define IO_PA6_SetLow() do { PORTA_OUTCLR = 0x40; } while(0)
#define IO_PA6_Toggle() do { PORTA_OUTTGL = 0x40; } while(0)
#define IO_PA6_GetValue() (VPORTA.IN & (0x1 << 6))
#define IO_PA6_SetDigitalInput() do { PORTA_DIRCLR = 0x40; } while(0)
#define IO_PA6_SetDigitalOutput() do { PORTA_DIRSET = 0x40; } while(0)
#define IO_PA6_SetPullUp() do { PORTA_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA6_ResetPullUp() do { PORTA_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA6_SetInverted() do { PORTA_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA6_ResetInverted() do { PORTA_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA6_DisableInterruptOnChange() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA6_EnableInterruptForBothEdges() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA6_EnableInterruptForRisingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA6_EnableInterruptForFallingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA6_DisableDigitalInputBuffer() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA6_EnableInterruptForLowLevelSensing() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PC1 aliases
#define IO_PC1_SetHigh() do { PORTC_OUTSET = 0x2; } while(0)
#define IO_PC1_SetLow() do { PORTC_OUTCLR = 0x2; } while(0)
#define IO_PC1_Toggle() do { PORTC_OUTTGL = 0x2; } while(0)
#define IO_PC1_GetValue() (VPORTC.IN & (0x1 << 1))
#define IO_PC1_SetDigitalInput() do { PORTC_DIRCLR = 0x2; } while(0)
#define IO_PC1_SetDigitalOutput() do { PORTC_DIRSET = 0x2; } while(0)
#define IO_PC1_SetPullUp() do { PORTC_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PC1_ResetPullUp() do { PORTC_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PC1_SetInverted() do { PORTC_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PC1_ResetInverted() do { PORTC_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PC1_DisableInterruptOnChange() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PC1_EnableInterruptForBothEdges() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PC1_EnableInterruptForRisingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PC1_EnableInterruptForFallingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PC1_DisableDigitalInputBuffer() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PC1_EnableInterruptForLowLevelSensing() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set IO_PC0 aliases
#define IO_PC0_SetHigh() do { PORTC_OUTSET = 0x1; } while(0)
#define IO_PC0_SetLow() do { PORTC_OUTCLR = 0x1; } while(0)
#define IO_PC0_Toggle() do { PORTC_OUTTGL = 0x1; } while(0)
#define IO_PC0_GetValue() (VPORTC.IN & (0x1 << 0))
#define IO_PC0_SetDigitalInput() do { PORTC_DIRCLR = 0x1; } while(0)
#define IO_PC0_SetDigitalOutput() do { PORTC_DIRSET = 0x1; } while(0)
#define IO_PC0_SetPullUp() do { PORTC_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PC0_ResetPullUp() do { PORTC_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PC0_SetInverted() do { PORTC_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PC0_ResetInverted() do { PORTC_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PC0_DisableInterruptOnChange() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PC0_EnableInterruptForBothEdges() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PC0_EnableInterruptForRisingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PC0_EnableInterruptForFallingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PC0_DisableDigitalInputBuffer() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PC0_EnableInterruptForLowLevelSensing() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

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

void PIN_MANAGER_Initialize();
void PD4_DefaultInterruptHandler(void);
void PD4_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD5_DefaultInterruptHandler(void);
void PD5_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD6_DefaultInterruptHandler(void);
void PD6_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PE3_DefaultInterruptHandler(void);
void PE3_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD1_DefaultInterruptHandler(void);
void PD1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA5_DefaultInterruptHandler(void);
void PA5_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA4_DefaultInterruptHandler(void);
void PA4_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA6_DefaultInterruptHandler(void);
void PA6_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC1_DefaultInterruptHandler(void);
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC0_DefaultInterruptHandler(void);
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC7_DefaultInterruptHandler(void);
void PC7_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA7_DefaultInterruptHandler(void);
void PA7_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB4_DefaultInterruptHandler(void);
void PB4_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB5_DefaultInterruptHandler(void);
void PB5_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD0_DefaultInterruptHandler(void);
void PD0_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD2_DefaultInterruptHandler(void);
void PD2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PD7_DefaultInterruptHandler(void);
void PD7_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PE1_DefaultInterruptHandler(void);
void PE1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PE2_DefaultInterruptHandler(void);
void PE2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PF3_DefaultInterruptHandler(void);
void PF3_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */
