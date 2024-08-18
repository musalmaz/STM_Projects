/*
 * uart_driver.c
 *
 *  Created on: Aug 4, 2024
 *      Author: musa
 */


#include "uart_driver.h"
#include "stm32l4xx_hal.h"
uint32_t UART_TIMEOUT = 100;
extern UART_HandleTypeDef hlpuart1;
void transmit_UART_MSG(const char * msg, size_t size_msg)
{
	for(size_t i= 0; i < size_msg; i++)
	{
		HAL_UART_Transmit(&hlpuart1, (uint8_t *)&msg[i], 1, UART_TIMEOUT);

	}
}

void transmit_UART_MSG_Pooling(UART_HandleTypeDef *hlpuart1, const char * msg, size_t size_msg)
{
//	for(size_t i= 0; i < size_msg; i++)
//	{
//		HAL_UART_Transmit(hlpuart1, (uint8_t *)&msg[i], 1, UART_TIMEOUT);
//
//	}
	HAL_UART_Transmit(hlpuart1, (char *)msg, size_msg, UART_TIMEOUT);
}

void transmit_UART_MSG_IT(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size)
{
	HAL_UART_Transmit_IT(hlpuart1, (uint8_t *)buf, size);
}

void transmit_UART_MSG_IT_Event(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size)
{

}

void transmit_UART_MSG_DMA(UART_HandleTypeDef *hlpuart1, const char * buf, size_t size)
{
	HAL_UART_Transmit_DMA(hlpuart1, (uint8_t *)buf, size);
}
