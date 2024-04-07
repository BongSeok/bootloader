#ifndef HAL_H
#define HAL_H

#include <driver/core/led.h>
#include <driver/driver_define.h>

void initialize_hal(void);

void delay(uint32_t time_ms);
uint32_t millis(void);

#endif /* HAL_H */
