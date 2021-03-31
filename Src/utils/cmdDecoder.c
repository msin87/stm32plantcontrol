//
// Created by msin87_core_i5 on 31.03.2021.
//


#include <relayModel.h>
#include "utils/cmdDecoder.h"
/**
 *
 * @param receiveBuffer
 * @return RelayCommand
 *         00            00            00               00
 *      RelayCommand      RelayCommand data ----------------------|
 *
 *         00            00             00               00
 *    Set relay state   Relay number----|            Relay state
 */
UartCommand cmdDecoder(const uint8_t* receiveBuffer){
    UartCommand command;
    switch(receiveBuffer[0]){
        case 0:
            command.commandId = RELAY_CMD;
            break;
        default:
            command.commandId = UNKNOWN;
            break;
    }
    command.commandData[0] = receiveBuffer[1];
    command.commandData[1] = receiveBuffer[2];
    command.commandData[2] = receiveBuffer[3];
    return command;
}