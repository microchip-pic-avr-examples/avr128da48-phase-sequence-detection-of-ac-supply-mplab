/*
 * dataVisualizer.c
 *
 * Created: 3/12/2020 12:14:08 PM
 *  Author: I20946
 */ 
#include <stdio.h>
#include "dataVisualizer.h"
#include "application.h"
#include "mcc_generated_files/include/usart1.h"

extern float Vrms[3];
extern uint8_t freq_sel;
extern uint16_t ADC_Results_L[4];

DataStremerFrame_u dataStremerFrame_u;

static void sendString(uint8_t *data,uint16_t len);

/*******************************************************************************
 * void dataStream_protocol_buffer()
 *
 * API to create data streamer protocol buffer and send same buffer in to data visualizer   
 *
 * @param void 
 * @return void 
 ******************************************************************************/
void createDataStreamProtocolAndSend()
{
		dataStremerFrame_u.dataStreamer_st.start_of_frame = (char)START_OF_FRAME;      //start of frame 03 
		dataStremerFrame_u.dataStreamer_st.end_of_frame = (char)END_OF_FRAME;          //end of frame ~03 
		
		dataStremerFrame_u.dataStreamer_st.RsignalData = ADC_Results_L[0];             //Raw ADC data for reproducing data on data visualizer 
				
		dataStremerFrame_u.dataStreamer_st.YsignalData = ADC_Results_L[1];
				
		dataStremerFrame_u.dataStreamer_st.BsignalData = ADC_Results_L[2];
	
		dataStremerFrame_u.dataStreamer_st.RVrmsValue = Vrms[0];                       //RMS voltage 
		dataStremerFrame_u.dataStreamer_st.YVrmsValue = Vrms[1];
		dataStremerFrame_u.dataStreamer_st.BVrmsValue = Vrms[2];

		if ((freq_sel == F50Hz) || (freq_sel == DeFHz))                                //Frequency 
		{
			dataStremerFrame_u.dataStreamer_st.Opfreq = 50;
		}
		else if (freq_sel == F60Hz)
		{
			dataStremerFrame_u.dataStreamer_st.Opfreq = 60;
		}
		
	    sendString(dataStremerFrame_u.DataStreamer_buffer,24);                //sending data frame to data visualizer
}

/*******************************************************************************
 * static void sendString(uint8_t *data,uint16_t len)
 *
 * API to send string via USART  
 *
 * @param string which we like to transmit and size of the string 
 * @return void 
 ******************************************************************************/
static void sendString(uint8_t *data,uint16_t len)
{
	uint16_t  i = 0;
	for (i=0;i<=len;i++)
	{
      USART1_Write(*data++);
	}
    
}