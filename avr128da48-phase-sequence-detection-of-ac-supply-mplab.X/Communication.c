/*
 * communication.c
 *
 * Created: 12/13/2019 1:58:18 PM
 *  Author: I20946
 */ 

#include "Communication.h"
#include "mcc_generated_files/include/spi0.h"
#include "mcc_generated_files/include/pin_manager.h"

static void AD9833_FSN1_set_level(uint8_t level);
static void AD9833_FSN2_set_level(uint8_t level);
static void AD9833_FSN3_set_level(uint8_t level);
static void AD5227_CS1_set_level(uint8_t level);
static void AD5227_CS2_set_level(uint8_t level);
static void AD5227_CS3_set_level(uint8_t level);

/*******************************************************************************
 * void SPI_Init(void)
 *
 * API to Initialize the SPI0 
 *
 * @param void 
 * @return void 
 ******************************************************************************/
unsigned char SPI_Init()
{
         SPI0_Initialize();
		 
		 return 0;
}

/*******************************************************************************
 * unsigned char SPI_Write(unsigned char* data,
 *                       unsigned char bytesNumber)
 *
 * API to write block to slave target through SPI0 
 *
 * @param data - data to be write, bytesNumber - number of bytes to write 
 * @return dummy char  
 ******************************************************************************/
unsigned char SPI_Write(unsigned char* data,
                        unsigned char bytesNumber)
{
   
    SPI0_WriteBlock(data,bytesNumber);
   	 return 0;
}

/*******************************************************************************
 * unsigned char SPI_Read(unsigned char* data,
 *                      unsigned char bytesNumber)
 *
 * API to Read through SPIO from target slave  
 *
 * @param data - data to be read (empty buffer), bytesNumber - number of bytes to be read
 * @return dummy char  
 ******************************************************************************/
unsigned char SPI_Read(unsigned char* data,
                       unsigned char bytesNumber)
{
       SPI0_ReadBlock(data,bytesNumber);
	   return 0;
}


/*******************************************************************************
 * void AD9833_chipSelect (uint8_t selAD9833, uint8_t level)
 *
 * API to select SPI0 slave1 
 *
 * @param selAD9833 - slave to be select , bytesNumber - number of bytes to be read
 * @return void 
 ******************************************************************************/
void AD9833_chipSelect (uint8_t selAD9833, uint8_t level)
{
 
       switch(selAD9833)
	   {
	     case 1:
		  AD9833_FSN1_set_level(level);
		 break;
		 case 2:
		  AD9833_FSN2_set_level(level);
		 break;
		 case 3:
		  AD9833_FSN3_set_level(level);
		 break;

	   }
	   
}

/*******************************************************************************
 * void AD5227_chipSelect (uint8_t selAD9833, uint8_t level)
 *
 * API to select SPI0 slave2 
 *
 * @param selAD9833 - slave to be select , bytesNumber - number of bytes to be read
 * @return void 
 ******************************************************************************/
void AD5227_chipSelect (uint8_t selAD5227, uint8_t level)
{
	switch(selAD5227)
	{
		case 1:
		AD5227_CS1_set_level(level);
		break;
		case 2:
		AD5227_CS2_set_level(level);
		break;
		case 3:
		AD5227_CS3_set_level(level);
		break;
	}
}

/*******************************************************************************
 * static void AD9833_FSN1_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
static void AD9833_FSN1_set_level(uint8_t level)
{
    if(level)
    {
        AD9833_FSN1_SetHigh();
    }
    else
    {
        AD9833_FSN1_SetLow();
    }

}

/*******************************************************************************
 * static void AD9833_FSN2_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
static void AD9833_FSN2_set_level(uint8_t level)
{
    if(level)
    {
        AD9833_FSN2_SetHigh();
    }
    else
    {
        AD9833_FSN2_SetLow();
    }

}

/*******************************************************************************
 * static void AD9833_FSN3_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
static void AD9833_FSN3_set_level(uint8_t level)
{
    if(level)
    {
        AD9833_FSN3_SetHigh();
    }
    else
    {
        AD9833_FSN3_SetLow();
    }

}

/*******************************************************************************
 * static void AD5227_CS1_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
static void AD5227_CS1_set_level(uint8_t level)
{
    if(level)
    {
        AD5227_CS1_SetHigh();
    }
    else
    {
        AD5227_CS1_SetLow();
    }
}

/*******************************************************************************
 * static void AD5227_CS2_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
static void AD5227_CS2_set_level(uint8_t level)
{
    if(level)
    {
        AD5227_CS2_SetHigh();
    }
    else
    {
        AD5227_CS2_SetLow();
    }
}

/*******************************************************************************
 * static void AD5227_CS3_set_level(uint8_t level)
 *
 * API to set the chip selection pin  
 *
 * @param level - level value to be set (0 - make GPIO low, 1 - make GPIO high)
 * @return void 
 ******************************************************************************/
 static void AD5227_CS3_set_level(uint8_t level)
{
    if(level)
    {
        AD5227_CS3_SetHigh();
    }
    else
    {
        AD5227_CS3_SetLow();
    }
}

