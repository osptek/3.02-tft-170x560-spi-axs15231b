#pragma once

#include "driver/gpio.h"

/* Landscape 560x170 — vendor XY init enables host addressing at this size */
#define BOARD_LCD_H_RES           (560)
#define BOARD_LCD_V_RES           (170)

/* LCD QSPI */
#define BOARD_PIN_LCD_RST         (GPIO_NUM_16)
#define BOARD_PIN_LCD_SCLK        (GPIO_NUM_15)
#define BOARD_PIN_LCD_DC          (GPIO_NUM_14) /* QSPI 模式下驱动不使用 */
#define BOARD_PIN_LCD_CS          (GPIO_NUM_47)
#define BOARD_PIN_LCD_DATA0       (GPIO_NUM_13) /* qsio0 */
#define BOARD_PIN_LCD_DATA1       (GPIO_NUM_12) /* qsio1 */
#define BOARD_PIN_LCD_DATA2       (GPIO_NUM_11) /* qsio2 */
#define BOARD_PIN_LCD_DATA3       (GPIO_NUM_10) /* qsio3 */
#define BOARD_PIN_LCD_TE          (GPIO_NUM_9)
#define BOARD_PIN_LCD_BL          (GPIO_NUM_38)

/* 触摸 I2C */
#define BOARD_ENABLE_TOUCH        (0)
#define BOARD_PIN_TOUCH_INT       (GPIO_NUM_39)
#define BOARD_PIN_TOUCH_SDA       (GPIO_NUM_40)
#define BOARD_PIN_TOUCH_SCL       (GPIO_NUM_41)
#define BOARD_PIN_TOUCH_RST       (GPIO_NUM_42)
