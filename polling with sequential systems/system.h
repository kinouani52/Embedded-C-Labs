/*
 * system.h
 *
 *  Created on: 16 may. 2020
 *      Author: tonyb
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <stdint.h>

/********************************************/
/****  Set DCO as source clock at 8MHz   ****/
/****  MCLK & SMCLK 8MHz                 ****/
/****  ACLK REF0 32.768 kHz              ****/
/****                                    ****/
/********************************************/

void Init_clock();

/********************************************/
/****  Converts a 16-bits unsigned int   ****/
/****  to a 4-digits null-terminated     ****/
/****  string, 0s left padding           ****/
/****                                    ****/
/********************************************/
void mini_itoa_4_null_terminated (uint16_t dato, uint8_t *target);

#endif /* SYSTEM_H_ */
