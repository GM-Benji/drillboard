/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    tim.h
  * @brief   This file contains all the function prototypes for
  *          the tim.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern TIM_HandleTypeDef htim2;

extern TIM_HandleTypeDef htim3;

/* USER CODE BEGIN Private defines */
  /**
 * @brief Sets the PWM duty cycle for a specified channel.
 *
 * This function configures the PWM signal by setting the duty cycle for a given channel.
 * The duty cycle determines the power delivered to the motor.
 *
 * @param pulse The PWM duty cycle, ranging from 0 (0%) to 10000 (100%).
 * @param CH The PWM channel to configure. Possible values:
 *           - TIM_CHANNEL_1: Controls motor 1
 *           - TIM_CHANNEL_2: Controls motor 2
 *           - TIM_CHANNEL_3: Controls motor 3
 *
 * @note Ensure that the timer and PWM module are properly initialized before using this function.
 */
  void setPWM(int32_t pulse,uint32_t CH);

/* USER CODE END Private defines */

void MX_TIM2_Init(void);
void MX_TIM3_Init(void);

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */

