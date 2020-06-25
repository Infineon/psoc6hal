/***************************************************************************//**
* \file cyhal_utils.c
*
* \brief
* Provides utility functions for working with the PSoC 6 HAL implementation.
*
********************************************************************************
* \copyright
* Copyright 2018-2020 Cypress Semiconductor Corporation
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

#include <stdlib.h>
#include <stdarg.h>
#include "cyhal_utils.h"
#include "cyhal_hwmgr.h"
#include "cyhal_interconnect.h"
#include "cyhal_gpio.h"
#include "cyhal_clock.h"

#if defined(__cplusplus)
extern "C"
{
#endif

const cyhal_resource_pin_mapping_t *_cyhal_utils_get_resource(cyhal_gpio_t pin, const cyhal_resource_pin_mapping_t* mappings, size_t count)
{
    if (NC != pin)
    {
        for (uint32_t i = 0; i < count; i++)
        {
            if (pin == mappings[i].pin)
            {
                return &mappings[i];
            }
        }
    }
    return NULL;
}

const cyhal_resource_pin_mapping_t* _cyhal_utils_try_alloc(cyhal_gpio_t pin, const cyhal_resource_pin_mapping_t *pin_map, size_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        if (pin == pin_map[i].pin)
        {
            if (CY_RSLT_SUCCESS == cyhal_hwmgr_reserve(pin_map[i].inst))
            {
                return &pin_map[i];
            }
        }
    }
    return NULL;
}


cy_rslt_t _cyhal_utils_reserve_and_connect(cyhal_gpio_t pin, const cyhal_resource_pin_mapping_t *mapping)
{
    cyhal_resource_inst_t pinRsc = _cyhal_utils_get_gpio_resource(pin);
    cy_rslt_t status = cyhal_hwmgr_reserve(&pinRsc);
    if (CY_RSLT_SUCCESS == status)
    {
        status = cyhal_connect_pin(mapping);
        if (CY_RSLT_SUCCESS != status)
        {
            cyhal_hwmgr_free(&pinRsc);
        }
    }
    return status;
}

void _cyhal_utils_disconnect_and_free(cyhal_gpio_t pin)
{
    cy_rslt_t rslt = cyhal_disconnect_pin(pin);
    CY_UNUSED_PARAMETER(rslt); /* CY_ASSERT only processes in DEBUG, ignores for others */
    CY_ASSERT(CY_RSLT_SUCCESS == rslt);
    cyhal_resource_inst_t rsc = _cyhal_utils_get_gpio_resource(pin);
    cyhal_hwmgr_free(&rsc);
}

void _cyhal_utils_release_if_used(cyhal_gpio_t *pin)
{
    if (CYHAL_NC_PIN_VALUE != *pin)
    {
        _cyhal_utils_disconnect_and_free(*pin);
        *pin = CYHAL_NC_PIN_VALUE;
    }
}

bool _cyhal_utils_resources_equal(const cyhal_resource_inst_t *resource1, const cyhal_resource_inst_t *resource2)
{
    return (resource1->type == resource2->type) &&
        (resource1->block_num == resource2->block_num) &&
        (resource1->channel_num == resource2->channel_num);
}

bool _cyhal_utils_resources_equal_all(uint32_t count, ...)
{
    CY_ASSERT(count >= 2);

    va_list args;
    bool equal = true;
    const cyhal_resource_inst_t *curr;

    va_start(args, count);
    const cyhal_resource_inst_t *first = va_arg(args, const cyhal_resource_inst_t *);
    for (uint32_t i = 1; i < count; i++)
    {
        curr = va_arg(args, const cyhal_resource_inst_t *);
        equal &= _cyhal_utils_resources_equal(first, curr);
    }

    va_end(args);
    return equal;
}

uint32_t _cyhal_utils_convert_flags(const uint32_t map[], uint32_t count, uint32_t source_flags)
{
    uint32_t result_flags = 0;
    // Index 0 is the default value if nothing else is set.
    for (uint8_t i = 1; i < count; i++)
    {
        if (source_flags & (1 << (i - 1)))
            result_flags |= map[i];
    }
    if (0 == result_flags)
        result_flags = map[0];
    return result_flags;
}

