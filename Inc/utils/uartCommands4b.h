//
// Created by msin87_core_i5 on 30.03.2021.
//

#ifndef PLANT_UARTCOMMANDS4B_H
#define PLANT_UARTCOMMANDS4B_H
#include "stdio.h"
typedef enum {
    RELAY_CMD,
    GET_RELAY_STATE,
    UNKNOWN
} T_Command;

typedef struct {
    T_Command commandId;
    uint8_t commandData[3];
} UartCommand;

#endif //PLANT_UARTCOMMANDS4B_H
