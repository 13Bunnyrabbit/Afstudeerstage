/*
 * logic.h
 *
 *  Created on: Apr 18, 2023
 *      Author: rico
 */

/* Includes ----------------------------------------------------------*/
#include "main.h"
#include "data.h"
#include <string.h>

#ifndef INC_LOGIC_H_
#define INC_LOGIC_H_

/**
 * @brief calculate change positions people function
 *
 * This function is used to check wheither people have moved within the measured area
 * When moved to inside the room or to the outside, number of people is updated and calls data sent function
 *
 * @param[in] array of detected people in states
 */
void determine_changes_state(uint8_t*);

#endif /* INC_LOGIC_H_ */
