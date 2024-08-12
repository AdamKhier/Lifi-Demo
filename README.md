# LiFi Technology Demo


## Content
### 1) [Introduction](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#introduction)
### 2) [Project Overview](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#project-overview)
### 3) [Setup](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#setup)
#### 4) [Hardware Requirements](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#hardware-requirements)
#### 5) [Software Requirements](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#software-requirements)
### 6) [Project *Previous* State](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#project-previous-state)
### 7) [Project *Current* State](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#project-current-state)
### 8) [*Future* Plans](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#future-plans)


## Introduction
Welcome to my LiFi Technology Demo project! This project demonstrates data transfer using LiFi (Light Fidelity), a wireless communication technology that uses light to transmit data. This demo showcases how data can be sent and received using an LED and a light sensor.


## Project Overview
This demonstration works by placing two Arduinos on a breadboard, each with a light sensor and an LED. When the program runs, the Arduino converts text into binary and transfers it to the LED. If the LED is off, it represents *`0`*, and if on, it represents *`1`*. The sensor then reads this signal, translates the binary back into text, and displays it.


## Setup


### Hardware Requirements
- **Arduino Uno**
- **Arduino Nano**
- **IR LEDs (x2)**
- **IR sensors (x2)**
- **Breadboards (x2)**
- **Small display for Arduino**


### Software Requirements
- **Python**
- **HTML**
- **CSS**
- **JavaScript**
- **C++ (Arduino)**


## Project *Previous* State
The project has been quite successful so far, with the addition of visualizing how it works and providing live translations in the HTML files. The lined version shows live translation (though slower for visibility), while the singularly blocked version provides the end result of fast data transfer. However, the project hasn't progressed beyond getting the code to run on a Raspberry Pi. I have yet to include the sensors and LEDs in the code.


## Project *Current* State
I have mapped the hardware to pins on the Arduino and started coding.


## *Future* Plans
I plan to fix the code and add an acknowledgment feature to ensure the text is transmitted correctly.

