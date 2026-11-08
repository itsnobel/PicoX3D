/**
 * PicoX3D Board Pin Definitions
 * Board Hardware: RP2040 / RP2350 (Raspberry Pi Pico)
 * Target: Hack Club Freestyle Project (PicoX3D)
 */

#pragma once

#define BOARD_INFO_NAME "PicoX3D Board"

// --------------------------------------------------------------------------
// Stepper Motor Drivers (TMC2209)
// --------------------------------------------------------------------------
#define X_STEP_PIN                  0
#define X_DIR_PIN                   1

#define Y_STEP_PIN                  2
#define Y_DIR_PIN                   3

#define Z_STEP_PIN                  4
#define Z_DIR_PIN                   5

#define E0_STEP_PIN                 6
#define E0_DIR_PIN                  7

// Shared TMC2209 Hardware Serial/UART Pin
#define TMC_UART_PIN                8

// --------------------------------------------------------------------------
// Endstop Limit Switches
// --------------------------------------------------------------------------
#define X_MIN_PIN                   9
#define Y_MIN_PIN                  10
#define Z_MIN_PIN                  11

// --------------------------------------------------------------------------
// Heaters & Power Control (MOSFETs)
// --------------------------------------------------------------------------
#define HEATER_0_PIN               12  // Hotend MOSFET
#define HEATER_BED_PIN             13  // Heated Bed MOSFET

// --------------------------------------------------------------------------
// Display (ILI9341 2.8" SPI) & Touch Controller (XPT2046)
// --------------------------------------------------------------------------
#define LCD_PINS_RS                15  // DC / RS Pin
#define LCD_PINS_ENABLE            14  // CS Pin
#define LCD_RESET_PIN              22  // Shared Reset Pin

#define SD_SS_PIN                  20  // SD Card Chip Select
#define TOUCH_CS_PIN               21  // Touch Screen Chip Select
#define TOUCH_INTERRUPT_PIN        28  // Touch IRQ Pin

#define SD_SCK_PIN                 18  // SPI0 Clock
#define SD_MOSI_PIN                19  // SPI0 Data In
#define SD_MISO_PIN                16  // SPI0 Data Out

// --------------------------------------------------------------------------
// Thermistors (Analog Pins)
// --------------------------------------------------------------------------
#define TEMP_0_PIN                 26  // Hotend Thermistor (ADC0)
#define TEMP_BED_PIN               27  // Bed Thermistor (ADC1)
