/*
 * digital.h
 *
 *  Created on: 9 juin 2020
 *      Author: kinou
 */

#ifndef DIGITAL_H_
#define DIGITAL_H_

void init_button1(void);
void init_button2(void);
void init_int_but1(void);
void init_int_but2(void);
uint8_t Check_FLAG_X ();
uint8_t Check_FLAG_F ();

#define button1   (P1IN & BIT1)!=BIT1
#define button2   (P2IN & BIT1)!=BIT1

uint8_t FLAG_L;
 uint8_t FLAG_R;

#endif /* DIGITAL_H_ */
