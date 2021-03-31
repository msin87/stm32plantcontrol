//
// Created by msin87_core_i5 on 31.03.2021.
//
#include "utils/relayCmdDecoder.h"

RelayCommand relayCmdDecoder(const uint8_t commandData[3]) {
    return (commandData[0]<<16)|(commandData[1]<<8)|commandData[2];
}
