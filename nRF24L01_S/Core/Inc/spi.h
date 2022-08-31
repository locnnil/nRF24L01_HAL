/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    spi.h
  * @brief   This file contains all the function prototypes for
  *          the spi.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#ifndef __SPI_H__
#define __SPI_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern SPI_HandleTypeDef hspi1;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_SPI1_Init(void);

/* USER CODE BEGIN Prototypes */
uint8_t TM_SPI_Send(SPI_HandleTypeDef *spiHandle, uint8_t data);

void TM_SPI_SendMulti(SPI_HandleTypeDef *spiHandle,uint8_t* dataOut, uint8_t* dataIn, uint8_t count);

void TM_SPI_WriteMulti(SPI_HandleTypeDef *spiHandle, uint8_t* data, uint8_t count);

void TM_SPI_ReadMulti(SPI_HandleTypeDef *spiHandle, uint8_t* data, uint8_t* mask, uint8_t count);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __SPI_H__ */

