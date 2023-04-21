/*
 * data.h
 *
 *  Created on: Apr 18, 2023
 *      Author: rico
 */

#ifndef INC_DATA_H_
#define INC_DATA_H_

/* Includes ----------------------------------------------------------*/
#include "main.h"
#include <string.h>
#include <stdio.h>

/* Handles ----------------------------------------------------------*/
extern UART_HandleTypeDef LORA_UART_HANDLE;

/**
 * @brief Sent function
 *
 * This function is used to sent data to the central LoRaWAN gateway
 *
 * @param[in] data to sent
 */
void sent_data(uint32_t);

#endif /* INC_DATA_H_ */
