# LiFi Technology Demo

## Introduction
Welcome to my LiFi Technology Demo project! This project demonstrates data transfer using LiFi (Light Fidelity), a wireless communication technology that uses light to transmit data. This demo showcases how data can be sent and received using an LED and a light sensor.

## Project Overview
This demonstration works by placing two Arduinos on a breadboard, each with a light sensor and an LED. When the program runs, the Arduino converts text into binary and transfers it to the LED. If the LED is off, it represents `0`, and if on, it represents `1`. The sensor then reads this signal, translates the binary back into text, and displays it.

## Setup

### Hardware Requirements
- Arduino Uno
- Arduino Nano
- IR LEDs (x2)
- IR sensors (x2)
- Breadboards (x2)
- Small display for Arduino

### Software Requirements
- Python
- HTML
- CSS
- JavaScript
- C++ (Arduino)

## Project Previous State
The project has been quite successful so far, with the addition of visualizing how it works and providing live translations in the HTML files. The lined version shows live translation (though slower for visibility), while the singularly blocked version provides the end result of fast data transfer. However, the project hasn't progressed beyond getting the code to run on a Raspberry Pi. I have yet to include the sensors and LEDs in the code.

## Project Current State
I have mapped the hardware to pins on the Arduino and started coding.

## Future Plans
I plan to fix the code and add an acknowledgment feature to ensure the text is transmitted correctly.
