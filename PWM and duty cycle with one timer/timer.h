/*
 * timer.h
 *
 *  Created on: 17 juin 2020
 *      Author: kinou
 */

#ifndef TIMER_H_
#define TIMER_H_

void Init_timer_no_interrupts(void);
void Timer_Delay_5ms(void);
uint16_t Check_FLAG_T ();
void Run_timer_interrupt_5ms(void);
void pwm_red(void);

#endif /* TIMER_H_ */
