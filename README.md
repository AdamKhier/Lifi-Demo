# LiFi Technology Demo


## Content
### 1) [Introduction](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#introduction)
### 2) [Project Overview](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#project-overview)
### 3) [Setup](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#setup)
#### 4) [Hardware Requirements](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#hardware-requirements)
#### 5) [Software Requirements](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#software-requirements)
### 6) [How To Use](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#how-to-use)
### 7) [Summary](https://github.com/AdamKhier/Lifi-Demo/tree/main?tab=readme-ov-file#summary)

## Introduction
Welcome to my LiFi Technology Demo project! This project demonstrates data transfer using LiFi (Light Fidelity), a wireless communication technology that uses light to transmit data. This demo showcases how data can be sent and received using an LED and a light sensor.


## Project Overview
This demonstration works by placing two Arduinos on a breadboard, each with a light sensor and an LED. When the program runs, the Arduino converts text into binary and transfers it to the LED. If the LED is off, it represents *`0`*, and if on, it represents *`1`*. The sensor then reads this signal, translates the binary back into text, and displays it.


## Setup


### Hardware Requirements
- **Arduino Uno**
- **IR sensor**
- **Breadboard**
- **Small display for Arduino**
- TV Remote


### Software Requirements
- **Python**
- **HTML**
- **CSS**
- **JavaScript**
- **C++ (Arduino)**


## How To Use
There are many ways this project is displayed which gives some flexability in presenting it. These ways include Python (With Terminal no UI), HTML (With UI) and Arduino (With Hardware).
To use any of these open there folder and read there own readme files.

## Summary
This project's goal was to transfer data through light and I would say that we have definately accomplished this By:
### 1) Python
In the python code we asigned a dictionary from english to binary and back. This helped get an image of what the project would look like, even if it was really basic.
### 2) HTML
In the Html portion of the project the goal was something presentable and easy to view. We could not use the python for this as it ran in the terminal and would look very complicated to the uneducated eye. The Html solved this problem by makeing it visual with UI. It would be easy to use as it is very simmilar to a normal site and required almost no help once setup.
### 3) Arduino
Finally the project needed a way to show that this could be used as a communication protocall in the near future. This doesn't mean it had to be really fast and complicated but it meant we needed some hardware. The arduino paired with a IR sensor and an old LG tv remote was the perfect fit for comunicating basic data through button presses. This final addition meant our project was a success.
