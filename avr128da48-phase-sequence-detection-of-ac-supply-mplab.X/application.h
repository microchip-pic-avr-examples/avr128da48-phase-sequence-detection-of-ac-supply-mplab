/*
 * application.h
 *
 * Created: 12/19/2019 9:11:59 AM
 *  Author: I20946
 */ 

#include "mcc_generated_files/include/adc0.h"

#ifndef APPLICATION_H_
#define APPLICATION_H_

///application Configuration///////////
#define ADC_MODE 0       //0 - single ended ADC 1- Differential ADC
///////////////////////////////////////

#define ZERO_FREQ 0
#define DEFAULT_FREQ1 50
#define DEFAULT_FREQ2 60
#define PHASE_SHIFT1 0
#define PHASE_SHIFT2 120
#define PHASE_SHIFT3 240

#define TIMER_TIME_PER_CLOCK 0.00000033f
#define REFRESH_COUNT 120000               //1 min 
#define SWITCH_TIME_COUNT 20000            //(20000 == 10sec)   
#define MIN_RMS_VOLTAGE 0.3                //minimum voltage near to zero  
#define BITS_PER_DEG 11.3777777777778f	   // 4096 / 360
#define NUMBER_OF_SAMPLES_50Hz 80
#define NUMBER_OF_SAMPLES_60Hz 64
#define WAVEFORM_OSC_FREQ  25000000.0f     //Waveform click oscillator frequency 
#define WAVEFORM_CONSTANT  268435456.0f    //equation constant 

#if(!ADC_MODE)
	#define ADC_STEPS_PER_VOLTAGE 0.000805f
	#define ADC_OFFSET_VALUE 2200              //Practically generated singal is not exactly 3.3V its considered as below 3.3 so (4000 - 2000 = 2000)
#else
	#define ADC_STEPS_PER_VOLTAGE 0.0016113f  //
	#define ADC_OFFSET_VALUE 1100
#endif

enum SCH_STAES { RECOVER_S = 0,           
	RMV_R_S = 1,
	RMV_Y_S = 2,
    RMV_B_S,
	PHASE_RVRSL_S
};

enum WfClickSG_e { WfClickSG_1 = 1,
	WfClickSG_2,
	WfClickSG_3
};

enum WfClickDP_e { WfClickDP_1 = 1,
	WfClickDP_2,
	WfClickDP_3
};

enum FREQ_sel { DeFHz = 1,
	F50Hz = 1,
	F60Hz =2
};

typedef struct waveformClickSelector {
	uint8_t AD9833_sel;            //for signal generation 
	uint8_t AD5227_sel;            //for digital pot 
}WfclkSel_st;

void AD9833Select(uint8_t selAD9833);
void AD5227Select(uint8_t selAD5227);
void threePhaseAmplitudeMax();
void threePhaseAmplitudeMin();
void application(void);
void defaultSignalGeneration();
void FrequencySelectionCallBack(uint8_t sel);
void readSwToSelectFrequency();
#endif /* APPLICATION_H_ */