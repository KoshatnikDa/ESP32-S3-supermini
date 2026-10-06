#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

#define PIN_RGB_LED 48
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + PIN_RGB_LED;
#define BUILTIN_LED LED_BUILTIN  
#define RGB_BUILTIN    LED_BUILTIN
#define RGB_BRIGHTNESS 64

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// ==== 1. I2C OLED ДИСПЛЕЙ ====
#define CONFIG_DISPLAY_I2C true   
#define PIN_SDA 6                 // Твой пин SDA
#define PIN_SCL 7                 // Твой пин SCL

// ==== 2. ОБЩАЯ ШИНА SPI ДЛЯ МОДУЛЕЙ ====
#define MODULE_SPI_MOSI 4
#define MODULE_SPI_MISO 5
#define MODULE_SPI_SCK  3
#define SD_CARD_CS      10        // Выбор SD-карты

// ==== 3. РАДИОМОДУЛИ И ИК ====
#define CC1101_CSN  21            // Внешний пин GP21
#define CC1101_GDO0 1             // Внешний пин GP1

#define NRF24_CSN   9             // Внешний пин GP9
#define NRF24_CE    20            // Внешний пин GP20

#define IR_TX_PIN   2             // Внешний пин GP2
#define IR_RX_PIN   0             // Внешний пин GP0

// ==== 4. КНОПКИ НА ВНУТРЕННИХ ПАДАХ ====
#define USE_ANALOG_BUTTONS false  
#define HAS_BTN     1             

#define BTN_UP      39            // Вверх -> пад 39
#define BTN_DOWN    40            // Вниз -> пад 40
#define BTN_LEFT    41            // Влево -> пад 41
#define BTN_RIGHT   42            // Вправо -> пад 42
#define BTN_SELECT  47            // ОК/Выбор -> пад 47

#define BTN_ACT     LOW           

#endif /* Pins_Arduino_h */
