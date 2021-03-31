//
// Created by msin87_core_i5 on 30.03.2021.
//

#ifndef PLANT_UARTRECEIVER_H
#define PLANT_UARTRECEIVER_H

#include <stdint-gcc.h>

typedef struct {
    uint8_t isUartRxCplt;
    uint8_t uartReceiveBuffer4B[4];
} UartState;

void uartReceiver(UART_HandleTypeDef *huart);

#endif //PLANT_UARTRECEIVER_H
