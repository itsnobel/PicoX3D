# PicoX3D
PicoX3d is a custom made 3D printer that uses raspberry Pi Pico for controlling. It is a cost efficient 3 axis 3d printer that uses total 4 stepper motors for control and 300x300x300 mm cube printing volume. Despite having only 3 motors for axial control, it is a high speed 3D printer with pinpoint accuracy.

---

## Key Features
* Microcontroller: Raspberry Pi Pico 
* Stepper Drivers: 4; For X, Y, Z and E0
* Display & Touch: 2.8" TFT display with touch navigation.
* Standalone Printing: Can extract Gcode directly from pendrive or sd card and print smoothly
* Heating & Power Control: Dual MOSFETs (IRLB3034) with optocoupler isolation for controlling the heated bed and hotend.

---

## Hardware List(Only For The PCB)
* Raspberry Pi Pico / Pico 2
* TMC2209 Stepper Driver Modules (4 pcs)
* 2.8" SPI TFT Touch Display Module
* USB-A Female Socket (USB Host)
* IRLB3034 MOSFETs & PC817 Optocouplers
* Screw Terminals & JST XH Connectors (2-pin, 3-pin, 4-pin)
* Passive components (100µF capacitors, 4.7kΩ/10kΩ resistors)

---

## The Schematic and PCB Design
The schematic design contains all parts that will needed to make the main controller   board of the printer. The mainboard doesn't support soldiered or intigrated chips, instead it will use headers so that damaged parts can be replaced easily

<img width="944" height="687" alt="Screenshot 2026-11-08 230536" src="https://github.com/user-attachments/assets/9548236d-6cb0-4cd2-8999-46cae63123f3" />

---

The PCB design is neat, compact with headers and all the parts in a short space that allows to put it in a small space.

<img width="714" height="718" alt="Screenshot 2026-11-08 231615" src="https://github.com/user-attachments/assets/99cc4aa0-0067-4b92-8ddd-49a60a3ae752" />
<img width="864" height="670" alt="Screenshot 2026-11-08 231712" src="https://github.com/user-attachments/assets/ed6bb555-3e03-4494-a99f-dbee0c0b40d5" />


---

## Firmware Setup
Key Configuration:
- Architecture: RP2040 / RP2350 Architecture
- Stepper Driver Communication: Single-wire Software/Hardware UART on GP8
- Display Driver: ST7789 / ILI9341 SPI (Shared SPI0 Bus)
- Touch Driver: XPT2046 SPI Touch Controller


## The CAD Model

The CAD model is created in fusion 360 application where it can be simulate before build. The cad model is designed in such a way that it can run on the application to help us find any mistake before manufacturing the final product. The Axial setups ensures proper weight balance, stability and high speed like a professionally manufactured printer. Also it is build in such a way that it uses less 3d printed parts. 
Some visualizations-

<img width="776" height="846" alt="Screenshot 2026-11-08 112639" src="https://github.com/user-attachments/assets/b59f945c-0ea1-434f-9e0d-c09325822f23" />
<img width="955" height="816" alt="Screenshot 2026-11-08 112629" src="https://github.com/user-attachments/assets/b7187b27-1b8e-4f09-930c-8510fad52435" />
<img width="1066" height="829" alt="Screenshot 2026-11-08 112700" src="https://github.com/user-attachments/assets/dc453a41-d7f9-46b1-838f-c0596fbaef6f" />

---




