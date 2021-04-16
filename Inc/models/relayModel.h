//
// Created by msin87_core_i5 on 30.03.2021.
//

#ifndef PLANT_RELAYMODEL_H
#define PLANT_RELAYMODEL_H
#include <stm32f1xx_hal.h>
#include "gpio.h"


void setRelayState(uint8_t commandData[3]);
uint8_t getRelayState(uint8_t relayId);
#endif //PLANT_RELAYMODEL_H
