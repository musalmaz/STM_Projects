/*
 * led_test.hpp
 *
 *  Created on: Jul 13, 2024
 *      Author: musa
 */

#ifndef INC_DRIVERS_LED_TEST_HPP_
#define INC_DRIVERS_LED_TEST_HPP_
#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l4xx_hal.h"

#ifdef __cplusplus
}
#endif

class LED{
public:
	LED(GPIO_TypeDef* port, uint16_t pin);
	void blinkLed();
	void turnLedOff();
	void turnLedOn(void);
	void toggleLed(uint32_t Delay_ms);
private:
	GPIO_TypeDef* GPIO_Port;
	uint16_t GPIO_Pin;



};



#endif /* INC_DRIVERS_LED_TEST_HPP_ */
