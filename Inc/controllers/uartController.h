//
// Created by msin87_core_i5 on 30.03.2021.
//

#ifndef PLANT_UARTCONTROLLER_H
#define PLANT_UARTCONTROLLER_H
#include <stm32f1xx_hal.h>
#include "utils/uartCommands4b.h"
#include "models/relayModel.h"
void uartController(UART_HandleTypeDef *huart, const uint8_t* receiveBuffer, uint8_t bufferSize);
#endif //PLANT_UARTCONTROLLER_H
