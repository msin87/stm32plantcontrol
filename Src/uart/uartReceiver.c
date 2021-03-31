//
// Created by msin87_core_i5 on 30.03.2021.
//

#include <stm32f1xx_hal.h>
#include <cmsis_os.h>
#include <controllers/uartController.h>
#include "uart/uartReceiver.h"

UartState uartState;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
    if (huart->Instance == USART1) {
        uartState.isUartRxCplt = 1;
    }
}

void uartReceiver(UART_HandleTypeDef *huart) {
    HAL_UART_Receive_IT(huart, uartState.uartReceiveBuffer4B, 4);
    for (;;) {
        osDelay(1);
        if (uartState.isUartRxCplt) {
            HAL_UART_Receive_IT(huart, uartState.uartReceiveBuffer4B, 4);
            uartController(huart, uartState.uartReceiveBuffer4B, 4);
            uartState.isUartRxCplt = 0;
        }
    }
}