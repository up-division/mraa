/*
 * Author: Dan O'Donovan <dan@emutex.com>
 * Copyright (c) 2015 Emutex Ltd.
 * Copyright (c) 2014 Intel Corporation.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "mraa_internal.h"

// +1 as pins are "1 indexed"
#define MRAA_UP_GPIOCOUNT (28)
#define MRAA_UP_PINCOUNT MRAA_UP_GPIOCOUNT
#define MRAA_UPEHL_CARRIER_BOARD_GPIOCOUNT (40)

mraa_board_t*
mraa_up_boards();

#ifdef __cplusplus
}
#endif
