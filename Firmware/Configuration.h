// 1. Board & Serial Configuration
#define MOTHERBOARD BOARD_PICOX3D
#define SERIAL_PORT -1               // Onboard USB CDC for Computer Connection
#define SERIAL_PORT_2 1              // Secondary Serial / USB Host for Pendrive

// 2. Stepper Driver Types
#define X_DRIVER_TYPE  TMC2209
#define Y_DRIVER_TYPE  TMC2209
#define Z_DRIVER_TYPE  TMC2209
#define E0_DRIVER_TYPE TMC2209

// 3. Thermistor Sensors Setup
#define TEMP_SENSOR_0 1              // NTC 100K Thermistor (Hotend)
#define TEMP_SENSOR_BED 1            // NTC 100K Thermistor (Bed)

// 4. Standalone Printing & Display Options
#define SDSUPPORT                    // Enable MicroSD & USB Pendrive support
#define TFT_COLOR_UI                 // Enable Color Graphic UI
#define TOUCH_BUTTONS                // Enable XPT2046 Touch Interface
