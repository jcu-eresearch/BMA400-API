#ifndef BMA400_STEP_COUNTER_CONFIG_DEFS_H_
#define BMA400_STEP_COUNTER_CONFIG_DEFS_H_

#include "stdint.h"

#define BMA_STEP_COUNTER_CONFIG_SIZE 24

extern uint8_t bma400_step_counter_config_wrist[BMA_STEP_COUNTER_CONFIG_SIZE];
extern uint8_t bma400_step_counter_config_non_wrist[BMA_STEP_COUNTER_CONFIG_SIZE];

#endif // BMA400_STEP_COUNTER_CONFIG_DEFS_H_