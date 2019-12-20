/***************************************************************************//**
* \file cyhal_triggers_psoc6_01.c
*
* \brief
* PSoC6_01 family HAL triggers header
*
* \note
* Generator version: 1.5.7254.19579
*
********************************************************************************
* \copyright
* Copyright 2016-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "cy_device_headers.h"
#include "cyhal_hw_types.h"

#ifdef CY_DEVICE_PSOC6ABLE2
#include "triggers/cyhal_triggers_psoc6_01.h"

const uint8_t cyhal_dest_to_mux[479] =
{
    5, /* TRIGGER_CPUSS_CTI_TR_IN0 */
    5, /* TRIGGER_CPUSS_CTI_TR_IN1 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN0 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN1 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN2 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN3 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN4 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN5 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN6 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN7 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN8 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN9 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN10 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN11 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN12 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN13 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN14 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN15 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN0 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN1 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN2 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN3 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN4 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN5 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN6 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN7 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN8 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN9 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN10 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN11 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN12 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN13 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN14 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN15 */
    6, /* TRIGGER_PASS_TR_SAR_IN */
    8, /* TRIGGER_PERI_TR_IO_OUTPUT0 */
    8, /* TRIGGER_PERI_TR_IO_OUTPUT1 */
    4, /* TRIGGER_PROFILE_TR_START */
    4, /* TRIGGER_PROFILE_TR_STOP */
    2, /* TRIGGER_TCPWM0_TR_IN0 */
    2, /* TRIGGER_TCPWM0_TR_IN1 */
    2, /* TRIGGER_TCPWM0_TR_IN2 */
    2, /* TRIGGER_TCPWM0_TR_IN3 */
    2, /* TRIGGER_TCPWM0_TR_IN4 */
    2, /* TRIGGER_TCPWM0_TR_IN5 */
    2, /* TRIGGER_TCPWM0_TR_IN6 */
    2, /* TRIGGER_TCPWM0_TR_IN7 */
    2, /* TRIGGER_TCPWM0_TR_IN8 */
    2, /* TRIGGER_TCPWM0_TR_IN9 */
    2, /* TRIGGER_TCPWM0_TR_IN10 */
    2, /* TRIGGER_TCPWM0_TR_IN11 */
    2, /* TRIGGER_TCPWM0_TR_IN12 */
    2, /* TRIGGER_TCPWM0_TR_IN13 */
    3, /* TRIGGER_TCPWM1_TR_IN0 */
    3, /* TRIGGER_TCPWM1_TR_IN1 */
    3, /* TRIGGER_TCPWM1_TR_IN2 */
    3, /* TRIGGER_TCPWM1_TR_IN3 */
    3, /* TRIGGER_TCPWM1_TR_IN4 */
    3, /* TRIGGER_TCPWM1_TR_IN5 */
    3, /* TRIGGER_TCPWM1_TR_IN6 */
    3, /* TRIGGER_TCPWM1_TR_IN7 */
    3, /* TRIGGER_TCPWM1_TR_IN8 */
    3, /* TRIGGER_TCPWM1_TR_IN9 */
    3, /* TRIGGER_TCPWM1_TR_IN10 */
    3, /* TRIGGER_TCPWM1_TR_IN11 */
    3, /* TRIGGER_TCPWM1_TR_IN12 */
    3, /* TRIGGER_TCPWM1_TR_IN13 */
    10, /* TRIGGER_TR_GROUP0_INPUT1 */
    10, /* TRIGGER_TR_GROUP0_INPUT2 */
    10, /* TRIGGER_TR_GROUP0_INPUT3 */
    10, /* TRIGGER_TR_GROUP0_INPUT4 */
    10, /* TRIGGER_TR_GROUP0_INPUT5 */
    10, /* TRIGGER_TR_GROUP0_INPUT6 */
    10, /* TRIGGER_TR_GROUP0_INPUT7 */
    10, /* TRIGGER_TR_GROUP0_INPUT8 */
    11, /* TRIGGER_TR_GROUP0_INPUT9 */
    11, /* TRIGGER_TR_GROUP0_INPUT10 */
    11, /* TRIGGER_TR_GROUP0_INPUT11 */
    11, /* TRIGGER_TR_GROUP0_INPUT12 */
    11, /* TRIGGER_TR_GROUP0_INPUT13 */
    11, /* TRIGGER_TR_GROUP0_INPUT14 */
    11, /* TRIGGER_TR_GROUP0_INPUT15 */
    11, /* TRIGGER_TR_GROUP0_INPUT16 */
    11, /* TRIGGER_TR_GROUP0_INPUT17 */
    11, /* TRIGGER_TR_GROUP0_INPUT18 */
    11, /* TRIGGER_TR_GROUP0_INPUT19 */
    11, /* TRIGGER_TR_GROUP0_INPUT20 */
    11, /* TRIGGER_TR_GROUP0_INPUT21 */
    11, /* TRIGGER_TR_GROUP0_INPUT22 */
    11, /* TRIGGER_TR_GROUP0_INPUT23 */
    11, /* TRIGGER_TR_GROUP0_INPUT24 */
    12, /* TRIGGER_TR_GROUP0_INPUT25 */
    12, /* TRIGGER_TR_GROUP0_INPUT26 */
    13, /* TRIGGER_TR_GROUP0_INPUT27 */
    13, /* TRIGGER_TR_GROUP0_INPUT28 */
    13, /* TRIGGER_TR_GROUP0_INPUT29 */
    13, /* TRIGGER_TR_GROUP0_INPUT30 */
    13, /* TRIGGER_TR_GROUP0_INPUT31 */
    13, /* TRIGGER_TR_GROUP0_INPUT32 */
    13, /* TRIGGER_TR_GROUP0_INPUT33 */
    13, /* TRIGGER_TR_GROUP0_INPUT34 */
    13, /* TRIGGER_TR_GROUP0_INPUT35 */
    13, /* TRIGGER_TR_GROUP0_INPUT36 */
    13, /* TRIGGER_TR_GROUP0_INPUT37 */
    13, /* TRIGGER_TR_GROUP0_INPUT38 */
    13, /* TRIGGER_TR_GROUP0_INPUT39 */
    13, /* TRIGGER_TR_GROUP0_INPUT40 */
    13, /* TRIGGER_TR_GROUP0_INPUT41 */
    13, /* TRIGGER_TR_GROUP0_INPUT42 */
    14, /* TRIGGER_TR_GROUP0_INPUT43 */
    14, /* TRIGGER_TR_GROUP0_INPUT44 */
    14, /* TRIGGER_TR_GROUP0_INPUT45 */
    14, /* TRIGGER_TR_GROUP0_INPUT46 */
    14, /* TRIGGER_TR_GROUP0_INPUT47 */
    14, /* TRIGGER_TR_GROUP0_INPUT48 */
    14, /* TRIGGER_TR_GROUP0_INPUT49 */
    14, /* TRIGGER_TR_GROUP0_INPUT50 */
    10, /* TRIGGER_TR_GROUP1_INPUT1 */
    10, /* TRIGGER_TR_GROUP1_INPUT2 */
    10, /* TRIGGER_TR_GROUP1_INPUT3 */
    10, /* TRIGGER_TR_GROUP1_INPUT4 */
    10, /* TRIGGER_TR_GROUP1_INPUT5 */
    10, /* TRIGGER_TR_GROUP1_INPUT6 */
    10, /* TRIGGER_TR_GROUP1_INPUT7 */
    10, /* TRIGGER_TR_GROUP1_INPUT8 */
    11, /* TRIGGER_TR_GROUP1_INPUT9 */
    11, /* TRIGGER_TR_GROUP1_INPUT10 */
    11, /* TRIGGER_TR_GROUP1_INPUT11 */
    11, /* TRIGGER_TR_GROUP1_INPUT12 */
    11, /* TRIGGER_TR_GROUP1_INPUT13 */
    11, /* TRIGGER_TR_GROUP1_INPUT14 */
    11, /* TRIGGER_TR_GROUP1_INPUT15 */
    11, /* TRIGGER_TR_GROUP1_INPUT16 */
    11, /* TRIGGER_TR_GROUP1_INPUT17 */
    11, /* TRIGGER_TR_GROUP1_INPUT18 */
    11, /* TRIGGER_TR_GROUP1_INPUT19 */
    11, /* TRIGGER_TR_GROUP1_INPUT20 */
    11, /* TRIGGER_TR_GROUP1_INPUT21 */
    11, /* TRIGGER_TR_GROUP1_INPUT22 */
    11, /* TRIGGER_TR_GROUP1_INPUT23 */
    11, /* TRIGGER_TR_GROUP1_INPUT24 */
    12, /* TRIGGER_TR_GROUP1_INPUT25 */
    12, /* TRIGGER_TR_GROUP1_INPUT26 */
    13, /* TRIGGER_TR_GROUP1_INPUT27 */
    13, /* TRIGGER_TR_GROUP1_INPUT28 */
    13, /* TRIGGER_TR_GROUP1_INPUT29 */
    13, /* TRIGGER_TR_GROUP1_INPUT30 */
    13, /* TRIGGER_TR_GROUP1_INPUT31 */
    13, /* TRIGGER_TR_GROUP1_INPUT32 */
    13, /* TRIGGER_TR_GROUP1_INPUT33 */
    13, /* TRIGGER_TR_GROUP1_INPUT34 */
    13, /* TRIGGER_TR_GROUP1_INPUT35 */
    13, /* TRIGGER_TR_GROUP1_INPUT36 */
    13, /* TRIGGER_TR_GROUP1_INPUT37 */
    13, /* TRIGGER_TR_GROUP1_INPUT38 */
    13, /* TRIGGER_TR_GROUP1_INPUT39 */
    13, /* TRIGGER_TR_GROUP1_INPUT40 */
    13, /* TRIGGER_TR_GROUP1_INPUT41 */
    13, /* TRIGGER_TR_GROUP1_INPUT42 */
    14, /* TRIGGER_TR_GROUP1_INPUT43 */
    14, /* TRIGGER_TR_GROUP1_INPUT44 */
    14, /* TRIGGER_TR_GROUP1_INPUT45 */
    14, /* TRIGGER_TR_GROUP1_INPUT46 */
    14, /* TRIGGER_TR_GROUP1_INPUT47 */
    14, /* TRIGGER_TR_GROUP1_INPUT48 */
    14, /* TRIGGER_TR_GROUP1_INPUT49 */
    14, /* TRIGGER_TR_GROUP1_INPUT50 */
    10, /* TRIGGER_TR_GROUP2_INPUT1 */
    10, /* TRIGGER_TR_GROUP2_INPUT2 */
    10, /* TRIGGER_TR_GROUP2_INPUT3 */
    10, /* TRIGGER_TR_GROUP2_INPUT4 */
    10, /* TRIGGER_TR_GROUP2_INPUT5 */
    10, /* TRIGGER_TR_GROUP2_INPUT6 */
    10, /* TRIGGER_TR_GROUP2_INPUT7 */
    10, /* TRIGGER_TR_GROUP2_INPUT8 */
    11, /* TRIGGER_TR_GROUP2_INPUT9 */
    11, /* TRIGGER_TR_GROUP2_INPUT10 */
    11, /* TRIGGER_TR_GROUP2_INPUT11 */
    11, /* TRIGGER_TR_GROUP2_INPUT12 */
    11, /* TRIGGER_TR_GROUP2_INPUT13 */
    11, /* TRIGGER_TR_GROUP2_INPUT14 */
    11, /* TRIGGER_TR_GROUP2_INPUT15 */
    11, /* TRIGGER_TR_GROUP2_INPUT16 */
    11, /* TRIGGER_TR_GROUP2_INPUT17 */
    11, /* TRIGGER_TR_GROUP2_INPUT18 */
    11, /* TRIGGER_TR_GROUP2_INPUT19 */
    11, /* TRIGGER_TR_GROUP2_INPUT20 */
    11, /* TRIGGER_TR_GROUP2_INPUT21 */
    11, /* TRIGGER_TR_GROUP2_INPUT22 */
    11, /* TRIGGER_TR_GROUP2_INPUT23 */
    11, /* TRIGGER_TR_GROUP2_INPUT24 */
    12, /* TRIGGER_TR_GROUP2_INPUT25 */
    12, /* TRIGGER_TR_GROUP2_INPUT26 */
    12, /* TRIGGER_TR_GROUP2_INPUT27 */
    12, /* TRIGGER_TR_GROUP2_INPUT28 */
    12, /* TRIGGER_TR_GROUP2_INPUT29 */
    12, /* TRIGGER_TR_GROUP2_INPUT30 */
    12, /* TRIGGER_TR_GROUP2_INPUT31 */
    12, /* TRIGGER_TR_GROUP2_INPUT32 */
    13, /* TRIGGER_TR_GROUP2_INPUT33 */
    13, /* TRIGGER_TR_GROUP2_INPUT34 */
    14, /* TRIGGER_TR_GROUP2_INPUT35 */
    14, /* TRIGGER_TR_GROUP2_INPUT36 */
    14, /* TRIGGER_TR_GROUP2_INPUT37 */
    14, /* TRIGGER_TR_GROUP2_INPUT38 */
    14, /* TRIGGER_TR_GROUP2_INPUT39 */
    14, /* TRIGGER_TR_GROUP2_INPUT40 */
    14, /* TRIGGER_TR_GROUP2_INPUT41 */
    14, /* TRIGGER_TR_GROUP2_INPUT42 */
    10, /* TRIGGER_TR_GROUP3_INPUT1 */
    10, /* TRIGGER_TR_GROUP3_INPUT2 */
    10, /* TRIGGER_TR_GROUP3_INPUT3 */
    10, /* TRIGGER_TR_GROUP3_INPUT4 */
    10, /* TRIGGER_TR_GROUP3_INPUT5 */
    10, /* TRIGGER_TR_GROUP3_INPUT6 */
    10, /* TRIGGER_TR_GROUP3_INPUT7 */
    10, /* TRIGGER_TR_GROUP3_INPUT8 */
    11, /* TRIGGER_TR_GROUP3_INPUT9 */
    11, /* TRIGGER_TR_GROUP3_INPUT10 */
    11, /* TRIGGER_TR_GROUP3_INPUT11 */
    11, /* TRIGGER_TR_GROUP3_INPUT12 */
    11, /* TRIGGER_TR_GROUP3_INPUT13 */
    11, /* TRIGGER_TR_GROUP3_INPUT14 */
    11, /* TRIGGER_TR_GROUP3_INPUT15 */
    11, /* TRIGGER_TR_GROUP3_INPUT16 */
    11, /* TRIGGER_TR_GROUP3_INPUT17 */
    11, /* TRIGGER_TR_GROUP3_INPUT18 */
    11, /* TRIGGER_TR_GROUP3_INPUT19 */
    11, /* TRIGGER_TR_GROUP3_INPUT20 */
    11, /* TRIGGER_TR_GROUP3_INPUT21 */
    11, /* TRIGGER_TR_GROUP3_INPUT22 */
    11, /* TRIGGER_TR_GROUP3_INPUT23 */
    11, /* TRIGGER_TR_GROUP3_INPUT24 */
    12, /* TRIGGER_TR_GROUP3_INPUT25 */
    12, /* TRIGGER_TR_GROUP3_INPUT26 */
    12, /* TRIGGER_TR_GROUP3_INPUT27 */
    12, /* TRIGGER_TR_GROUP3_INPUT28 */
    12, /* TRIGGER_TR_GROUP3_INPUT29 */
    12, /* TRIGGER_TR_GROUP3_INPUT30 */
    12, /* TRIGGER_TR_GROUP3_INPUT31 */
    12, /* TRIGGER_TR_GROUP3_INPUT32 */
    13, /* TRIGGER_TR_GROUP3_INPUT33 */
    13, /* TRIGGER_TR_GROUP3_INPUT34 */
    14, /* TRIGGER_TR_GROUP3_INPUT35 */
    14, /* TRIGGER_TR_GROUP3_INPUT36 */
    14, /* TRIGGER_TR_GROUP3_INPUT37 */
    14, /* TRIGGER_TR_GROUP3_INPUT38 */
    14, /* TRIGGER_TR_GROUP3_INPUT39 */
    14, /* TRIGGER_TR_GROUP3_INPUT40 */
    14, /* TRIGGER_TR_GROUP3_INPUT41 */
    14, /* TRIGGER_TR_GROUP3_INPUT42 */
    10, /* TRIGGER_TR_GROUP4_INPUT1 */
    10, /* TRIGGER_TR_GROUP4_INPUT2 */
    10, /* TRIGGER_TR_GROUP4_INPUT3 */
    10, /* TRIGGER_TR_GROUP4_INPUT4 */
    10, /* TRIGGER_TR_GROUP4_INPUT5 */
    10, /* TRIGGER_TR_GROUP4_INPUT6 */
    10, /* TRIGGER_TR_GROUP4_INPUT7 */
    10, /* TRIGGER_TR_GROUP4_INPUT8 */
    11, /* TRIGGER_TR_GROUP4_INPUT9 */
    11, /* TRIGGER_TR_GROUP4_INPUT10 */
    11, /* TRIGGER_TR_GROUP4_INPUT11 */
    11, /* TRIGGER_TR_GROUP4_INPUT12 */
    11, /* TRIGGER_TR_GROUP4_INPUT13 */
    11, /* TRIGGER_TR_GROUP4_INPUT14 */
    11, /* TRIGGER_TR_GROUP4_INPUT15 */
    11, /* TRIGGER_TR_GROUP4_INPUT16 */
    11, /* TRIGGER_TR_GROUP4_INPUT17 */
    11, /* TRIGGER_TR_GROUP4_INPUT18 */
    11, /* TRIGGER_TR_GROUP4_INPUT19 */
    11, /* TRIGGER_TR_GROUP4_INPUT20 */
    11, /* TRIGGER_TR_GROUP4_INPUT21 */
    11, /* TRIGGER_TR_GROUP4_INPUT22 */
    11, /* TRIGGER_TR_GROUP4_INPUT23 */
    11, /* TRIGGER_TR_GROUP4_INPUT24 */
    12, /* TRIGGER_TR_GROUP4_INPUT25 */
    12, /* TRIGGER_TR_GROUP4_INPUT26 */
    12, /* TRIGGER_TR_GROUP4_INPUT27 */
    12, /* TRIGGER_TR_GROUP4_INPUT28 */
    12, /* TRIGGER_TR_GROUP4_INPUT29 */
    12, /* TRIGGER_TR_GROUP4_INPUT30 */
    12, /* TRIGGER_TR_GROUP4_INPUT31 */
    12, /* TRIGGER_TR_GROUP4_INPUT32 */
    13, /* TRIGGER_TR_GROUP4_INPUT33 */
    13, /* TRIGGER_TR_GROUP4_INPUT34 */
    14, /* TRIGGER_TR_GROUP4_INPUT35 */
    14, /* TRIGGER_TR_GROUP4_INPUT36 */
    14, /* TRIGGER_TR_GROUP4_INPUT37 */
    14, /* TRIGGER_TR_GROUP4_INPUT38 */
    14, /* TRIGGER_TR_GROUP4_INPUT39 */
    14, /* TRIGGER_TR_GROUP4_INPUT40 */
    14, /* TRIGGER_TR_GROUP4_INPUT41 */
    14, /* TRIGGER_TR_GROUP4_INPUT42 */
    10, /* TRIGGER_TR_GROUP5_INPUT1 */
    10, /* TRIGGER_TR_GROUP5_INPUT2 */
    10, /* TRIGGER_TR_GROUP5_INPUT3 */
    10, /* TRIGGER_TR_GROUP5_INPUT4 */
    10, /* TRIGGER_TR_GROUP5_INPUT5 */
    10, /* TRIGGER_TR_GROUP5_INPUT6 */
    10, /* TRIGGER_TR_GROUP5_INPUT7 */
    10, /* TRIGGER_TR_GROUP5_INPUT8 */
    11, /* TRIGGER_TR_GROUP5_INPUT9 */
    11, /* TRIGGER_TR_GROUP5_INPUT10 */
    11, /* TRIGGER_TR_GROUP5_INPUT11 */
    11, /* TRIGGER_TR_GROUP5_INPUT12 */
    11, /* TRIGGER_TR_GROUP5_INPUT13 */
    11, /* TRIGGER_TR_GROUP5_INPUT14 */
    11, /* TRIGGER_TR_GROUP5_INPUT15 */
    11, /* TRIGGER_TR_GROUP5_INPUT16 */
    11, /* TRIGGER_TR_GROUP5_INPUT17 */
    11, /* TRIGGER_TR_GROUP5_INPUT18 */
    11, /* TRIGGER_TR_GROUP5_INPUT19 */
    11, /* TRIGGER_TR_GROUP5_INPUT20 */
    11, /* TRIGGER_TR_GROUP5_INPUT21 */
    11, /* TRIGGER_TR_GROUP5_INPUT22 */
    11, /* TRIGGER_TR_GROUP5_INPUT23 */
    11, /* TRIGGER_TR_GROUP5_INPUT24 */
    12, /* TRIGGER_TR_GROUP5_INPUT25 */
    12, /* TRIGGER_TR_GROUP5_INPUT26 */
    12, /* TRIGGER_TR_GROUP5_INPUT27 */
    12, /* TRIGGER_TR_GROUP5_INPUT28 */
    12, /* TRIGGER_TR_GROUP5_INPUT29 */
    12, /* TRIGGER_TR_GROUP5_INPUT30 */
    12, /* TRIGGER_TR_GROUP5_INPUT31 */
    12, /* TRIGGER_TR_GROUP5_INPUT32 */
    13, /* TRIGGER_TR_GROUP5_INPUT33 */
    13, /* TRIGGER_TR_GROUP5_INPUT34 */
    14, /* TRIGGER_TR_GROUP5_INPUT35 */
    14, /* TRIGGER_TR_GROUP5_INPUT36 */
    14, /* TRIGGER_TR_GROUP5_INPUT37 */
    14, /* TRIGGER_TR_GROUP5_INPUT38 */
    14, /* TRIGGER_TR_GROUP5_INPUT39 */
    14, /* TRIGGER_TR_GROUP5_INPUT40 */
    14, /* TRIGGER_TR_GROUP5_INPUT41 */
    14, /* TRIGGER_TR_GROUP5_INPUT42 */
    10, /* TRIGGER_TR_GROUP6_INPUT1 */
    10, /* TRIGGER_TR_GROUP6_INPUT2 */
    10, /* TRIGGER_TR_GROUP6_INPUT3 */
    10, /* TRIGGER_TR_GROUP6_INPUT4 */
    10, /* TRIGGER_TR_GROUP6_INPUT5 */
    10, /* TRIGGER_TR_GROUP6_INPUT6 */
    10, /* TRIGGER_TR_GROUP6_INPUT7 */
    10, /* TRIGGER_TR_GROUP6_INPUT8 */
    11, /* TRIGGER_TR_GROUP6_INPUT9 */
    11, /* TRIGGER_TR_GROUP6_INPUT10 */
    11, /* TRIGGER_TR_GROUP6_INPUT11 */
    11, /* TRIGGER_TR_GROUP6_INPUT12 */
    11, /* TRIGGER_TR_GROUP6_INPUT13 */
    11, /* TRIGGER_TR_GROUP6_INPUT14 */
    11, /* TRIGGER_TR_GROUP6_INPUT15 */
    11, /* TRIGGER_TR_GROUP6_INPUT16 */
    11, /* TRIGGER_TR_GROUP6_INPUT17 */
    11, /* TRIGGER_TR_GROUP6_INPUT18 */
    11, /* TRIGGER_TR_GROUP6_INPUT19 */
    11, /* TRIGGER_TR_GROUP6_INPUT20 */
    11, /* TRIGGER_TR_GROUP6_INPUT21 */
    11, /* TRIGGER_TR_GROUP6_INPUT22 */
    11, /* TRIGGER_TR_GROUP6_INPUT23 */
    11, /* TRIGGER_TR_GROUP6_INPUT24 */
    12, /* TRIGGER_TR_GROUP6_INPUT25 */
    12, /* TRIGGER_TR_GROUP6_INPUT26 */
    12, /* TRIGGER_TR_GROUP6_INPUT27 */
    12, /* TRIGGER_TR_GROUP6_INPUT28 */
    12, /* TRIGGER_TR_GROUP6_INPUT29 */
    12, /* TRIGGER_TR_GROUP6_INPUT30 */
    12, /* TRIGGER_TR_GROUP6_INPUT31 */
    12, /* TRIGGER_TR_GROUP6_INPUT32 */
    13, /* TRIGGER_TR_GROUP6_INPUT33 */
    13, /* TRIGGER_TR_GROUP6_INPUT34 */
    14, /* TRIGGER_TR_GROUP6_INPUT35 */
    14, /* TRIGGER_TR_GROUP6_INPUT36 */
    14, /* TRIGGER_TR_GROUP6_INPUT37 */
    14, /* TRIGGER_TR_GROUP6_INPUT38 */
    14, /* TRIGGER_TR_GROUP6_INPUT39 */
    14, /* TRIGGER_TR_GROUP6_INPUT40 */
    14, /* TRIGGER_TR_GROUP6_INPUT41 */
    14, /* TRIGGER_TR_GROUP6_INPUT42 */
    10, /* TRIGGER_TR_GROUP7_INPUT1 */
    10, /* TRIGGER_TR_GROUP7_INPUT2 */
    10, /* TRIGGER_TR_GROUP7_INPUT3 */
    10, /* TRIGGER_TR_GROUP7_INPUT4 */
    10, /* TRIGGER_TR_GROUP7_INPUT5 */
    10, /* TRIGGER_TR_GROUP7_INPUT6 */
    10, /* TRIGGER_TR_GROUP7_INPUT7 */
    10, /* TRIGGER_TR_GROUP7_INPUT8 */
    11, /* TRIGGER_TR_GROUP7_INPUT9 */
    11, /* TRIGGER_TR_GROUP7_INPUT10 */
    11, /* TRIGGER_TR_GROUP7_INPUT11 */
    11, /* TRIGGER_TR_GROUP7_INPUT12 */
    11, /* TRIGGER_TR_GROUP7_INPUT13 */
    11, /* TRIGGER_TR_GROUP7_INPUT14 */
    11, /* TRIGGER_TR_GROUP7_INPUT15 */
    11, /* TRIGGER_TR_GROUP7_INPUT16 */
    11, /* TRIGGER_TR_GROUP7_INPUT17 */
    11, /* TRIGGER_TR_GROUP7_INPUT18 */
    11, /* TRIGGER_TR_GROUP7_INPUT19 */
    11, /* TRIGGER_TR_GROUP7_INPUT20 */
    11, /* TRIGGER_TR_GROUP7_INPUT21 */
    11, /* TRIGGER_TR_GROUP7_INPUT22 */
    11, /* TRIGGER_TR_GROUP7_INPUT23 */
    11, /* TRIGGER_TR_GROUP7_INPUT24 */
    12, /* TRIGGER_TR_GROUP7_INPUT25 */
    12, /* TRIGGER_TR_GROUP7_INPUT26 */
    12, /* TRIGGER_TR_GROUP7_INPUT27 */
    12, /* TRIGGER_TR_GROUP7_INPUT28 */
    12, /* TRIGGER_TR_GROUP7_INPUT29 */
    12, /* TRIGGER_TR_GROUP7_INPUT30 */
    12, /* TRIGGER_TR_GROUP7_INPUT31 */
    12, /* TRIGGER_TR_GROUP7_INPUT32 */
    13, /* TRIGGER_TR_GROUP7_INPUT33 */
    13, /* TRIGGER_TR_GROUP7_INPUT34 */
    14, /* TRIGGER_TR_GROUP7_INPUT35 */
    14, /* TRIGGER_TR_GROUP7_INPUT36 */
    14, /* TRIGGER_TR_GROUP7_INPUT37 */
    14, /* TRIGGER_TR_GROUP7_INPUT38 */
    14, /* TRIGGER_TR_GROUP7_INPUT39 */
    14, /* TRIGGER_TR_GROUP7_INPUT40 */
    14, /* TRIGGER_TR_GROUP7_INPUT41 */
    14, /* TRIGGER_TR_GROUP7_INPUT42 */
    10, /* TRIGGER_TR_GROUP8_INPUT1 */
    10, /* TRIGGER_TR_GROUP8_INPUT2 */
    10, /* TRIGGER_TR_GROUP8_INPUT3 */
    10, /* TRIGGER_TR_GROUP8_INPUT4 */
    10, /* TRIGGER_TR_GROUP8_INPUT5 */
    10, /* TRIGGER_TR_GROUP8_INPUT6 */
    10, /* TRIGGER_TR_GROUP8_INPUT7 */
    10, /* TRIGGER_TR_GROUP8_INPUT8 */
    11, /* TRIGGER_TR_GROUP8_INPUT9 */
    11, /* TRIGGER_TR_GROUP8_INPUT10 */
    11, /* TRIGGER_TR_GROUP8_INPUT11 */
    11, /* TRIGGER_TR_GROUP8_INPUT12 */
    11, /* TRIGGER_TR_GROUP8_INPUT13 */
    11, /* TRIGGER_TR_GROUP8_INPUT14 */
    11, /* TRIGGER_TR_GROUP8_INPUT15 */
    11, /* TRIGGER_TR_GROUP8_INPUT16 */
    11, /* TRIGGER_TR_GROUP8_INPUT17 */
    11, /* TRIGGER_TR_GROUP8_INPUT18 */
    11, /* TRIGGER_TR_GROUP8_INPUT19 */
    11, /* TRIGGER_TR_GROUP8_INPUT20 */
    11, /* TRIGGER_TR_GROUP8_INPUT21 */
    11, /* TRIGGER_TR_GROUP8_INPUT22 */
    11, /* TRIGGER_TR_GROUP8_INPUT23 */
    11, /* TRIGGER_TR_GROUP8_INPUT24 */
    12, /* TRIGGER_TR_GROUP8_INPUT25 */
    12, /* TRIGGER_TR_GROUP8_INPUT26 */
    12, /* TRIGGER_TR_GROUP8_INPUT27 */
    12, /* TRIGGER_TR_GROUP8_INPUT28 */
    12, /* TRIGGER_TR_GROUP8_INPUT29 */
    12, /* TRIGGER_TR_GROUP8_INPUT30 */
    12, /* TRIGGER_TR_GROUP8_INPUT31 */
    12, /* TRIGGER_TR_GROUP8_INPUT32 */
    13, /* TRIGGER_TR_GROUP8_INPUT33 */
    13, /* TRIGGER_TR_GROUP8_INPUT34 */
    14, /* TRIGGER_TR_GROUP8_INPUT35 */
    14, /* TRIGGER_TR_GROUP8_INPUT36 */
    14, /* TRIGGER_TR_GROUP8_INPUT37 */
    14, /* TRIGGER_TR_GROUP8_INPUT38 */
    14, /* TRIGGER_TR_GROUP8_INPUT39 */
    14, /* TRIGGER_TR_GROUP8_INPUT40 */
    14, /* TRIGGER_TR_GROUP8_INPUT41 */
    14, /* TRIGGER_TR_GROUP8_INPUT42 */
    10, /* TRIGGER_UDB_TR_DW_ACK0 */
    10, /* TRIGGER_UDB_TR_DW_ACK1 */
    10, /* TRIGGER_UDB_TR_DW_ACK2 */
    10, /* TRIGGER_UDB_TR_DW_ACK3 */
    10, /* TRIGGER_UDB_TR_DW_ACK4 */
    10, /* TRIGGER_UDB_TR_DW_ACK5 */
    10, /* TRIGGER_UDB_TR_DW_ACK6 */
    10, /* TRIGGER_UDB_TR_DW_ACK7 */
    7, /* TRIGGER_UDB_TR_IN0 */
    7, /* TRIGGER_UDB_TR_IN1 */
    9, /* TRIGGER_USB_DMA_BURSTEND0 */
    9, /* TRIGGER_USB_DMA_BURSTEND1 */
    9, /* TRIGGER_USB_DMA_BURSTEND2 */
    9, /* TRIGGER_USB_DMA_BURSTEND3 */
    9, /* TRIGGER_USB_DMA_BURSTEND4 */
    9, /* TRIGGER_USB_DMA_BURSTEND5 */
    9, /* TRIGGER_USB_DMA_BURSTEND6 */
    9, /* TRIGGER_USB_DMA_BURSTEND7 */
};

