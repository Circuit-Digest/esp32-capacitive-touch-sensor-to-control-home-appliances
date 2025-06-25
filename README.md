Capacitive Touch Sensor Home Automation using ESP32
====================================================

[![ESP32](https://img.shields.io/badge/ESP32-003B71?style=for-the-badge&logo=espressif&logoColor=white)](https://www.espressif.com/) 
[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)](https://www.arduino.cc/) 
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT) 
[![CircuitDigest](https://img.shields.io/badge/Tutorial-CircuitDigest-blue?style=for-the-badge)](https://circuitdigest.com/microcontroller-projects/build-your-own-capacitive-touch-sensor-to-control-home-appliances-using-esp32)

A **Capacitive Touch Sensor System using ESP32** for automating home appliances like lights or fans with simple touch inputs. This DIY project uses ESP32's built-in capacitive touch GPIOs for efficient control.

![Capacitive Touch with ESP32](https://github.com/Circuit-Digest/esp32-capacitive-touch-sensor-to-control-home-appliances/blob/44d00514784969d09ef6c152c60471363590681b/ESP32-Touch-Sensor.jpg)

🚀 Features
-----------

-   **Touch-Controlled Switching** - No mechanical switches needed
-   **Multiple Touch Inputs** - Up to 10 touch-sensitive GPIOs
-   **Relay Control** - Switch AC appliances using 5V relay module
-   **Compact Design** - Minimal components with clean UI
-   **Noise Resilient** - Works even in electrically noisy environments
-   **Expandable** - Add more touch buttons for more devices

🛠️ Hardware Requirements
-------------------------

### Core Components

-   **ESP32 Dev Board** (1x) - Built-in WiFi + Capacitive Touch
-   **5V Relay Module** (1x or more) - To switch AC loads
-   **Touch Pads (or Wires)** - For capacitive input
-   **LED Indicator** (optional) - For status indication
-   **Power Adapter** - 5V USB or regulated power supply

### Optional

-   **Plastic or Wood Panel** - For mounting touch sensors
-   **Screw Terminal Block** - For safe AC connections
-   **Opto-Isolated Relay Board** - For better AC protection

📐 Circuit Diagram
------------------

```
ESP32 GPIO Connections:
┌────────────┬──────────────┬───────────────────────┐
│ ESP32 Pin  │ Component    │ Function               │
├────────────┼──────────────┼───────────────────────┤
│ GPIO 4     │ Touch Pad 1  │ Controls Relay 1       │
│ GPIO 5     │ Touch Pad 2  │ Controls Relay 2       │
│ GPIO 23    │ Relay IN1    │ Relay trigger (AC Load)│
│ GND        │ Relay GND    │ Common ground          │
│ 5V         │ Relay VCC    │ Power to relay board   │
└────────────┴──────────────┴───────────────────────┘
```

🔧 Installation
---------------

### 1. Library Setup

No external libraries required. Use Arduino IDE with ESP32 board support:
```
Board Manager URL: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```

### 2. Hardware Assembly

- Wire touch pads to GPIOs (e.g., GPIO 4, 5)
- Connect relays to ESP32 and AC appliances
- Ensure common GND for all components

### 3. Code Upload

```
git clone https://github.com/Circuit-Digest/ESP32-Capacitive-Touch-Home-Automation.git
cd ESP32-Capacitive-Touch-Home-Automation
```

Upload `ESP32_Touch_Control.ino` via Arduino IDE

🎯 Usage
--------

1. Power on the ESP32 system
2. Touch the wire or pad connected to GPIO 4 or 5
3. Relay toggles the appliance ON/OFF accordingly
4. Optional LED provides visual feedback

📁 Code Structure
-----------------

```
├── Code/
│   └── ESP32_Touch_Control/
│       └── ESP32_Touch_Control.ino
├── Circuit Diagram/
│   └── ESP32_Touch_Schematic.png
├── README.md
```

🔧 Troubleshooting
------------------

### Common Issues

**Touch Input Not Working**

- Check touch threshold values in code
- Use larger surface or conductive wire for better sensing
- Avoid long wires (increase signal noise)

**Relay Not Switching**

- Ensure relay module is 5V compatible
- Confirm GPIO is correctly triggering relay IN pin
- Use opto-isolated relay for inductive loads

**Random Triggering**

- Place touch pads away from AC wiring
- Shield wires or use lower threshold value

📱 Applications
---------------

- **Home Light Control**
- **Fan and Appliance Automation**
- **Smart Switch Panels**
- **Touch-Based Wall Controllers**
- **Minimalist Switch Design for Interior**

🔮 Future Enhancements
----------------------

- [ ] WiFi + Blynk/Node-RED Integration
- [ ] Capacitive Touch Slider or Dimmer
- [ ] MQTT for Home Assistant Integration
- [ ] OTA Firmware Updates
- [ ] Touch Sensor Calibration UI

🏗️ Technical Specifications
----------------------------

| Parameter            | Value                  |
|----------------------|------------------------|
| Operating Voltage     | 3.3V / 5V via Regulator|
| Touch Channels        | Up to 10 (T0-T9)       |
| Response Time         | <100ms                |
| Relay Control Voltage | 3.3V or 5V            |
| Load Capacity         | Up to 10A (per relay) |
| Power Consumption     | <100mA (Idle)         |
| Operating Temp        | 0°C to 50°C           |

🤝 Contributing
---------------

We welcome improvements!

1. Fork the repository
2. Create a branch (`git checkout -b touch-feature`)
3. Commit changes (`git commit -m 'Improved touch response'`)
4. Push (`git push origin touch-feature`)
5. Open a Pull Request

🔗 Links
--------

- **🛠 Tutorial**: [CircuitDigest Guide](https://circuitdigest.com/microcontroller-projects/build-your-own-capacitive-touch-sensor-to-control-home-appliances-using-esp32)
- **📚 ESP32 Projects**: [Circuit Digest ESP32 Projects](https://circuitdigest.com/esp32-projects)
- **🔌 Home Automation**: [More Home Automation Ideas](https://circuitdigest.com/home-automation-projects)

⭐ Support
---------

If you like this project, please ⭐ star the repo and share it with fellow makers!

---

**Built with ❤️ by [Circuit Digest](https://circuitdigest.com/)**

---

### Keywords

`esp32 touch control` `capacitive switch esp32` `home automation esp32` `smart switch project` `touch sensor home automation` `arduino esp32 project` `capacitive touch relay` `diy smart home control`
-   Industrial control panels
-   Interactive displays
-   Retrofit existing switches with touch control

* * * * *

*This project demonstrates the power of ESP32's built-in capacitive touch capabilities for creating intuitive, modern control interfaces.*
