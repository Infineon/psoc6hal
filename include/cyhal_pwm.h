/***************************************************************************//**
* \file cyhal_pwm.h
*
* \brief
* Provides a high level interface for interacting with the Cypress PWM.
* This interface abstracts out the chip specific details. If any chip specific
* functionality is necessary, or performance is critical the low level functions
* can be used directly.
*
********************************************************************************
* \copyright
* Copyright 2018-2019 Cypress Semiconductor Corporation
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

/**
* \addtogroup group_hal_pwm PWM (Pulse Width Modulator)
* \ingroup group_hal
* \{
* High level interface for interacting with the Cypress PWM.
* 
* This block is able to create arbitrary square waves based off of an input clock.
* It can also be used to control the brightness of an LED by manipulating the duty cycle.
*/

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "cy_result.h"
#include "cyhal_hw_types.h"
#include "cyhal_modules.h"

#if defined(__cplusplus)
extern "C" {
#endif

/** Initialize the PWM out peripheral and configure the pin
 * This is similar to the \ref cyhal_pwm_init_adv() but uses defaults for some of the
 * more advanced setup options.
 *
 * @param[out] obj  The PWM object to initialize
 * @param[in]  pin  The PWM pin to initialize
 * @param[in]  clk  An optional, pre-allocated clock to use, if NULL a new clock will be allocated
 * @return The status of the init request
 */
#define cyhal_pwm_init(obj, pin, clk) (cyhal_pwm_init_adv(obj, pin, NC, CYHAL_PWM_LEFT_ALIGN, true, 0u, false, clk))

/** Bad argument */
#define CYHAL_PWM_RSLT_BAD_ARGUMENT (CY_RSLT_CREATE(CY_RSLT_TYPE_ERROR, CYHAL_RSLT_MODULE_PWM, 0))
/** Failed to initialize PWM clock */
#define CYHAL_PWM_RSLT_FAILED_CLOCK_INIT (CY_RSLT_CREATE(CY_RSLT_TYPE_ERROR, CYHAL_RSLT_MODULE_PWM, 1))
/** Failed to initialize PWM */
#define CYHAL_PWM_RSLT_FAILED_INIT (CY_RSLT_CREATE(CY_RSLT_TYPE_ERROR, CYHAL_RSLT_MODULE_PWM, 2))

/** PWM interrupt triggers */
typedef enum {
    CYHAL_PWM_IRQ_NONE            =  0,             //**< No interrupts */
    CYHAL_PWM_IRQ_TERMINAL_COUNT  =  1 << 0,        //**< Interrupt on terinal count match */
    CYHAL_PWM_IRQ_CAPTURE_COMPARE =  1 << 1,        //**< Interrupt on capture/compare match */
    CYHAL_PWM_IRQ_ALL             = (1 << 2) - 1,   //**< All interrupts */
} cyhal_pwm_event_t;

/** PWM alignment */
typedef enum {
    CYHAL_PWM_LEFT_ALIGN       = 0, /**< Count up */
    CYHAL_PWM_RIGHT_ALIGN      = 1, /**< Count down */
    CYHAL_PWM_CENTER_ALIGN     = 2, /**< Count from center/asymmetric */
} cyhal_pwm_alignment_t;

/** Handler for PWM interrupts */
typedef void(*cyhal_pwm_event_callback_t)(void *callback_arg, cyhal_pwm_event_t event);

/** Initialize the PWM out peripheral and configure the pin.
 * This is similar to the \ref cyhal_pwm_init() but provides additional setup options.
 *
 * @param[out] obj              The PWM object to initialize.
 * @param[in]  pin              The PWM pin to initialize.
 * @param[in]  compl_pin        A optional second, inverted, output pin. If supplied,
 * this must be connected to the same PWM instance as pin. Use 'NC' for No Connect.
 * @param[in]  pwm_alignment    PWM alignment: left, right, or center.
 * @param[in]  continuous       PWM run type: continuous (true) or one shot (false).
 * @param[in]  dead_time_us     The number of micro-seconds for dead time. This is 
 * only meaningful if both pin and compl_pin are provided.
 * @param[in]  invert      An option for the user to invert the PWM output
 * @param[in]  clk              An optional, pre-allocated clock to use, if NULL a 
 * new clock will be allocated.
 * @return The status of the init request
 * 
 * @note In some cases, it is possible to use a pin designated for non-inverting output as an inverting output and vice versa. Whether this is possible is dependent on the HAL implementation and operating mode. See the implementation specific documentation for details.
 */
cy_rslt_t cyhal_pwm_init_adv(cyhal_pwm_t *obj, cyhal_gpio_t pin, cyhal_gpio_t compl_pin, cyhal_pwm_alignment_t pwm_alignment, bool continuous, uint32_t dead_time_us, bool invert, const cyhal_clock_divider_t *clk);

/** Deinitialize the PWM object
 *
 * @param[in,out] obj The PWM object
 */
void cyhal_pwm_free(cyhal_pwm_t *obj);

/** Set the number of microseconds for the PWM period & pulse width
 *
 * @param[in] obj            The PWM object
 * @param[in] period_us      The period in microseconds
 * @param[in] pulse_width_us The pulse width in microseconds
 * @return The status of the period request
 */
cy_rslt_t cyhal_pwm_set_period(cyhal_pwm_t *obj, uint32_t period_us, uint32_t pulse_width_us);

/** Set the PWM pulsewidth specified in microseconds, keeping the period the same.
 *
 * @param[in] obj          The PWM object
 * @param[in] duty_cycle   The percentage of time the output is high
 * @param[in] frequencyhal_hz The frequency of the PWM
 * @return The status of the pulsewidth request
 */
cy_rslt_t cyhal_pwm_set_duty_cycle(cyhal_pwm_t *obj, float duty_cycle, uint32_t frequencyhal_hz);

/** Starts the PWM with the provided period and pulsewidth
 *
 * @param[in] obj           The PWM object
 * @return The status of the start request
 */
cy_rslt_t cyhal_pwm_start(cyhal_pwm_t *obj);

/** Stops the PWM from running
 *
 * @param[in] obj The PWM object
 * @return The status of the stop request
 */
cy_rslt_t cyhal_pwm_stop(cyhal_pwm_t *obj);

/** The PWM interrupt handler registration
 *
 * @param[in] obj          The PWM object
 * @param[in] callback     The callback handler which will be invoked when the event occurs
 * @param[in] callback_arg Generic argument that will be provided to the callback when called
 */
void cyhal_pwm_register_callback(cyhal_pwm_t *obj, cyhal_pwm_event_callback_t callback, void *callback_arg);

/** Configure PWM event enablement.
 *
 * @param[in] obj           The PWM object
 * @param[in] event         The PWM event type
 * @param[in] intrPriority  The priority for NVIC interrupt events
 * @param[in] enable        True to turn on events, False to turn off
 */
void cyhal_pwm_enable_event(cyhal_pwm_t *obj, cyhal_pwm_event_t event, uint8_t intrPriority, bool enable);

#if defined(__cplusplus)
}
#endif

#ifdef CYHAL_PWM_IMPL_HEADER
#include CYHAL_PWM_IMPL_HEADER
#endif /* CYHAL_PWM_IMPL_HEADER */

/** \} group_hal_pwm */
