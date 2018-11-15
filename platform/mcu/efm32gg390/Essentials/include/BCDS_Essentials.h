/*----------------------------------------------------------------------------*/
/*
 * Copyright (C) Robert Bosch GmbH.
 * All Rights Reserved. Confidential.
 *
 * Distribution only to people who need to know this information in
 * order to do their job.(Need-to-know principle).
 * Distribution to persons outside the company, only if these persons
 * signed a non-disclosure agreement.
 * Electronic transmission, e.g. via electronic mail, must be made in
 * encrypted form.
 */
/*----------------------------------------------------------------------------*/

#ifndef BCDS_ESSENTIALS_H_
#define BCDS_ESSENTIALS_H_

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "BCDS_HAL.h"

/**
 *
 * @defgroup BCDS_ESSENTIALS Essentials
 *
 * @{
 * @brief Essentials is the basic component of the BCDS Platform
 * @details This package contains essential components and modules of the BCDS software platform like the
 * hardware abstraction layer (HAL)	including a microcontroller unit abstraction (MCU),
 * the interface for the board support package (BSP) as well as basic types, an assertion and a
 * return code support module.
 *
 * @file BCDS_Essentials.h
 */

/**
 * @enum BCDS_Essentials_ModuleID_E
 * @brief BCDS_MODULE_ID for each module in the ESSENTIALS package, used for the macros in BCDS_Retcode.h
 * @details usage: For a new module in this package, add a new ID value to this enum, then use it in the module's C file:
 *
 *      #undef BCDS_MODULE_ID
 *      #define BCDS_MODULE_ID BCDS_ESSENTIALS_MODULE_ID_xxx
 */
enum BCDS_Essentials_ModuleID_E
{
    BCDS_ESSENTIALS_MODULE_ID_ASSERT = 1,
    BCDS_ESSENTIALS_MODULE_ID_RETCODE,

    BCDS_ESSENTIALS_MODULE_ID_UART,
    BCDS_ESSENTIALS_MODULE_ID_SPI,
    BCDS_ESSENTIALS_MODULE_ID_I2C,
    BCDS_ESSENTIALS_MODULE_ID_FLASH,
    BCDS_ESSENTIALS_MODULE_ID_PWM,
    BCDS_ESSENTIALS_MODULE_ID_WATCHDOG,
    BCDS_ESSENTIALS_MODULE_ID_LOCK,
    BCDS_ESSENTIALS_MODULE_ID_CRITICALSECTION,
    BCDS_ESSENTIALS_MODULE_ID_FAULTHANDLER,
    BCDS_ESSENTIALS_MODULE_ID_LEUART,
    BCDS_ESSENTIALS_MODULE_ID_SLEEP,
    BCDS_ESSENTIALS_MODULE_ID_TIMER,
    BCDS_ESSENTIALS_MODULE_ID_SIGNAL,
    BCDS_ESSENTIALS_MODULE_ID_DELAY,
    BCDS_ESSENTIALS_MODULE_ID_TIMESTAMP,
    BCDS_ESSENTIALS_MODULE_ID_DMA,
    BCDS_ESSENTIALS_MODULE_ID_GPIO,
    BCDS_ESSENTIALS_MODULE_ID_RNG,
	BCDS_ESSENTIALS_MODULE_ID_CRC,
    BCDS_ESSENTIALS_MODULE_ID_FLASH_INTERN,

    BCDS_ESSENTIALS_BSP_MODULE_ID_BT_EM9301,
    BCDS_ESSENTIALS_BSP_MODULE_ID_BUTTON,
    BCDS_ESSENTIALS_BSP_MODULE_ID_CAN_SN65HVD234,
    BCDS_ESSENTIALS_BSP_MODULE_ID_GNSS_G7020,
    BCDS_ESSENTIALS_BSP_MODULE_ID_PWM_BUZZER,
    BCDS_ESSENTIALS_BSP_MODULE_ID_PWM_LED,
    BCDS_ESSENTIALS_BSP_MODULE_ID_GSM_SIM800H,
    BCDS_ESSENTIALS_BSP_MODULE_ID_MEM_W25Q256FV,
    BCDS_ESSENTIALS_BSP_MODULE_ID_SENSOR_NODE,
    BCDS_ESSENTIALS_BSP_MODULE_ID_CHARGER_BQ2407X,
    BCDS_ESSENTIALS_BSP_MODULE_ID_TEST_INTERFACE,
    BCDS_ESSENTIALS_BSP_MODULE_ID_IRQHANDLER,
    BCDS_ESSENTIALS_BSP_MODULE_ID_SYSTEM_STM32,
    BCDS_ESSENTIALS_BSP_MODULE_ID_BOARD,
    BCDS_ESSENTIALS_BSP_MODULE_ID_WIFI_CC3100MOD,
    BCDS_ESSENTIALS_BSP_MODULE_ID_SD_CARD,
    BCDS_ESSENTIALS_BSP_MODULE_ID_LED,
    BCDS_ESSENTIALS_BSP_MODULE_ID_UMTS_LISAU2,
    BCDS_ESSENTIALS_BSP_MODULE_ID_GPS_NEO7N,
    BCDS_ESSENTIALS_BSP_MODULE_ID_LORA_RN2XX3,
    BCDS_ESSENTIALS_BSP_MODULE_ID_LED_LM2755,
    BCDS_ESSENTIALS_BSP_MODULE_ID_DELAY_US,
    BCDS_ESSENTIALS_BSP_MODULE_ID_UMTS_QUECTELUC20,
    BCDS_ESSENTIALS_BSP_MODULE_ID_EXTENSION_GPIO,
    BCDS_ESSENTIALS_BSP_MODULE_ID_MAX31865,
    BCDS_ESSENTIALS_BSP_MODULE_ID_EXTENSION_BUTTON,
    BCDS_ESSENTIALS_BSP_MODULE_ID_EXTENSION_LED,
    BCDS_ESSENTIALS_BSP_MODULE_ID_RNG,
	BCDS_ESSENTIALS_BSP_MODULE_ID_LORA_SX1272,	
	BCDS_ESSENTIALS_BSP_MODULE_ID_TMP112,
	BCDS_ESSENTIALS_BSP_MODULE_ID_TMP116,
	BCDS_ESSENTIALS_BSP_MODULE_ID_BMM150,
	BCDS_ESSENTIALS_BSP_MODULE_ID_MAX44009,
	BCDS_ESSENTIALS_BSP_MODULE_ID_ADXL372,
	BCDS_ESSENTIALS_BSP_MODULE_ID_PCT2075,
	BCDS_ESSENTIALS_BSP_MODULE_ID_H3LIS,
	BCDS_ESSENTIALS_BSP_MODULE_ID_MEM_AT45DB,
	BCDS_ESSENTIALS_BSP_MODULE_ID_MEM_S25FL116K,
	BCDS_ESSENTIALS_BSP_MODULE_ID_MEM_W25X40CL,



};

#endif /* BCDS_ESSENTIALS_H_ */
/** @} *//* End of documentation group BCDS_ESSENTIALS */
