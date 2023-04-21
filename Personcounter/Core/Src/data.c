/*
 * data.c
 *
 *  Created on: Apr 18, 2023
 *      Author: rico
 */

/* Includes ----------------------------------------------------------*/
#include "data.h"

/* Global variables --------------------------------------------------*/
char at_device_id[] = "AT+ID";
char at_device_address[] = "AT+ID=DevAddr";
char at_device_eui[] = "AT+ID=DevEui";
char at_server_eui[] = "AT+ID=AppEui";
char at_join[] = "AT+JOIN";
char at_send[] = "AT+CMSG=";



void sent_data(uint32_t n_people)
{
	char data[20];
	sprintf(data, "%s%luu", at_send, n_people);
	HAL_UART_Transmit(&huart4, (uint8_t*)data, sizeof(data), HAL_MAX_DELAY);

	return;
}

