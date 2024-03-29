<!-- Please do not change this html logo with link -->
<a href="https://www.microchip.com" rel="nofollow"><img src="images/microchip.png" alt="MCHP" width="300"/></a>

# Phase Sequence Detection of Three-Phase AC Supply


The AVR® DA family of microcontrollers are peripheral rich, high performance and low-power 8-bit microcontroller devices. The built-in Zero-Cross Detector (ZCD), high resolution Analog-to-Digital Converter (ADC), timer peripherals are essential for realizing phase sequence detection applications.

This application demonstrator developed using MPLAB® X Melody platform. It showcases the phase sequence detection and phase loss detection on emulated three phase AC supply using AVR128DA48 microcontroller.

## Relevant Application Note  
Phase Sequence Detection of Three-Phase AC Supply demonstration and implementation is discussed in the <a href="https://microchip.com/DS00003607" rel="nofollow">Phase Sequence Detection of Three-Phase AC Supply Application Note.</a>

## Application Firmware

The example uses the AVR128DA48 and AVR128DA64 microcontrollers, it is also available on Microchip's GitHub page.

* <a href="https://github.com/microchip-pic-avr-examples/avr128da48-phase-sequence-detection-of-ac-supply-studio" rel="nofollow">AVR128DA48 Phase Sequence Detection application code example using studio</a>
* <a href="https://github.com/microchip-pic-avr-examples/avr128da64-phase-sequence-detection-of-ac-supply-studio" rel="nofollow">AVR128DA64 Phase Sequence Detection application code example using studio</a>
* <a href="https://github.com/microchip-pic-avr-examples/avr128da64-phase-sequence-detection-of-ac-supply-mplab" rel="nofollow">AVR128DA64 Phase Sequence Detection application code example using mplab</a>

## Software Used

