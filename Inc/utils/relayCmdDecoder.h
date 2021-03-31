//
// Created by msin87_core_i5 on 31.03.2021.
//

#ifndef PLANT_RELAYCMDDECODER_H
#define PLANT_RELAYCMDDECODER_H

#include <stdio.h>
#include "relayCommands.h"
#include "uartCommands4b.h"

RelayCommand relayCmdDecoder(const uint8_t commandData[3]);
#endif //PLANT_RELAYCMDDECODER_H
