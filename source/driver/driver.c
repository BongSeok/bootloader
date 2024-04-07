#include <driver/driver.h>

void initialize_hal(void)
{
  initialize_bsp();

  initialize_led();
}

void delay(uint32_t time_ms)
{
  HAL_Delay(time_ms);
}

uint32_t millis(void)
{
  return HAL_GetTick();
}
