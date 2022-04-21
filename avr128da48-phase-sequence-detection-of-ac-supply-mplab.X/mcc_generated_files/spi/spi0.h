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

#ifndef SPI0_BASIC_H_INCLUDED
#define SPI0_BASIC_H_INCLUDED

#include "../system/utils/compiler.h"
#include <stdbool.h>
#include "spi_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
  SPI_INTERFACE object 

  @Summary
    SPI driver interface object.
 */                
extern const struct SPI_INTERFACE SPI0_s;

/** Function pointer to callback function called by SPI IRQ.
    NULL=default value: No callback function is to be used.
*/
typedef void (*spi0_TRANSFER_DONE_CB)(void);

typedef struct 
{
    // hardware stuff that controls SPI mode
    // hardware stuff that controls SPI baud rate
    uint8_t CTRLAvalue;
    uint8_t CTRLBvalue;
} SPI0_configuration_t; 

/** Specify whether the SPI transfer is to be uni- or bidirectional.
    A bidirectional transfer (=SPI_EXCHANGE) causes the received data
    to overwrite the buffer with the data to transmit.
*/
typedef enum spi0_transfer_type 
{
    SPI0_EXCHANGE, ///< SPI transfer is bidirectional
    SPI0_READ,     ///< SPI transfer reads, writes only 0s
    SPI0_WRITE     ///< SPI transfer writes, discards read data
} spi0_transfer_type_t;

/** Status of the SPI hardware and SPI bus.*/
typedef enum spi0_transfer_status 
{
    SPI0_FREE, ///< SPI hardware is not open, bus is free.
    SPI0_IDLE, ///< SPI hardware has been opened, no transfer ongoing.
    SPI0_BUSY, ///< SPI hardware has been opened, transfer ongoing.
    SPI0_DONE  ///< SPI hardware has been opened, transfer complete.
} spi0_transfer_status_t;

/** Enumeration of the different configurations supported by the driver.
    A configuration is specified as parameter to SPI0_Open(),
    and is used by the function to set SPI parameters as specified by the
    configuration. A user may specify a configuration, e.g. CLIENT_A, used when
    communication over SPI with CLIENT_A, and another configuration, CLIENT_B,
    used when communication with CLIENT_B. The configurations may use different
    SPI configuration such as polarity or SCK frequency.
*/
typedef enum 
{
    SPI0_DEFAULT
} SPI0_configuration_name_t;

/**
 * \brief Initialize SPI interface
 * If module is configured to disabled state, the clock to the SPI is disabled
 * if this is supported by the device's clock system.
 *
 * \return Nothing
 */
void SPI0_Initialize(void);

/**
 * \brief Enable SPI
 * 1. If supported by the clock system, enables the clock to the SPI
 * 2. Enables the SPI module by setting the enable-bit in the SPI control register
 *
 * \return Nothing
 */
void SPI0_Enable(void);

/**
 * \brief Disable SPI
 * 1. Disables the SPI module by clearing the enable-bit in the SPI control register
 * 2. If supported by the clock system, disables the clock to the SPI
 *
 * \return Nothing
 */
void SPI0_Disable(void);

/**
 * \brief Sets the index of Configuration to use in the transfer
 *
 * \param[in] spiConfigIndex The configuration index
 *
 * \return Initialization status.
 * \retval false The SPI open was successful
 * \retval true  The SPI open was successful
 */
bool SPI0_Open(uint8_t spiConfigIndex);

/**
 * \brief Close the SPI for communication
 *
 * \return Nothing
 */
void SPI0_Close(void);

/**
 * \brief Exchange one byte over SPI. Blocks until done.
 *
 * \param[in] byteData The byte to transfer
 *
 * \return Received data byte.
 */
uint8_t SPI0_ByteExchange(uint8_t byteData);

/**
 * \brief Exchange a buffer over SPI. Blocks if using polled driver.
 *
 * \param[inout] bufferData The buffer to transfer. Received data is returned here.
 * \param[in] bufferSize The size of buffer to transfer
 *
 * \return Nothing.
 */
void SPI0_BufferExchange(void * bufferData, size_t bufferSize);

/**
 * \brief Write a buffer over SPI. Blocks if using polled driver.
 *
 * \param[in] bufferData The buffer to transfer
 * \param[in] bufferSize The size of buffer to transfer
 *
 * \return Nothing.
 */
void SPI0_BufferWrite(void * bufferData, size_t bufferSize);

/**
 * \brief Read a buffer over SPI. Blocks if using polled driver.
 *
 * Zeros are transmitted out of the SPI.
 *
 * \param[out] bufferData Received data is written here.
 * \param[in] bufferSize The size of buffer to transfer
 *
 * \return Nothing.
 */
void SPI0_BufferRead(void * bufferData, size_t bufferSize);

/**
 * \brief Write data byte to SPI.
 *
 * \param[in] byteData The byte to transfer
 *
 * \return Nothing.
 */
void SPI0_ByteWrite(uint8_t byteData);

/**
 * \brief Get received data byte from SPI.
 *
 * \return Received data byte
 */
uint8_t SPI0_ByteRead(void);

/**
 * \brief Check if SPI CLIENT is selected, i.e. its SS has been asserted.
 *
 * \return SPI SS status
 * \retval true  SPI is selected
 * \retval false SPI is not selected
 */
bool SPI0_Selected(void);

/**
 * \brief Wait until SPI has recaived a data byte
 *
 * \return Nothing
 */
void SPI0_WaitDataready(void);

uint8_t __attribute__((deprecated)) SPI0_ExchangeByte(uint8_t data);
void __attribute__((deprecated)) SPI0_ExchangeBlock(void *block, size_t blockSize);
void __attribute__((deprecated)) SPI0_WriteBlock(void *block, size_t blockSize);
void __attribute__((deprecated)) SPI0_ReadBlock(void *block, size_t blockSize);
void __attribute__((deprecated)) SPI0_WriteByte(uint8_t byte);
uint8_t __attribute__((deprecated)) SPI0_ReadByte(void);

#ifdef __cplusplus
}
#endif

#endif /* SPI0_BASIC_H_INCLUDED */
