/*
 * communication.h
 *
 * Created: 3/12/2020 12:14:31 PM
 *  Author: I20946
 */ 
#ifndef _COMMUNICATION_H_
#define _COMMUNICATION_H_

/******************************************************************************/
/* Include Files                                                              */
/******************************************************************************/

#include "application.h"

extern WfclkSel_st wfclkSel_st;

/******************************************************************************/
/* Functions Prototypes                                                       */
/******************************************************************************/
/* Initializes the SPI communication peripheral. */
unsigned char SPI_Init();
/* Writes data to SPI. */
unsigned char SPI_Write(unsigned char* data,
unsigned char bytesNumber);
/* Reads data from SPI. */
unsigned char SPI_Read(unsigned char* data,
unsigned char bytesNumber);
void AD9833_chipSelect (uint8_t selAD9833, uint8_t level);
void AD5227_chipSelect (uint8_t selAD5227, uint8_t level);

/******************************************************************************/
/* GPIO Definitions                                                           */
/******************************************************************************/

#define AD9833_CS_LOW    AD9833_chipSelect(wfclkSel_st.AD9833_sel,false);     //for click 1 AD9833_FSN1_set_level(0);
#define AD9833_CS_HIGH   AD9833_chipSelect(wfclkSel_st.AD9833_sel,true);       // AD9833_FSN1_set_level(1);   //

#define AD5227_CS_LOW    AD5227_chipSelect(wfclkSel_st.AD5227_sel,false);     // AD5227_CS1_set_level(0); // 
#define AD5227_CS_HIGH   AD5227_chipSelect(wfclkSel_st.AD5227_sel,true);  	 //AD5227_CS1_set_level(1); //	   
					   
#endif	// _COMMUNICATION_H_
