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
#define button1   !(P1IN & BIT1)
#define button2   !(P2IN & BIT1)



#endif /* DIGITAL_H_ */
