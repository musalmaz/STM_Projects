/*
 * led_test.cpp
 *
 *  Created on: Jul 13, 2024
 *      Author: musa
 */

#include "Drivers/led_test.hpp"

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif

LED::LED(GPIO_TypeDef * port, uint16_t pin) : GPIO_Port(port), GPIO_Pin(pin) {};

void LED::turnLedOn(void)
{
//	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_14);
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, GPIO_PIN_SET);
}

void LED::turnLedOff()
{
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, GPIO_PIN_RESET);
}

void LED::blinkLed()
{
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, GPIO_PIN_SET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIO_Port, GPIO_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
}

void LED::toggleLed(uint32_t Delay_ms)
{
	HAL_GPIO_TogglePin(GPIO_Port, GPIO_Pin);
	HAL_Delay(Delay_ms);
}
