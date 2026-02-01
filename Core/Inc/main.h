/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CMI1_Pin GPIO_PIN_2
#define CMI1_GPIO_Port GPIOE
#define CMI2_Pin GPIO_PIN_3
#define CMI2_GPIO_Port GPIOE
#define MO2_S3_Pin GPIO_PIN_0
#define MO2_S3_GPIO_Port GPIOA
#define MO2_S2_Pin GPIO_PIN_1
#define MO2_S2_GPIO_Port GPIOA
#define MO1_S3_Pin GPIO_PIN_4
#define MO1_S3_GPIO_Port GPIOA
#define MO1_S2_Pin GPIO_PIN_5
#define MO1_S2_GPIO_Port GPIOA
#define MO1_S1_Pin GPIO_PIN_6
#define MO1_S1_GPIO_Port GPIOA
#define MO1_S0_Pin GPIO_PIN_7
#define MO1_S0_GPIO_Port GPIOA
#define MO2_S1_Pin GPIO_PIN_4
#define MO2_S1_GPIO_Port GPIOC
#define MO2_S0_Pin GPIO_PIN_5
#define MO2_S0_GPIO_Port GPIOC
#define MI2_S0_Pin GPIO_PIN_2
#define MI2_S0_GPIO_Port GPIOD
#define MI2_S1_Pin GPIO_PIN_3
#define MI2_S1_GPIO_Port GPIOD
#define MI2_S2_Pin GPIO_PIN_4
#define MI2_S2_GPIO_Port GPIOD
#define MI2_S3_Pin GPIO_PIN_5
#define MI2_S3_GPIO_Port GPIOD
#define MI1_S0_Pin GPIO_PIN_6
#define MI1_S0_GPIO_Port GPIOD
#define MI1_S1_Pin GPIO_PIN_7
#define MI1_S1_GPIO_Port GPIOD
#define MI1_S2_Pin GPIO_PIN_3
#define MI1_S2_GPIO_Port GPIOB
#define MI1_S3_Pin GPIO_PIN_5
#define MI1_S3_GPIO_Port GPIOB
#define RMO1_Pin GPIO_PIN_0
#define RMO1_GPIO_Port GPIOE
#define RMO2_Pin GPIO_PIN_1
#define RMO2_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