This application uses MPLAB® X IDE complier and graphical code generator to provide an easy and hassle-free user experience.
The following tools are used for this demo application:
* MPLAB® X IDE [v6.05 or newer](https://www.microchip.com/mplab/mplab-x-ide "v6.05 or newer")
* XC8 compiler [v2.41 or newer](https://www.microchip.com/mplab/compilers "v2.41 or newer")
* MPLAB® Code Configurator(MCC) [v5.3.0 or newer](https://www.microchip.com/mplab/mplab-code-configurator "v5.3.0 or newer")
* MPLAB® Code Configurator(MCC) Core v5.5.0 or newer
* Microchip AVR-Dx Series Device Support pack [v2.3.272 or newer device pack](https://packs.download.microchip.com "v2.3.272 or newer device pack")
* Data Visualizer [v2.20.674 or newer](https://www.microchip.com/mplab/avr-support/data-visualizer "v2.20.674 or newer")
* ADC Driver v4.2.4
* SPI Driver v4.1.11
* TCA Driver v6.0.8
* UART Driver v1.8.0
* ZCD Driver v4.0.4

## Hardware Used

* <a href="https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM164151" rel="nofollow">AVR128DA48 Curiosity Nano board</a>
* <a href="https://www.microchip.com/developmenttools/ProductDetails/AC164162" rel="nofollow">Curiosity Nano base for click boards</a>
* <a href="https://www.mikroe.com/waveform-click" rel="nofollow">Three waveform clicks</a>
* SMA male cable 

## Demonstration Setup

The following steps explain how to set the hardware for the Three-Phase sequence detection, using the AVR128DA48 microcontroller. Figure 1 shows the hardware setup used for the application demo. 
* Insert the AVR128DA48 Curiosity Nano board in the slot designed for click boards.

  **Note:** When inserting the Curiosity Nano board, the user can use the Curiosity Nano Base markings for a better orientation.

* Insert three waveform clicks in the three mikroBUS slots available on the Curiosity Nano Base board.
* Connect the SMA output of the waveform clicks to the respective microcontroller I/O pins using SMA connectors. Refer Application Note section 3 for more information about the microcontroller I/O pins.  
* Detach waveform click 2 OEN pin from mikroBUS slot2 PWM2 pin.
* Detach waveform click 3 CS pin from mikroBUS slot3 CS3 pin.
* Connect PWM2 pin of mikroBUS slot2 to pin PB5, and CS3 pin of mikroBUS slot3 to pin PB4.
* Connect the Curiosity Nano Board to a host computer (PC) using the standard micro B USB cable.

<p align="center">
  <img width=750 height=auto src="images/DemoSetup.png">
  <br>Figure 1: Demonstration Hardware Setup<br>
</p>


## Data Visualizer Configuration
The Data Visualizer tool is used as a graphical user interface while demonstrating the application by displaying the emulated three phase supply waveforms, output status and for receiving the user inputs.
Pre-configured data streamer file and custom dashboard file is available with the firmware package. The steps below are for configuring the Data Visualizer, while using the data streamer file and custom dashboard file to get the setup ready.          

Here is the list of Data Visualizer modules used for demonstration:
* Serial Port (Baud Rate – 230400)
* Graph 
* Custom Dashboard (Custom Dashboard file is given for the demonstration) 
  * Element Label
  * Element Signal
  * Radio Group
* Data Streamer (Data Streamer file is given for the demonstration)  

Refer the Data Visualizer User Guide for more information about <a href="http://ww1.microchip.com/downloads/Secure/en/DeviceDoc/40001903B.pdf" rel="nofollow">Data Visualizer</a>. 

The demo uses an emulated three-phase AC supply to showcase the essential features of the application. To emulate the AC power supply three waveform clicks are used in the application.


## Custom Dashboard: User Inputs and Output Indicators  

The Data Visualizer custom dashboard is customized for this application, user input and output elements are listed below:     

### User inputs

-	Recover three-phase supply from faults
-	Insert phase loss fault on L1 phase
-	Insert phase loss fault on L2 phase
-	Insert phase loss fault on L3 phase
-	Insert phase reversal (PR) fault

### Application Output Indicators

-	Phase reversal status indicator
-	Phase loss status indicator
-	L1 Vrms, L2 Vrms, and L3 Vrms values
-	Operating Freq (Hz)

Figure 2 shows the Data Visualizer custom dashboard and input,output elements.


## Demo Operation

1.	Configure serial port for communication with the Curiosity Nano Board. 
2.	Configure data streamer for interfacing Graph window and Dashboard window with the serial port control panel. Data streamer configuration **(data-streamer-config.txt)** file is available in example firmware folder.
3.	Configure Graph window for displaying the emulated three phase supply AC waveforms, generated by the waveform clicks.
4.	Configure custom dashboard window to display the output and to receive user inputs. Custom dashboard **(custom-dashboard-config)** design file is available in example firmware folder. 
5.	The blue labeled elements on custom dashboard are inputs and red labeled elements are outputs.
6.	Connect the hardware and prepare demonstrator setup as per the instructions provided in Demonstration setup section.
7.	Click Serial Port Control Panel Connect button.
8.	Using push button (SW0) on the curiosity nano board select appropriate frequency for the three-phase signal. The selected frequency is displayed on the custom dashboard window.
9.	Zoom in or zoom out the graph on Graph window by clicking the +/- magnifier symbol below the Graph window.
10.	Insert phase loss fault by clicking the L1 radio button on dashboard, which disables the L1 signal out of three-phase signal to emulate phase loss input. 
11.	Insert phase loss fault by clicking the L2 radio button on dashboard, which disables the L2 signal out of three-phase signal to emulate phase loss input.
12.	Insert phase loss fault by clicking the L3 radio button on dashboard, which disables the L3 signal out of three-phase signal to emulate phase loss input.
13.	Insert phase reversal by clicking the PR radio button on dashboard, which changes the sequence of the three-phase signal to L1-L3-L2.

Figure 2 shows the Data Visualizer Dashboard for Phase Sequence Detection for the Three-phase AC Supply.

<p align="center">
  <img width=750 height=auto src="images/DashBoard.png">
  <br>Figure 2: Data Visualizer Dashboard<br>
</p>
