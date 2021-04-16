//
// Created by msin87_core_i5 on 30.03.2021.
//

#include <utils/cmdDecoder.h>
#include "controllers/uartController.h"

void controller4Byte(UART_HandleTypeDef *huart, const uint8_t *receiveBuffer) {
    UartCommand command = cmdDecoder(receiveBuffer);
    uint8_t buffer5Byte[5];
    switch (command.commandId) {
        case RELAY_CMD:
            setRelayState(command.commandData);
            HAL_UART_Transmit_IT(huart, (uint8_t *) receiveBuffer, 4);
            break;
        case GET_RELAY_STATE:
            buffer5Byte[0] = receiveBuffer[0];
            buffer5Byte[1] = receiveBuffer[1];
            buffer5Byte[2] = receiveBuffer[2];
            buffer5Byte[3] = receiveBuffer[3];
            buffer5Byte[4] = (getRelayState(command.commandData[2]) == 0);
            HAL_UART_Transmit(huart, buffer5Byte, 5, 100);
            break;
        default:
        case UNKNOWN:
            return;
    }
}

void uartController(UART_HandleTypeDef *huart, const uint8_t *receiveBuffer, uint8_t bufferSizeBytes) {
    if (bufferSizeBytes == 4) {
        controller4Byte(huart, receiveBuffer);
        return;
    }
}