cy_en_syspm_callback_mode_t _cyhal_utils_convert_haltopdl_pm_mode(cyhal_syspm_callback_mode_t mode)
{
    switch (mode)
    {
        case CYHAL_SYSPM_CHECK_READY:
            return CY_SYSPM_CHECK_READY;
        case CYHAL_SYSPM_CHECK_FAIL:
            return CY_SYSPM_CHECK_FAIL;
        case CYHAL_SYSPM_BEFORE_TRANSITION:
            return CY_SYSPM_BEFORE_TRANSITION;
        case CYHAL_SYSPM_AFTER_TRANSITION:
            return CY_SYSPM_AFTER_TRANSITION;
        default:
            /* Should not get here */
            CY_ASSERT(false);
            return CY_SYSPM_CHECK_READY;
    }
}

cyhal_syspm_callback_mode_t _cyhal_utils_convert_pdltohal_pm_mode(cy_en_syspm_callback_mode_t mode)
{
    switch (mode)
    {
        case CY_SYSPM_CHECK_READY:
            return CYHAL_SYSPM_CHECK_READY;
        case CY_SYSPM_CHECK_FAIL:
            return CYHAL_SYSPM_CHECK_FAIL;
        case CY_SYSPM_BEFORE_TRANSITION:
            return CYHAL_SYSPM_BEFORE_TRANSITION;
        case CY_SYSPM_AFTER_TRANSITION:
            return CYHAL_SYSPM_AFTER_TRANSITION;
        default:
            /* Should not get here */
            CY_ASSERT(false);
            return CYHAL_SYSPM_CHECK_READY;
    }
}

void _cyhal_utils_get_peri_clock_details(const cyhal_clock_t *clock, cy_en_divider_types_t *div_type, uint32_t *div_num)
{
    #if defined(COMPONENT_PSOC6HAL)
    if (_cyhal_utils_is_new_clock_format(clock))
    {
    #endif
        CY_ASSERT(clock->reserved);
        *div_num = clock->channel;
        *div_type = (cy_en_divider_types_t)clock->block;
    #if defined(COMPONENT_PSOC6HAL)
    }
    else
    {
        *div_num = clock->div_num;
        *div_type = (cy_en_divider_types_t)clock->div_type;
    }
    #endif
}

int32_t _cyhal_utils_calculate_tolerance(cyhal_clock_tolerance_unit_t type, uint32_t desired_hz, uint32_t actual_hz)
{
    switch (type)
    {
        case CYHAL_TOLERANCE_HZ:
            return (int32_t)(desired_hz - actual_hz);
        case CYHAL_TOLERANCE_PPM:
            return (int32_t)(((int64_t)(desired_hz - actual_hz)) * 1000000) / ((int32_t)desired_hz);
        case CYHAL_TOLERANCE_PERCENT:
            return (int32_t)((((int64_t)desired_hz - actual_hz) * 100) / desired_hz);
        default:
            CY_ASSERT(false);
            return 0;
    }
}

