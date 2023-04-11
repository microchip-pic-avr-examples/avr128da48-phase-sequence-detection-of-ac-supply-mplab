/**
  SPI Generated Driver API interface File

  @Company
    Microchip Technology Inc.

  @File Name
    spi_interface.h

  @Summary
    This is the generated driver interface file for the SPI driver.

  @Description
    This interface file provides APIs for driver for SPI.
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

#ifndef SPI_INTERFACE_H
#define SPI_INTERFACE_H

/**
 Section: Included Files
*/
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus

    extern "C" {

#endif

/**
 Section: Data Type Definitions
*/
        
/**
  SPI Driver function structure.

  @Summary
    Structure containing the function pointers of SPI driver.
 */
struct SPI_INTERFACE
{   
    void (*Initialize)(void);
    void (*Close)(void);
    bool (*Open)(uint8_t spiConfigIndex);
    void (*BufferExchange)(void *bufferData, size_t bufferSize);
    void (*BufferRead)(void *bufferData, size_t bufferSize);
    void (*BufferWrite)(void *bufferData, size_t bufferSize); 
    uint8_t (*ByteExchange)(uint8_t byteData);    
    uint8_t (*ByteRead)(void);
    void (*ByteWrite)(uint8_t byteData);
};

#ifdef __cplusplus

    }

#endif

#endif //SPI_INTERFACE_H
