/*
 * Copyright © 2001-2011 Stéphane Raimbault <stephane.raimbault@gmail.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef MODBUS_RTUTCP_PRIVATE_H
#define MODBUS_RTUTCP_PRIVATE_H

#ifndef _MSC_VER
#include <stdint.h>
#else
#include "stdint.h"
#endif

#if defined(_WIN32)
#include <windows.h>
#else
#include <termios.h>
#endif

#define _MODBUS_RTUTCP_HEADER_LENGTH      1
#define _MODBUS_RTUTCP_PRESET_REQ_LENGTH  6
#define _MODBUS_RTUTCP_PRESET_RSP_LENGTH  2

#define _MODBUS_RTUTCP_CHECKSUM_LENGTH    2

typedef struct _modbus_rtutcp {
    uint16_t t_id;
    /* TCP port */
    int port;
    /* IP address */
    char ip[16];
} modbus_rtutcp_t;

#endif /* MODBUS_RTUTCP_PRIVATE_H */