const uint8_t cyhal_mux_dest_index[479] =
{
    0, /* TRIGGER_CPUSS_CTI_TR_IN0 */
    1, /* TRIGGER_CPUSS_CTI_TR_IN1 */
    0, /* TRIGGER_CPUSS_DW0_TR_IN0 */
    1, /* TRIGGER_CPUSS_DW0_TR_IN1 */
    2, /* TRIGGER_CPUSS_DW0_TR_IN2 */
    3, /* TRIGGER_CPUSS_DW0_TR_IN3 */
    4, /* TRIGGER_CPUSS_DW0_TR_IN4 */
    5, /* TRIGGER_CPUSS_DW0_TR_IN5 */
    6, /* TRIGGER_CPUSS_DW0_TR_IN6 */
    7, /* TRIGGER_CPUSS_DW0_TR_IN7 */
    8, /* TRIGGER_CPUSS_DW0_TR_IN8 */
    9, /* TRIGGER_CPUSS_DW0_TR_IN9 */
    10, /* TRIGGER_CPUSS_DW0_TR_IN10 */
    11, /* TRIGGER_CPUSS_DW0_TR_IN11 */
    12, /* TRIGGER_CPUSS_DW0_TR_IN12 */
    13, /* TRIGGER_CPUSS_DW0_TR_IN13 */
    14, /* TRIGGER_CPUSS_DW0_TR_IN14 */
    15, /* TRIGGER_CPUSS_DW0_TR_IN15 */
    0, /* TRIGGER_CPUSS_DW1_TR_IN0 */
    1, /* TRIGGER_CPUSS_DW1_TR_IN1 */
    2, /* TRIGGER_CPUSS_DW1_TR_IN2 */
    3, /* TRIGGER_CPUSS_DW1_TR_IN3 */
    4, /* TRIGGER_CPUSS_DW1_TR_IN4 */
    5, /* TRIGGER_CPUSS_DW1_TR_IN5 */
    6, /* TRIGGER_CPUSS_DW1_TR_IN6 */
    7, /* TRIGGER_CPUSS_DW1_TR_IN7 */
    8, /* TRIGGER_CPUSS_DW1_TR_IN8 */
    9, /* TRIGGER_CPUSS_DW1_TR_IN9 */
    10, /* TRIGGER_CPUSS_DW1_TR_IN10 */
    11, /* TRIGGER_CPUSS_DW1_TR_IN11 */
    12, /* TRIGGER_CPUSS_DW1_TR_IN12 */
    13, /* TRIGGER_CPUSS_DW1_TR_IN13 */
    14, /* TRIGGER_CPUSS_DW1_TR_IN14 */
    15, /* TRIGGER_CPUSS_DW1_TR_IN15 */
    0, /* TRIGGER_PASS_TR_SAR_IN */
    0, /* TRIGGER_PERI_TR_IO_OUTPUT0 */
    1, /* TRIGGER_PERI_TR_IO_OUTPUT1 */
    0, /* TRIGGER_PROFILE_TR_START */
    1, /* TRIGGER_PROFILE_TR_STOP */
    0, /* TRIGGER_TCPWM0_TR_IN0 */
    1, /* TRIGGER_TCPWM0_TR_IN1 */
    2, /* TRIGGER_TCPWM0_TR_IN2 */
    3, /* TRIGGER_TCPWM0_TR_IN3 */
    4, /* TRIGGER_TCPWM0_TR_IN4 */
    5, /* TRIGGER_TCPWM0_TR_IN5 */
    6, /* TRIGGER_TCPWM0_TR_IN6 */
    7, /* TRIGGER_TCPWM0_TR_IN7 */
    8, /* TRIGGER_TCPWM0_TR_IN8 */
    9, /* TRIGGER_TCPWM0_TR_IN9 */
    10, /* TRIGGER_TCPWM0_TR_IN10 */
    11, /* TRIGGER_TCPWM0_TR_IN11 */
    12, /* TRIGGER_TCPWM0_TR_IN12 */
    13, /* TRIGGER_TCPWM0_TR_IN13 */
    0, /* TRIGGER_TCPWM1_TR_IN0 */
    1, /* TRIGGER_TCPWM1_TR_IN1 */
    2, /* TRIGGER_TCPWM1_TR_IN2 */
    3, /* TRIGGER_TCPWM1_TR_IN3 */
    4, /* TRIGGER_TCPWM1_TR_IN4 */
    5, /* TRIGGER_TCPWM1_TR_IN5 */
    6, /* TRIGGER_TCPWM1_TR_IN6 */
    7, /* TRIGGER_TCPWM1_TR_IN7 */
    8, /* TRIGGER_TCPWM1_TR_IN8 */
    9, /* TRIGGER_TCPWM1_TR_IN9 */
    10, /* TRIGGER_TCPWM1_TR_IN10 */
    11, /* TRIGGER_TCPWM1_TR_IN11 */
    12, /* TRIGGER_TCPWM1_TR_IN12 */
    13, /* TRIGGER_TCPWM1_TR_IN13 */
    0, /* TRIGGER_TR_GROUP0_INPUT1 */
    1, /* TRIGGER_TR_GROUP0_INPUT2 */
    2, /* TRIGGER_TR_GROUP0_INPUT3 */
    3, /* TRIGGER_TR_GROUP0_INPUT4 */
    4, /* TRIGGER_TR_GROUP0_INPUT5 */
    5, /* TRIGGER_TR_GROUP0_INPUT6 */
    6, /* TRIGGER_TR_GROUP0_INPUT7 */
    7, /* TRIGGER_TR_GROUP0_INPUT8 */
    0, /* TRIGGER_TR_GROUP0_INPUT9 */
    1, /* TRIGGER_TR_GROUP0_INPUT10 */
    2, /* TRIGGER_TR_GROUP0_INPUT11 */
    3, /* TRIGGER_TR_GROUP0_INPUT12 */
    4, /* TRIGGER_TR_GROUP0_INPUT13 */
    5, /* TRIGGER_TR_GROUP0_INPUT14 */
    6, /* TRIGGER_TR_GROUP0_INPUT15 */
    7, /* TRIGGER_TR_GROUP0_INPUT16 */
    8, /* TRIGGER_TR_GROUP0_INPUT17 */
    9, /* TRIGGER_TR_GROUP0_INPUT18 */
    10, /* TRIGGER_TR_GROUP0_INPUT19 */
    11, /* TRIGGER_TR_GROUP0_INPUT20 */
    12, /* TRIGGER_TR_GROUP0_INPUT21 */
    13, /* TRIGGER_TR_GROUP0_INPUT22 */
    14, /* TRIGGER_TR_GROUP0_INPUT23 */
    15, /* TRIGGER_TR_GROUP0_INPUT24 */
    8, /* TRIGGER_TR_GROUP0_INPUT25 */
    9, /* TRIGGER_TR_GROUP0_INPUT26 */
    0, /* TRIGGER_TR_GROUP0_INPUT27 */
    1, /* TRIGGER_TR_GROUP0_INPUT28 */
    2, /* TRIGGER_TR_GROUP0_INPUT29 */
    3, /* TRIGGER_TR_GROUP0_INPUT30 */
    4, /* TRIGGER_TR_GROUP0_INPUT31 */
    5, /* TRIGGER_TR_GROUP0_INPUT32 */
    6, /* TRIGGER_TR_GROUP0_INPUT33 */
    7, /* TRIGGER_TR_GROUP0_INPUT34 */
    8, /* TRIGGER_TR_GROUP0_INPUT35 */
    9, /* TRIGGER_TR_GROUP0_INPUT36 */
    10, /* TRIGGER_TR_GROUP0_INPUT37 */
    11, /* TRIGGER_TR_GROUP0_INPUT38 */
    12, /* TRIGGER_TR_GROUP0_INPUT39 */
    13, /* TRIGGER_TR_GROUP0_INPUT40 */
    14, /* TRIGGER_TR_GROUP0_INPUT41 */
    15, /* TRIGGER_TR_GROUP0_INPUT42 */
    0, /* TRIGGER_TR_GROUP0_INPUT43 */
    1, /* TRIGGER_TR_GROUP0_INPUT44 */
    2, /* TRIGGER_TR_GROUP0_INPUT45 */
    3, /* TRIGGER_TR_GROUP0_INPUT46 */
    4, /* TRIGGER_TR_GROUP0_INPUT47 */
    5, /* TRIGGER_TR_GROUP0_INPUT48 */
    6, /* TRIGGER_TR_GROUP0_INPUT49 */
    7, /* TRIGGER_TR_GROUP0_INPUT50 */
    0, /* TRIGGER_TR_GROUP1_INPUT1 */
    1, /* TRIGGER_TR_GROUP1_INPUT2 */
    2, /* TRIGGER_TR_GROUP1_INPUT3 */
    3, /* TRIGGER_TR_GROUP1_INPUT4 */
    4, /* TRIGGER_TR_GROUP1_INPUT5 */
    5, /* TRIGGER_TR_GROUP1_INPUT6 */
    6, /* TRIGGER_TR_GROUP1_INPUT7 */
    7, /* TRIGGER_TR_GROUP1_INPUT8 */
    0, /* TRIGGER_TR_GROUP1_INPUT9 */
    1, /* TRIGGER_TR_GROUP1_INPUT10 */
    2, /* TRIGGER_TR_GROUP1_INPUT11 */
    3, /* TRIGGER_TR_GROUP1_INPUT12 */
    4, /* TRIGGER_TR_GROUP1_INPUT13 */
    5, /* TRIGGER_TR_GROUP1_INPUT14 */
    6, /* TRIGGER_TR_GROUP1_INPUT15 */
    7, /* TRIGGER_TR_GROUP1_INPUT16 */
    8, /* TRIGGER_TR_GROUP1_INPUT17 */
    9, /* TRIGGER_TR_GROUP1_INPUT18 */
    10, /* TRIGGER_TR_GROUP1_INPUT19 */
    11, /* TRIGGER_TR_GROUP1_INPUT20 */
    12, /* TRIGGER_TR_GROUP1_INPUT21 */
    13, /* TRIGGER_TR_GROUP1_INPUT22 */
    14, /* TRIGGER_TR_GROUP1_INPUT23 */
    15, /* TRIGGER_TR_GROUP1_INPUT24 */
    8, /* TRIGGER_TR_GROUP1_INPUT25 */
    9, /* TRIGGER_TR_GROUP1_INPUT26 */
    0, /* TRIGGER_TR_GROUP1_INPUT27 */
    1, /* TRIGGER_TR_GROUP1_INPUT28 */
    2, /* TRIGGER_TR_GROUP1_INPUT29 */
    3, /* TRIGGER_TR_GROUP1_INPUT30 */
    4, /* TRIGGER_TR_GROUP1_INPUT31 */
    5, /* TRIGGER_TR_GROUP1_INPUT32 */
    6, /* TRIGGER_TR_GROUP1_INPUT33 */
    7, /* TRIGGER_TR_GROUP1_INPUT34 */
    8, /* TRIGGER_TR_GROUP1_INPUT35 */
    9, /* TRIGGER_TR_GROUP1_INPUT36 */
    10, /* TRIGGER_TR_GROUP1_INPUT37 */
    11, /* TRIGGER_TR_GROUP1_INPUT38 */
    12, /* TRIGGER_TR_GROUP1_INPUT39 */
    13, /* TRIGGER_TR_GROUP1_INPUT40 */
    14, /* TRIGGER_TR_GROUP1_INPUT41 */
    15, /* TRIGGER_TR_GROUP1_INPUT42 */
    0, /* TRIGGER_TR_GROUP1_INPUT43 */
    1, /* TRIGGER_TR_GROUP1_INPUT44 */
    2, /* TRIGGER_TR_GROUP1_INPUT45 */
    3, /* TRIGGER_TR_GROUP1_INPUT46 */
    4, /* TRIGGER_TR_GROUP1_INPUT47 */
    5, /* TRIGGER_TR_GROUP1_INPUT48 */
    6, /* TRIGGER_TR_GROUP1_INPUT49 */
    7, /* TRIGGER_TR_GROUP1_INPUT50 */
    0, /* TRIGGER_TR_GROUP2_INPUT1 */
    1, /* TRIGGER_TR_GROUP2_INPUT2 */
    2, /* TRIGGER_TR_GROUP2_INPUT3 */
    3, /* TRIGGER_TR_GROUP2_INPUT4 */
    4, /* TRIGGER_TR_GROUP2_INPUT5 */
    5, /* TRIGGER_TR_GROUP2_INPUT6 */
    6, /* TRIGGER_TR_GROUP2_INPUT7 */
    7, /* TRIGGER_TR_GROUP2_INPUT8 */
    0, /* TRIGGER_TR_GROUP2_INPUT9 */
    1, /* TRIGGER_TR_GROUP2_INPUT10 */
    2, /* TRIGGER_TR_GROUP2_INPUT11 */
    3, /* TRIGGER_TR_GROUP2_INPUT12 */
    4, /* TRIGGER_TR_GROUP2_INPUT13 */
    5, /* TRIGGER_TR_GROUP2_INPUT14 */
    6, /* TRIGGER_TR_GROUP2_INPUT15 */
    7, /* TRIGGER_TR_GROUP2_INPUT16 */
    8, /* TRIGGER_TR_GROUP2_INPUT17 */
    9, /* TRIGGER_TR_GROUP2_INPUT18 */
    10, /* TRIGGER_TR_GROUP2_INPUT19 */
    11, /* TRIGGER_TR_GROUP2_INPUT20 */
    12, /* TRIGGER_TR_GROUP2_INPUT21 */
    13, /* TRIGGER_TR_GROUP2_INPUT22 */
    14, /* TRIGGER_TR_GROUP2_INPUT23 */
    15, /* TRIGGER_TR_GROUP2_INPUT24 */
    0, /* TRIGGER_TR_GROUP2_INPUT25 */
    1, /* TRIGGER_TR_GROUP2_INPUT26 */
    2, /* TRIGGER_TR_GROUP2_INPUT27 */
    3, /* TRIGGER_TR_GROUP2_INPUT28 */
    4, /* TRIGGER_TR_GROUP2_INPUT29 */
    5, /* TRIGGER_TR_GROUP2_INPUT30 */
    6, /* TRIGGER_TR_GROUP2_INPUT31 */
    7, /* TRIGGER_TR_GROUP2_INPUT32 */
    16, /* TRIGGER_TR_GROUP2_INPUT33 */
    17, /* TRIGGER_TR_GROUP2_INPUT34 */
    8, /* TRIGGER_TR_GROUP2_INPUT35 */
    9, /* TRIGGER_TR_GROUP2_INPUT36 */
    10, /* TRIGGER_TR_GROUP2_INPUT37 */
    11, /* TRIGGER_TR_GROUP2_INPUT38 */
    12, /* TRIGGER_TR_GROUP2_INPUT39 */
    13, /* TRIGGER_TR_GROUP2_INPUT40 */
    14, /* TRIGGER_TR_GROUP2_INPUT41 */
    15, /* TRIGGER_TR_GROUP2_INPUT42 */
    0, /* TRIGGER_TR_GROUP3_INPUT1 */
    1, /* TRIGGER_TR_GROUP3_INPUT2 */
    2, /* TRIGGER_TR_GROUP3_INPUT3 */
    3, /* TRIGGER_TR_GROUP3_INPUT4 */
    4, /* TRIGGER_TR_GROUP3_INPUT5 */
    5, /* TRIGGER_TR_GROUP3_INPUT6 */
    6, /* TRIGGER_TR_GROUP3_INPUT7 */
    7, /* TRIGGER_TR_GROUP3_INPUT8 */
    0, /* TRIGGER_TR_GROUP3_INPUT9 */
    1, /* TRIGGER_TR_GROUP3_INPUT10 */
    2, /* TRIGGER_TR_GROUP3_INPUT11 */
    3, /* TRIGGER_TR_GROUP3_INPUT12 */
    4, /* TRIGGER_TR_GROUP3_INPUT13 */
    5, /* TRIGGER_TR_GROUP3_INPUT14 */
    6, /* TRIGGER_TR_GROUP3_INPUT15 */
    7, /* TRIGGER_TR_GROUP3_INPUT16 */
    8, /* TRIGGER_TR_GROUP3_INPUT17 */
    9, /* TRIGGER_TR_GROUP3_INPUT18 */
    10, /* TRIGGER_TR_GROUP3_INPUT19 */
    11, /* TRIGGER_TR_GROUP3_INPUT20 */
    12, /* TRIGGER_TR_GROUP3_INPUT21 */
    13, /* TRIGGER_TR_GROUP3_INPUT22 */
    14, /* TRIGGER_TR_GROUP3_INPUT23 */
    15, /* TRIGGER_TR_GROUP3_INPUT24 */
    0, /* TRIGGER_TR_GROUP3_INPUT25 */
    1, /* TRIGGER_TR_GROUP3_INPUT26 */
    2, /* TRIGGER_TR_GROUP3_INPUT27 */
    3, /* TRIGGER_TR_GROUP3_INPUT28 */
    4, /* TRIGGER_TR_GROUP3_INPUT29 */
    5, /* TRIGGER_TR_GROUP3_INPUT30 */
    6, /* TRIGGER_TR_GROUP3_INPUT31 */
    7, /* TRIGGER_TR_GROUP3_INPUT32 */
    16, /* TRIGGER_TR_GROUP3_INPUT33 */
    17, /* TRIGGER_TR_GROUP3_INPUT34 */
    8, /* TRIGGER_TR_GROUP3_INPUT35 */
    9, /* TRIGGER_TR_GROUP3_INPUT36 */
    10, /* TRIGGER_TR_GROUP3_INPUT37 */
    11, /* TRIGGER_TR_GROUP3_INPUT38 */
    12, /* TRIGGER_TR_GROUP3_INPUT39 */
    13, /* TRIGGER_TR_GROUP3_INPUT40 */
    14, /* TRIGGER_TR_GROUP3_INPUT41 */
    15, /* TRIGGER_TR_GROUP3_INPUT42 */
    0, /* TRIGGER_TR_GROUP4_INPUT1 */
    1, /* TRIGGER_TR_GROUP4_INPUT2 */
    2, /* TRIGGER_TR_GROUP4_INPUT3 */
    3, /* TRIGGER_TR_GROUP4_INPUT4 */
    4, /* TRIGGER_TR_GROUP4_INPUT5 */
    5, /* TRIGGER_TR_GROUP4_INPUT6 */
    6, /* TRIGGER_TR_GROUP4_INPUT7 */
    7, /* TRIGGER_TR_GROUP4_INPUT8 */
    0, /* TRIGGER_TR_GROUP4_INPUT9 */
    1, /* TRIGGER_TR_GROUP4_INPUT10 */
    2, /* TRIGGER_TR_GROUP4_INPUT11 */
    3, /* TRIGGER_TR_GROUP4_INPUT12 */
    4, /* TRIGGER_TR_GROUP4_INPUT13 */
    5, /* TRIGGER_TR_GROUP4_INPUT14 */
    6, /* TRIGGER_TR_GROUP4_INPUT15 */
    7, /* TRIGGER_TR_GROUP4_INPUT16 */
    8, /* TRIGGER_TR_GROUP4_INPUT17 */
    9, /* TRIGGER_TR_GROUP4_INPUT18 */
    10, /* TRIGGER_TR_GROUP4_INPUT19 */
    11, /* TRIGGER_TR_GROUP4_INPUT20 */
    12, /* TRIGGER_TR_GROUP4_INPUT21 */
    13, /* TRIGGER_TR_GROUP4_INPUT22 */
    14, /* TRIGGER_TR_GROUP4_INPUT23 */
    15, /* TRIGGER_TR_GROUP4_INPUT24 */
    0, /* TRIGGER_TR_GROUP4_INPUT25 */
    1, /* TRIGGER_TR_GROUP4_INPUT26 */
    2, /* TRIGGER_TR_GROUP4_INPUT27 */
    3, /* TRIGGER_TR_GROUP4_INPUT28 */
    4, /* TRIGGER_TR_GROUP4_INPUT29 */
    5, /* TRIGGER_TR_GROUP4_INPUT30 */
    6, /* TRIGGER_TR_GROUP4_INPUT31 */
    7, /* TRIGGER_TR_GROUP4_INPUT32 */
    16, /* TRIGGER_TR_GROUP4_INPUT33 */
    17, /* TRIGGER_TR_GROUP4_INPUT34 */
    8, /* TRIGGER_TR_GROUP4_INPUT35 */
    9, /* TRIGGER_TR_GROUP4_INPUT36 */
    10, /* TRIGGER_TR_GROUP4_INPUT37 */
    11, /* TRIGGER_TR_GROUP4_INPUT38 */
    12, /* TRIGGER_TR_GROUP4_INPUT39 */
    13, /* TRIGGER_TR_GROUP4_INPUT40 */
    14, /* TRIGGER_TR_GROUP4_INPUT41 */
    15, /* TRIGGER_TR_GROUP4_INPUT42 */
    0, /* TRIGGER_TR_GROUP5_INPUT1 */
    1, /* TRIGGER_TR_GROUP5_INPUT2 */
    2, /* TRIGGER_TR_GROUP5_INPUT3 */
    3, /* TRIGGER_TR_GROUP5_INPUT4 */
    4, /* TRIGGER_TR_GROUP5_INPUT5 */
    5, /* TRIGGER_TR_GROUP5_INPUT6 */
    6, /* TRIGGER_TR_GROUP5_INPUT7 */
    7, /* TRIGGER_TR_GROUP5_INPUT8 */
    0, /* TRIGGER_TR_GROUP5_INPUT9 */
    1, /* TRIGGER_TR_GROUP5_INPUT10 */
    2, /* TRIGGER_TR_GROUP5_INPUT11 */
    3, /* TRIGGER_TR_GROUP5_INPUT12 */
    4, /* TRIGGER_TR_GROUP5_INPUT13 */
    5, /* TRIGGER_TR_GROUP5_INPUT14 */
    6, /* TRIGGER_TR_GROUP5_INPUT15 */
    7, /* TRIGGER_TR_GROUP5_INPUT16 */
    8, /* TRIGGER_TR_GROUP5_INPUT17 */
    9, /* TRIGGER_TR_GROUP5_INPUT18 */
    10, /* TRIGGER_TR_GROUP5_INPUT19 */
    11, /* TRIGGER_TR_GROUP5_INPUT20 */
    12, /* TRIGGER_TR_GROUP5_INPUT21 */
    13, /* TRIGGER_TR_GROUP5_INPUT22 */
    14, /* TRIGGER_TR_GROUP5_INPUT23 */
    15, /* TRIGGER_TR_GROUP5_INPUT24 */
    0, /* TRIGGER_TR_GROUP5_INPUT25 */
    1, /* TRIGGER_TR_GROUP5_INPUT26 */
    2, /* TRIGGER_TR_GROUP5_INPUT27 */
    3, /* TRIGGER_TR_GROUP5_INPUT28 */
    4, /* TRIGGER_TR_GROUP5_INPUT29 */
    5, /* TRIGGER_TR_GROUP5_INPUT30 */
    6, /* TRIGGER_TR_GROUP5_INPUT31 */
    7, /* TRIGGER_TR_GROUP5_INPUT32 */
    16, /* TRIGGER_TR_GROUP5_INPUT33 */
    17, /* TRIGGER_TR_GROUP5_INPUT34 */
    8, /* TRIGGER_TR_GROUP5_INPUT35 */
    9, /* TRIGGER_TR_GROUP5_INPUT36 */
    10, /* TRIGGER_TR_GROUP5_INPUT37 */
    11, /* TRIGGER_TR_GROUP5_INPUT38 */
    12, /* TRIGGER_TR_GROUP5_INPUT39 */
    13, /* TRIGGER_TR_GROUP5_INPUT40 */
    14, /* TRIGGER_TR_GROUP5_INPUT41 */
    15, /* TRIGGER_TR_GROUP5_INPUT42 */
    0, /* TRIGGER_TR_GROUP6_INPUT1 */
    1, /* TRIGGER_TR_GROUP6_INPUT2 */
    2, /* TRIGGER_TR_GROUP6_INPUT3 */
    3, /* TRIGGER_TR_GROUP6_INPUT4 */
    4, /* TRIGGER_TR_GROUP6_INPUT5 */
    5, /* TRIGGER_TR_GROUP6_INPUT6 */
    6, /* TRIGGER_TR_GROUP6_INPUT7 */
    7, /* TRIGGER_TR_GROUP6_INPUT8 */
    0, /* TRIGGER_TR_GROUP6_INPUT9 */
    1, /* TRIGGER_TR_GROUP6_INPUT10 */
    2, /* TRIGGER_TR_GROUP6_INPUT11 */
    3, /* TRIGGER_TR_GROUP6_INPUT12 */
    4, /* TRIGGER_TR_GROUP6_INPUT13 */
    5, /* TRIGGER_TR_GROUP6_INPUT14 */
    6, /* TRIGGER_TR_GROUP6_INPUT15 */
    7, /* TRIGGER_TR_GROUP6_INPUT16 */
    8, /* TRIGGER_TR_GROUP6_INPUT17 */
    9, /* TRIGGER_TR_GROUP6_INPUT18 */
    10, /* TRIGGER_TR_GROUP6_INPUT19 */
    11, /* TRIGGER_TR_GROUP6_INPUT20 */
    12, /* TRIGGER_TR_GROUP6_INPUT21 */
    13, /* TRIGGER_TR_GROUP6_INPUT22 */
    14, /* TRIGGER_TR_GROUP6_INPUT23 */
    15, /* TRIGGER_TR_GROUP6_INPUT24 */
    0, /* TRIGGER_TR_GROUP6_INPUT25 */
    1, /* TRIGGER_TR_GROUP6_INPUT26 */
    2, /* TRIGGER_TR_GROUP6_INPUT27 */
    3, /* TRIGGER_TR_GROUP6_INPUT28 */
    4, /* TRIGGER_TR_GROUP6_INPUT29 */
    5, /* TRIGGER_TR_GROUP6_INPUT30 */
    6, /* TRIGGER_TR_GROUP6_INPUT31 */
    7, /* TRIGGER_TR_GROUP6_INPUT32 */
    16, /* TRIGGER_TR_GROUP6_INPUT33 */
    17, /* TRIGGER_TR_GROUP6_INPUT34 */
    8, /* TRIGGER_TR_GROUP6_INPUT35 */
    9, /* TRIGGER_TR_GROUP6_INPUT36 */
    10, /* TRIGGER_TR_GROUP6_INPUT37 */
    11, /* TRIGGER_TR_GROUP6_INPUT38 */
    12, /* TRIGGER_TR_GROUP6_INPUT39 */
    13, /* TRIGGER_TR_GROUP6_INPUT40 */
    14, /* TRIGGER_TR_GROUP6_INPUT41 */
    15, /* TRIGGER_TR_GROUP6_INPUT42 */
    0, /* TRIGGER_TR_GROUP7_INPUT1 */
    1, /* TRIGGER_TR_GROUP7_INPUT2 */
    2, /* TRIGGER_TR_GROUP7_INPUT3 */
    3, /* TRIGGER_TR_GROUP7_INPUT4 */
    4, /* TRIGGER_TR_GROUP7_INPUT5 */
    5, /* TRIGGER_TR_GROUP7_INPUT6 */
    6, /* TRIGGER_TR_GROUP7_INPUT7 */
    7, /* TRIGGER_TR_GROUP7_INPUT8 */
    0, /* TRIGGER_TR_GROUP7_INPUT9 */
    1, /* TRIGGER_TR_GROUP7_INPUT10 */
    2, /* TRIGGER_TR_GROUP7_INPUT11 */
    3, /* TRIGGER_TR_GROUP7_INPUT12 */
    4, /* TRIGGER_TR_GROUP7_INPUT13 */
    5, /* TRIGGER_TR_GROUP7_INPUT14 */
    6, /* TRIGGER_TR_GROUP7_INPUT15 */
    7, /* TRIGGER_TR_GROUP7_INPUT16 */
    8, /* TRIGGER_TR_GROUP7_INPUT17 */
    9, /* TRIGGER_TR_GROUP7_INPUT18 */
    10, /* TRIGGER_TR_GROUP7_INPUT19 */
    11, /* TRIGGER_TR_GROUP7_INPUT20 */
    12, /* TRIGGER_TR_GROUP7_INPUT21 */
    13, /* TRIGGER_TR_GROUP7_INPUT22 */
    14, /* TRIGGER_TR_GROUP7_INPUT23 */
    15, /* TRIGGER_TR_GROUP7_INPUT24 */
    0, /* TRIGGER_TR_GROUP7_INPUT25 */
    1, /* TRIGGER_TR_GROUP7_INPUT26 */
    2, /* TRIGGER_TR_GROUP7_INPUT27 */
    3, /* TRIGGER_TR_GROUP7_INPUT28 */
    4, /* TRIGGER_TR_GROUP7_INPUT29 */
    5, /* TRIGGER_TR_GROUP7_INPUT30 */
    6, /* TRIGGER_TR_GROUP7_INPUT31 */
    7, /* TRIGGER_TR_GROUP7_INPUT32 */
    16, /* TRIGGER_TR_GROUP7_INPUT33 */
    17, /* TRIGGER_TR_GROUP7_INPUT34 */
    8, /* TRIGGER_TR_GROUP7_INPUT35 */
    9, /* TRIGGER_TR_GROUP7_INPUT36 */
    10, /* TRIGGER_TR_GROUP7_INPUT37 */
    11, /* TRIGGER_TR_GROUP7_INPUT38 */
    12, /* TRIGGER_TR_GROUP7_INPUT39 */
    13, /* TRIGGER_TR_GROUP7_INPUT40 */
    14, /* TRIGGER_TR_GROUP7_INPUT41 */
    15, /* TRIGGER_TR_GROUP7_INPUT42 */
    0, /* TRIGGER_TR_GROUP8_INPUT1 */
    1, /* TRIGGER_TR_GROUP8_INPUT2 */
    2, /* TRIGGER_TR_GROUP8_INPUT3 */
    3, /* TRIGGER_TR_GROUP8_INPUT4 */
    4, /* TRIGGER_TR_GROUP8_INPUT5 */
    5, /* TRIGGER_TR_GROUP8_INPUT6 */
    6, /* TRIGGER_TR_GROUP8_INPUT7 */
    7, /* TRIGGER_TR_GROUP8_INPUT8 */
    0, /* TRIGGER_TR_GROUP8_INPUT9 */
    1, /* TRIGGER_TR_GROUP8_INPUT10 */
    2, /* TRIGGER_TR_GROUP8_INPUT11 */
    3, /* TRIGGER_TR_GROUP8_INPUT12 */
    4, /* TRIGGER_TR_GROUP8_INPUT13 */
    5, /* TRIGGER_TR_GROUP8_INPUT14 */
    6, /* TRIGGER_TR_GROUP8_INPUT15 */
    7, /* TRIGGER_TR_GROUP8_INPUT16 */
    8, /* TRIGGER_TR_GROUP8_INPUT17 */
    9, /* TRIGGER_TR_GROUP8_INPUT18 */
    10, /* TRIGGER_TR_GROUP8_INPUT19 */
    11, /* TRIGGER_TR_GROUP8_INPUT20 */
    12, /* TRIGGER_TR_GROUP8_INPUT21 */
    13, /* TRIGGER_TR_GROUP8_INPUT22 */
    14, /* TRIGGER_TR_GROUP8_INPUT23 */
    15, /* TRIGGER_TR_GROUP8_INPUT24 */
    0, /* TRIGGER_TR_GROUP8_INPUT25 */
    1, /* TRIGGER_TR_GROUP8_INPUT26 */
    2, /* TRIGGER_TR_GROUP8_INPUT27 */
    3, /* TRIGGER_TR_GROUP8_INPUT28 */
    4, /* TRIGGER_TR_GROUP8_INPUT29 */
    5, /* TRIGGER_TR_GROUP8_INPUT30 */
    6, /* TRIGGER_TR_GROUP8_INPUT31 */
    7, /* TRIGGER_TR_GROUP8_INPUT32 */
    16, /* TRIGGER_TR_GROUP8_INPUT33 */
    17, /* TRIGGER_TR_GROUP8_INPUT34 */
    8, /* TRIGGER_TR_GROUP8_INPUT35 */
    9, /* TRIGGER_TR_GROUP8_INPUT36 */
    10, /* TRIGGER_TR_GROUP8_INPUT37 */
    11, /* TRIGGER_TR_GROUP8_INPUT38 */
    12, /* TRIGGER_TR_GROUP8_INPUT39 */
    13, /* TRIGGER_TR_GROUP8_INPUT40 */
    14, /* TRIGGER_TR_GROUP8_INPUT41 */
    15, /* TRIGGER_TR_GROUP8_INPUT42 */
    0, /* TRIGGER_UDB_TR_DW_ACK0 */
    1, /* TRIGGER_UDB_TR_DW_ACK1 */
    2, /* TRIGGER_UDB_TR_DW_ACK2 */
    3, /* TRIGGER_UDB_TR_DW_ACK3 */
    4, /* TRIGGER_UDB_TR_DW_ACK4 */
    5, /* TRIGGER_UDB_TR_DW_ACK5 */
    6, /* TRIGGER_UDB_TR_DW_ACK6 */
    7, /* TRIGGER_UDB_TR_DW_ACK7 */
    0, /* TRIGGER_UDB_TR_IN0 */
    1, /* TRIGGER_UDB_TR_IN1 */
    0, /* TRIGGER_USB_DMA_BURSTEND0 */
    1, /* TRIGGER_USB_DMA_BURSTEND1 */
    2, /* TRIGGER_USB_DMA_BURSTEND2 */
    3, /* TRIGGER_USB_DMA_BURSTEND3 */
    4, /* TRIGGER_USB_DMA_BURSTEND4 */
    5, /* TRIGGER_USB_DMA_BURSTEND5 */
    6, /* TRIGGER_USB_DMA_BURSTEND6 */
    7, /* TRIGGER_USB_DMA_BURSTEND7 */
};
#endif /* CY_DEVICE_PSOC6ABLE2 */
