/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   2.0.0
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

#include "../spi0.h"
//#include "../include/pin_manager.h"

typedef struct spi0_descriptor_s 
{
    spi0_transfer_status_t status;
} spi0_descriptor_t;

/**
  SPI0_DRIVER_FUNCTION object 

  @Summary
    Defines an object for SPI_DRIVER_FUNCTIONS.
 */
const struct SPI_INTERFACE SPI0_s = 
{
    .Initialize = SPI0_Initialize,
    .Close = SPI0_Close,
    .Open = SPI0_Open,
    .BufferExchange = SPI0_BufferExchange,
    .BufferRead = SPI0_BufferRead,
    .BufferWrite = SPI0_BufferWrite,	
    .ByteExchange = SPI0_ByteExchange,
    .ByteRead = SPI0_ByteRead,	
    .ByteWrite = SPI0_ByteWrite,
};

SPI0_configuration_t spi0_configurations[] =
{
    { 0x21, 0x2 }
};

static spi0_descriptor_t spi0_desc;

void SPI0_Initialize(void)
{
    //BUFEN disabled; BUFWR disabled; MODE 2; SSD disabled; 
    SPI0.CTRLB = 0x2;

    //CLK2X disabled; DORD disabled; ENABLE enabled; MASTER enabled; PRESC DIV4; 
    SPI0.CTRLA = 0x21;

    //DREIE disabled; IE disabled; RXCIE disabled; SSIE disabled; TXCIE disabled; 
    SPI0.INTCTRL = 0x0;

    spi0_desc.status = SPI0_FREE;

    //BUFOVF disabled; DREIF disabled; RXCIF disabled; SSIF disabled; TXCIF disabled; IF disabled; WRCOL disabled; 
    SPI0.INTFLAGS = 0x0;
}

void SPI0_Enable(void)
{
    SPI0.CTRLA |= SPI_ENABLE_bm;
}

void SPI0_Disable(void)
{
    SPI0.CTRLA &= ~SPI_ENABLE_bm;
}

bool SPI0_Open(uint8_t spiConfigIndex)
{
    if (spi0_desc.status == SPI0_FREE) {
        spi0_desc.status = SPI0_IDLE;
        SPI0.CTRLB                = spi0_configurations[spiConfigIndex].CTRLBvalue;
        SPI0.CTRLA                = spi0_configurations[spiConfigIndex].CTRLAvalue;
        return true;
    } else {
        return false;
    }
}

void SPI0_Close(void)
{
    spi0_desc.status = SPI0_FREE;
}

uint8_t SPI0_ByteExchange(uint8_t data)
{
    SPI0.DATA = data;
    while (!(SPI0.INTFLAGS & SPI_RXCIF_bm));
    return SPI0.DATA;
}

bool SPI0_Selected(void)
{
/**
 * \brief returns true if SS pin is selected 
 * TODO: Place your code
 */
return true;
}

void SPI0_WaitDataready(void)
{
    while (!(SPI0.INTFLAGS & SPI_RXCIF_bm))
        ;
}

void SPI0_BufferExchange(void *block, size_t size)
{
    uint8_t *b = (uint8_t *)block;
    while (size--) {
        SPI0.DATA = *b;
        while (!(SPI0.INTFLAGS & SPI_RXCIF_bm))
            ;
        *b = SPI0.DATA;
        b++;
    }
}

void SPI0_BufferWrite(void *block, size_t size)
{
    uint8_t *b = (uint8_t *)block;
    uint8_t  rdata;
    while (size--) {
        SPI0.DATA = *b;
        while (!(SPI0.INTFLAGS & SPI_RXCIF_bm))
            ;
        rdata = SPI0.DATA;
        (void)(rdata); // Silence compiler warning
        b++;
    }
}

void SPI0_BufferRead(void *block, size_t size)
{
    uint8_t *b = (uint8_t *)block;
    while (size--) {
        SPI0.DATA = 0;
        while (!(SPI0.INTFLAGS & SPI_RXCIF_bm))
            ;
        *b = SPI0.DATA;
        b++;
    }
}

void SPI0_ByteWrite(uint8_t data)
{
    SPI0.DATA = data;
}

uint8_t SPI0_ByteRead(void)
{
    return SPI0.DATA;
}

uint8_t SPI0_ExchangeByte(uint8_t data)
{
    return SPI0_ByteExchange(data);
}

void SPI0_ExchangeBlock(void *block, size_t blockSize)
{
    SPI0_BufferExchange(block, blockSize);
}

void SPI0_WriteBlock(void *block, size_t blockSize)
{
    SPI0_BufferWrite(block, blockSize);
}

void SPI0_ReadBlock(void *block, size_t blockSize)
{
    SPI0_BufferRead(block, blockSize);
}

void SPI0_WriteByte(uint8_t byte)
{
    SPI0_ByteWrite(byte);
}

uint8_t SPI0_ReadByte(void)
{
    return SPI0_ByteRead();
}
