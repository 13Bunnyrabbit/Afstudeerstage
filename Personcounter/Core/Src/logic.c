/*
 * logic.c
 *
 *  Created on: Apr 18, 2023
 *      Author: rico
 */

#include "logic.h"

uint8_t old_states[3] = {0,0,0};
uint32_t n_people = 0;

void determine_changes_state(uint8_t* detected_states)
{
	if(detected_states[0] > old_states[0] && old_states[1] > detected_states[1])
	{
		sent_data(++n_people);
	}
	if(detected_states[0] < old_states[0] && old_states[1] < detected_states[1])
	{
		sent_data(--n_people);
	}
	memcpy(old_states, detected_states, NSTATES);
	return;
}

