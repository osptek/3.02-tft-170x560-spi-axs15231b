#include "esp_err.h"
#include "esp_log.h"
#include "lv_demos.h"
#include "board.h"

static const char *TAG = "main";

void app_main(void)
{
    ESP_ERROR_CHECK(board_init());

    if (board_lvgl_lock(UINT32_MAX)) {
        lv_demo_widgets();
        board_lvgl_unlock();
    } else {
        ESP_LOGE(TAG, "LVGL lock failed");
    }
}
