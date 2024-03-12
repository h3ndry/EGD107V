#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/gpio_types.h"
#include "soc/gpio_num.h"
#include <stdbool.h>
#include <stdio.h>

void app_main(void) {

  gpio_set_direction(GPIO_NUM_22, GPIO_MODE_INPUT);
  gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLUP_ONLY);
  gpio_set_direction(GPIO_NUM_26, GPIO_MODE_OUTPUT);

  while (true) {
    if (gpio_get_level(GPIO_NUM_22))
      gpio_set_level(GPIO_NUM_26, 1);
    else
      gpio_set_level(GPIO_NUM_26, 0);

    vTaskDelay(10);
  }
}
