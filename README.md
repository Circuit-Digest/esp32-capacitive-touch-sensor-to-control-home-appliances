ESP32 Capacitive Touch Sensor for Home Appliances
=================================================

![ESP32 Touch Sensor](https://circuitdigest.com/sites/default/files/projectimage_mic/ESP32-Touch-Sensor.jpg)

A simple and effective capacitive touch sensor project using ESP32 to control home appliances without physical buttons.

Features
--------

-   **4-Channel Touch Control**: Control up to 4 different appliances
-   **Built-in Touch Support**: Utilizes ESP32's native capacitive touch pins (T0-T9)
-   **Relay Control**: Switch AC loads up to 3A safely
-   **Custom PCB Design**: Compact single-sided PCB layout
-   **Easy Programming**: Simple Arduino IDE compatible code

Hardware Components
-------------------

-   ESP32 Development Board
-   4x Relays (for appliance switching)
-   4x BD139 Transistors (relay drivers)
-   4x 1N4007 Diodes (flyback protection)
-   Custom etched PCB with copper touch pads
-   Supporting resistors, capacitors, and LEDs

How It Works
------------

The project uses the ESP32's built-in `touchRead()` function to detect capacitive changes when a finger approaches the copper touch pads. When a touch is detected (reading drops below threshold of 28), the corresponding relay toggles to control connected appliances.

Key Advantages over Arduino
---------------------------

-   **Native Touch Support**: No external touch modules required
-   **Multiple Touch Inputs**: Up to 10 touch pins available
-   **Adjustable Sensitivity**: Software-controlled threshold settings
-   **Power Efficient**: Deep sleep mode with touch wake-up capability

Getting Started
---------------

1.  **Hardware Setup**: Assemble the PCB and connect touch pads to ESP32 pins 13, 12, 14, and 27
2.  **Upload Code**: Flash the Arduino sketch to your ESP32
3.  **Connect Loads**: Wire your appliances through the relay outputs
4.  **Test**: Touch the pads to control your connected devices

Complete Tutorial
-----------------

For detailed build instructions, circuit diagrams, PCB files, and step-by-step assembly guide, visit:

**🔗 [Complete Project Tutorial on Circuit Digest](https://circuitdigest.com/microcontroller-projects/build-your-own-capacitive-touch-sensor-to-control-home-appliances-using-esp32)**

Downloads
---------

-   **Gerber Files**: PCB manufacturing files included
-   **Eagle Design Files**: Complete schematic and PCB layout
-   **Arduino Code**: Ready-to-upload ESP32 sketch

Applications
------------

-   Smart home automation
-   Touch-controlled lighting systems
-   Industrial control panels
-   Interactive displays
-   Retrofit existing switches with touch control

* * * * *

*This project demonstrates the power of ESP32's built-in capacitive touch capabilities for creating intuitive, modern control interfaces.*
