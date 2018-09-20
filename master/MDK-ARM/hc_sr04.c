#include "hc_sr04.h"

void start_hc_sr04(void)
{
	HAL_GPIO_WritePin(trig_GPIO_Port, trig_Pin,GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(trig_GPIO_Port, trig_Pin,GPIO_PIN_RESET);
	return;
}
