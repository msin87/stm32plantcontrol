//
// Created by msin87_core_i5 on 30.03.2021.
//

#include <utils/cmdDecoder.h>
#include "controllers/uartController.h"

void controller4Byte(UART_HandleTypeDef *huart, const uint8_t* receiveBuffer) {
    UartCommand command = cmdDecoder(receiveBuffer);
    switch (command.commandId) {
        case RELAY_CMD:
            setRelayState(command.commandData);
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
