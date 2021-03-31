//
// Created by msin87_core_i5 on 31.03.2021.
//

#ifndef PLANT_RELAYCOMMANDS_H
#define PLANT_RELAYCOMMANDS_H

#include <stm32f1xx_hal.h>

typedef enum {
    RELAY_1 = 1,
    RELAY_2 = 2,
    RELAY_3 = 3,
    RELAY_4 = 4,
} Relay;

typedef enum {
    RELAY_1_SET_ON =  0x000001,
    RELAY_2_SET_ON =  0x000101,
    RELAY_3_SET_ON =  0x000201,
    RELAY_4_SET_ON =  0x000301,
    RELAY_1_SET_OFF = 0x000000,
    RELAY_2_SET_OFF = 0x000100,
    RELAY_3_SET_OFF = 0x000200,
    RELAY_4_SET_OFF = 0x000300,
} RelayCommand;

typedef enum {
    RELAY_ON = GPIO_PIN_RESET,
    RELAY_OFF = GPIO_PIN_SET
} RelayState;

#endif //PLANT_RELAYCOMMANDS_H
