/*
 * AD9833.c
 *
 * Created: 1/29/2020 10:54:55 AM
 *  Author: I20946
 */ 

/******************************************************************************/
/* Include Files                                                              */
/******************************************************************************/
#include "AD9833.h"

/*******************************************************************************
 * void AD9833Reset(void)
 *
 * API to reset the AD9833 signal generator by making the reset bit high    
 *
 * @param void 
 * @return void 
 ******************************************************************************/
void AD9833Reset(void)
{
    AD9833SetRegisterValue(AD9833_REG_CMD | AD9833_RESET);
}

/*******************************************************************************
 * void AD9833ClearReset(void)
 *
 * API to clear the reset by making the rest bit low
 *
 * @param void  
 * @return void 
 ******************************************************************************/
void AD9833ClearReset(void)
{
	AD9833SetRegisterValue(AD9833_REG_CMD);
}

/*******************************************************************************
 * void AD9833SetRegisterValue(unsigned short regValue)
 *
 * API to set the AD9833 register value  
 *
 * @param value to be written on the AD9833 register   
 * @return void 
 ******************************************************************************/
void AD9833SetRegisterValue(unsigned short regValue)
{
	unsigned char data[5] = {0x00};	
	
	data[0] = (unsigned char)((regValue & 0xFF00) >> 8);
	data[1] = (unsigned char)((regValue & 0x00FF) >> 0);
	AD9833_CS_LOW;	    
	SPI_Write(data,2);
	AD9833_CS_HIGH;
}


/*******************************************************************************
 * void AD9833SetFrequency(unsigned short reg, unsigned long val)
 *
 * API to load the frequency value in to AD9833 frequency register 
 *
 * @param register address,frequency value 
 * @return void 
 ******************************************************************************/
void AD9833SetFrequency(unsigned short reg, unsigned long val)
{
	unsigned short freqHi = reg;
	unsigned short freqLo = reg;
	
	freqHi |= (val & 0xFFFC000) >> 14 ;
	freqLo |= (val & 0x3FFF);
	AD9833SetRegisterValue(AD9833_B28);
	AD9833SetRegisterValue(freqLo);
	AD9833SetRegisterValue(freqHi);
}

/*******************************************************************************
 * void AD9833_SetPhase(unsigned short reg, unsigned short val)
 *
 * API to load the phase value in to AD9833 phase register
 *
 * @param register address, phase value 
 * @return void 
 ******************************************************************************/
void AD9833SetPhase(unsigned short reg, unsigned short val)
{
	unsigned short phase = reg;
	phase |= val;
	AD9833SetRegisterValue(phase);
}

/*******************************************************************************
 * void AD9833_Setup(uint16_t freq,uint16_t phase,uint16_t type)
 *
 * API to setup the register for generating the signal
 *
 * @param phase register selection, phase register selection, type of the wave 
 * @return void 
 ******************************************************************************/
void AD9833Setup(uint16_t freq,uint16_t phase,uint16_t type)
{
	uint16_t val = 0;
	
	val = freq | phase | type;
	AD9833SetRegisterValue(val);
}

/*******************************************************************************
 * void AD9833SetWave(unsigned short type)
 *
 * API to change the signal/wave
 *
 * @param type of the wave/signal to be generated  
 * @return void 
 ******************************************************************************/
void AD9833SetWave(unsigned short type)
{
	AD9833SetRegisterValue(type);
}