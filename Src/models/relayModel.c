//
// Created by msin87_core_i5 on 30.03.2021.
//


#include <uartController.h>
#include <utils/relayCommands.h>
#include <utils/relayCmdDecoder.h>

void setRelayState(uint8_t commandData[3]){
    RelayCommand relayCommand = relayCmdDecoder(commandData);
    switch (relayCommand) {
        case RELAY_1_SET_ON:
            HAL_GPIO_WritePin(RELAY1_GPIO_Port, RELAY1_Pin, (GPIO_PinState) RELAY_ON);
            break;
        case RELAY_2_SET_ON:
            HAL_GPIO_WritePin(RELAY2_GPIO_Port, RELAY2_Pin, (GPIO_PinState) RELAY_ON);
            break;
        case RELAY_3_SET_ON:
            HAL_GPIO_WritePin(RELAY3_GPIO_Port, RELAY3_Pin, (GPIO_PinState) RELAY_ON);
            break;
        case RELAY_4_SET_ON:
            HAL_GPIO_WritePin(RELAY4_GPIO_Port, RELAY4_Pin, (GPIO_PinState) RELAY_ON);
            break;
        case RELAY_1_SET_OFF:
            HAL_GPIO_WritePin(RELAY1_GPIO_Port, RELAY1_Pin, (GPIO_PinState) RELAY_OFF);
            break;
        case RELAY_2_SET_OFF:
            HAL_GPIO_WritePin(RELAY2_GPIO_Port, RELAY2_Pin, (GPIO_PinState) RELAY_OFF);
            break;
        case RELAY_3_SET_OFF:
            HAL_GPIO_WritePin(RELAY3_GPIO_Port, RELAY3_Pin, (GPIO_PinState) RELAY_OFF);
            break;
        case RELAY_4_SET_OFF:
            HAL_GPIO_WritePin(RELAY4_GPIO_Port, RELAY4_Pin, (GPIO_PinState) RELAY_OFF);
            break;
        default:
            return;
    }
}
