# Smart-Curtain
![](https://github.com/meghang-101/Smart-Curtain/blob/master/imgs/STM32_MX.PNG)
This project uses an Arduino/STM32 as a controller, a Servo motor attached to the curtain mechanism and a LDR or a Light Dependent Resistor; a type of photoresistor for sensing the light intensity.
The command given to the Servo motor depends on the value given as an output from the LDR to the arduino.
The Curtain Opens/Closes depending on the light Intensity.

Have a look at the [main.c](https://github.com/meghang-101/Smart-Curtain/blob/master/Core/Src/main.c) for STM32 and [arduino.ino](https://github.com/meghang-101/Smart-Curtain/blob/master/Arduino_/code_for_arduino.ino) for Arduino.