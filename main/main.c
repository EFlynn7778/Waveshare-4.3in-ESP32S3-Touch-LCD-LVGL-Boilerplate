#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "waveshare_rgb_lcd_port.h"
#include "ui/ui.h"
#include "ui/vars.h"
#include "esp_timer.h"
#include "esp_log.h"


void app_main(void)
{   
    ESP_LOGI("TAG", "system start");
    waveshare_esp32_s3_rgb_lcd_init(); /* Initialize the Waveshare ESP32-S3 RGB LCD */
      
    if (lvgl_port_lock(-1)) { 
        ui_init();
        lvgl_port_unlock();
    }

}
