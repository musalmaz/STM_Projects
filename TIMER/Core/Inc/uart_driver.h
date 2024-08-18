/*
 * uart_driver.h
 *
 *  Created on: Aug 4, 2024
 *      Author: musa
 */

#ifndef INC_UART_DRIVER_H_
#define INC_UART_DRIVER_H_

#include "stm32l4xx_hal.h"


void transmit_UART_MSG( const char * msg, size_t size_msg);
void transmit_UART_MSG_Pooling(UART_HandleTypeDef *hlpuart1, const char * msg, size_t size_msg);

void transmit_UART_MSG_IT(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size);
void transmit_UART_MSG_IT_Event(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size);

void transmit_UART_MSG_DMA(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size);

#endif /* INC_UART_DRIVER_H_ */
