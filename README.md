# Servo Direction 🧭

This repository shows my next step in my Embedded Systems journey! After my LED blink project, this project aims usage of buttons on mechanical movement, user input, and state indication logic. 

The system controls the angle of a servo motor (from 0° to 180°) using two push buttons. Depending on the servo's current position limits, LEDs light up in green, yellow or red.

## Hardware Configuration
* **Microcontroller:** Arduino Uno 
* **Actuator:** 1x Servo SG90 Motor
* **Inputs:** 2x Push Buttons (Configured efficiently using internal `INPUT_PULLUP` resistors)
* **Indicators:** 3x Standard LEDs (Green, Yellow, Red)
* **Resistors:** 3x 220 Ω (Current limiting for safe LED operation)
* **Capacitor:** 1x 10 µF (Placed across the servo's power supply to stabilize voltage spikes)

## Circuit Schematic
🔍 [Click here to view the detailed circuit schematic](./hardware/schematic_ard-2.png)
*(Schematic designed with industry-standard KiCad)*

## Personal NoteI
It makes me feel really excited to develop any new thing on my Embedded Systems journey and transform my theoretical knowledge from Gebze Technical University to pratictice. I am looking forward to what can I develop more in next days in sha Allah. Stay tuned!
