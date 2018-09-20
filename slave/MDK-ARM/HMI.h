#ifndef __HIM_H__
#define __HIM_H__

#include "main.h"
#include "stm32f1xx_hal.h"
#include "usart.h"
#include "gpio.h"
#include "config.h"

void stop(void);
//void display(void);
void display(uint8_t buffer[6]);
#endif
