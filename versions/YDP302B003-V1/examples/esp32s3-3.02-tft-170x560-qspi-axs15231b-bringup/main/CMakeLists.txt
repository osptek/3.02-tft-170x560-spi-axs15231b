idf_component_register(SRCS "main.c" "board_lcd.c" "board_lvgl.c"
                    INCLUDE_DIRS "."
                    REQUIRES driver esp_timer)
