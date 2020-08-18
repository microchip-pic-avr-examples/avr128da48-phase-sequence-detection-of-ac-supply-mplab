/*
 * dataVisualizer.h
 *
 * Created: 3/12/2020 12:14:31 PM
 *  Author: I20946
 */ 


#ifndef DATAVISUALIZER_H_
#define DATAVISUALIZER_H_

#define START_OF_FRAME 0x03
#define END_OF_FRAME 0xFC

typedef struct{                                  //Data streamer field 
	uint8_t start_of_frame; //1
	uint16_t RsignalData;   //2
	uint16_t YsignalData;	//2
	uint16_t BsignalData;	//2
	uint8_t phaseReversalFlag;	//1
	uint8_t phaseLossFlag[3];	//3
	float RVrmsValue;	//4
	float YVrmsValue;	//4
	float BVrmsValue;	//4
	uint8_t Opfreq;			//1
	uint8_t end_of_frame;   //1
}DataStreamer_st;

typedef union {                                    //data streamer frame creation 
	uint8_t  DataStreamer_buffer[25]; 
    DataStreamer_st dataStreamer_st;
	
}DataStremerFrame_u;

void createDataStreamProtocolAndSend();


#endif /* DATAVISUALIZER_H_ */