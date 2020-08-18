/*
 * CFile1.c
 *
 * Created: 1/29/2020 10:54:55 AM
 *  Author: I20946
 */ 

#include "AD5227.h"
#include <util/delay.h>
#include "Communication.h"

/*******************************************************************************
 * void AD5227DigipotInc()
 *
 * API to increase the pk-pk voltage of the signal (AD5227 digital pot)   
 *
 * @param void
 * @return void 
 ******************************************************************************/
void AD5227DigipotInc()
{
	uint8_t transferBuff[2];
	
	transferBuff[0] = 0x1F;
	AD5227_CS_LOW;
	
	SPI_Write(transferBuff,1);

	
	AD5227_CS_HIGH;
}

/*******************************************************************************
 * void AD5227DigipotDec()
 *
 * API to decrease the pk-pk voltage of the signal (AD5227 digital pot)   
 *
 * @param void
 * @return void 
 ******************************************************************************/
void AD5227DigipotDec()
{
	uint8_t transferBuff[2];
	
	transferBuff[0] = 0x07;
    AD5227_CS_LOW;

	SPI_Write(transferBuff,1);

	AD5227_CS_HIGH;

}

/*******************************************************************************
 * void AD5227DigipotMax(uint8_t click)
 *
 * API to increase the voltage of selected click to maximum 
 *
 * @param slave address  (SPI slave AD5227)
 * @return void 
 ******************************************************************************/
void AD5227DigipotMax(uint8_t click)
{
uint16_t index = 0;

 AD5227Select(click);
 for(index=0;index<=12;index++)  //63
 {
	AD5227DigipotInc();

 }

}

/*******************************************************************************
 * void AD5227DigipotMin(uint8_t click)
 *
 * API to decrease the voltage of selected click to minimum  
 *
 * @param slave address  (SPI slave AD5227)
 * @return void 
 ******************************************************************************/
void AD5227DigipotMin(uint8_t click)
{
	uint16_t index = 0;
    AD5227Select(click);
	for(index=0;index<=16;index++)
	{
		AD5227DigipotDec();
	}
}