#if defined(COMPONENT_PSOC6HAL)
cy_rslt_t _cyhal_utils_allocate_clock(cyhal_clock_t *clock, const cyhal_resource_inst_t *clocked_item, cyhal_clock_block_t div, bool accept_larger)
{
    CY_ASSERT(NULL != clocked_item);

    cyhal_resource_inst_t clock_rsc;
    switch (clocked_item->type)
    {
        /* High frequency clock assignments are device specific. */
#if defined(CY_DEVICE_PSOC6ABLE2)
        case CYHAL_RSC_I2S:
        case CYHAL_RSC_PDM:
            clock_rsc = CYHAL_CLOCK_HF[1];
            break;
        case CYHAL_RSC_SMIF:
            clock_rsc = CYHAL_CLOCK_HF[2];
            break;
        case CYHAL_RSC_USB:
            clock_rsc = CYHAL_CLOCK_HF[3];
            break;
#elif defined(CY_DEVICE_PSOC6A2M)
        case CYHAL_RSC_I2S:
        case CYHAL_RSC_PDM:
            clock_rsc = CYHAL_CLOCK_HF[1];
            break;
        case CYHAL_RSC_SMIF:
            clock_rsc = CYHAL_CLOCK_HF[2];
            break;
        case CYHAL_RSC_USB:
            clock_rsc = CYHAL_CLOCK_HF[3];
            break;
        case CYHAL_RSC_SDHC:
            clock_rsc = (clocked_item->block_num == 0)
                ? CYHAL_CLOCK_HF[4]
                : CYHAL_CLOCK_HF[2];
            break;
#elif defined(CY_DEVICE_PSOC6A512K)
        case CYHAL_RSC_SMIF:
            clock_rsc = CYHAL_CLOCK_HF[2];
            break;
        case CYHAL_RSC_USB:
            clock_rsc = CYHAL_CLOCK_HF[3];
            break;
        case CYHAL_RSC_SDHC:
            clock_rsc = CYHAL_CLOCK_HF[4];
            break;
#elif defined(CY_DEVICE_PSOC6A256K)
        case CYHAL_RSC_SMIF:
            clock_rsc = CYHAL_CLOCK_HF[2];
            break;
        case CYHAL_RSC_USB:
            clock_rsc = CYHAL_CLOCK_HF[3];
            break;
#endif
        case CYHAL_RSC_CLOCK:
            CY_ASSERT(false); /* Use APIs provided by the clock driver */
            return CYHAL_CLOCK_RSLT_ERR_NOT_SUPPORTED;
        default:
        {
            const cyhal_clock_block_t PERI_DIVIDERS[] =
            {
                CYHAL_CLOCK_BLOCK_PERIPHERAL_8BIT,
                CYHAL_CLOCK_BLOCK_PERIPHERAL_16BIT,
                CYHAL_CLOCK_BLOCK_PERIPHERAL_16_5BIT,
                CYHAL_CLOCK_BLOCK_PERIPHERAL_24_5BIT
            };

            cy_rslt_t result = CYHAL_HWMGR_RSLT_ERR_NONE_FREE;
            bool found_minimum = false;
            for(size_t i = 0; i < sizeof(PERI_DIVIDERS) / sizeof(PERI_DIVIDERS[0]); ++i)
            {
                if(PERI_DIVIDERS[i] == div)
                {
                    found_minimum = true;
                }

                if(found_minimum)
                {
                    result = cyhal_clock_allocate(clock, PERI_DIVIDERS[i]);
                    if(CY_RSLT_SUCCESS == result || !accept_larger)
                    {
                        break;
                    }
                }
            }
            return result;
        }
    }

    cy_rslt_t result = cyhal_clock_get(clock, &clock_rsc);
    if(CY_RSLT_SUCCESS == result)
    {
        result = cyhal_clock_init(clock);
    }
    return result;
}

cy_rslt_t _cyhal_utils_find_hf_clk_div(uint32_t hz_src, uint32_t desired_hz, const cyhal_clock_tolerance_t *tolerance,
                        bool only_below_desired, uint8_t *div)
{
    const uint8_t HFCLK_DIVIDERS[] = { 1, 2, 4, 8};
    cy_rslt_t retval = CYHAL_CLOCK_RSLT_ERR_FREQ;
    uint32_t tolerance_check_value = (NULL != tolerance) ? tolerance->value : 0xFFFFFFFF;
    cyhal_clock_tolerance_unit_t tolerance_type = (NULL != tolerance) ? tolerance->type : CYHAL_TOLERANCE_HZ;

    for(uint8_t i = 0; i < sizeof(HFCLK_DIVIDERS) / sizeof(HFCLK_DIVIDERS[0]); ++i)
    {
        const uint8_t divider = HFCLK_DIVIDERS[i];
        uint32_t actual_freq = hz_src / divider;
        if ((actual_freq > desired_hz) && only_below_desired)
            continue;
        uint32_t achieved_tolerance = abs(_cyhal_utils_calculate_tolerance(tolerance_type, desired_hz, actual_freq));
        if (achieved_tolerance < tolerance_check_value)
        {
            *div = divider;
            retval = CY_RSLT_SUCCESS;
            if ((NULL != tolerance) || (achieved_tolerance == 0))
                break;
            tolerance_check_value = achieved_tolerance;
        }
        else if (only_below_desired)
        {
            /* We are going from smallest divider, to highest. If we've not achieved better tollerance in
            *   this iteration, we will no achieve it in futher for sure. */
            break;
        }
    }
    return retval;
}

cy_rslt_t _cyhal_utils_set_clock_frequency(cyhal_clock_t* clock, uint32_t hz, const cyhal_clock_tolerance_t *tolerance)
{
    uint32_t source_hz = Cy_SysClk_ClkPathGetFrequency(clock->channel);
    if(clock->block == CYHAL_CLOCK_BLOCK_HF)
    {
        uint8_t divider;
        if (CY_RSLT_SUCCESS == _cyhal_utils_find_hf_clk_div(source_hz, hz, tolerance, false, &divider))
        {
            return cyhal_clock_set_divider(clock, divider);
        }
        return CYHAL_CLOCK_RSLT_ERR_FREQ;
    }
    else
    {
        // Defer to the clock driver
        return cyhal_clock_set_frequency(clock, hz, tolerance);
    }
}
#endif

#if defined(__cplusplus)
}
#endif
