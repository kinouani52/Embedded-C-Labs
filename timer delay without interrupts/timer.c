/*
 * timer.c
 *
 *  Created on: 17 juin 2020
 *      Author: kinou
 */
#include <msp430f5529.h>
#include <intrinsics.h>
#include "display.h"
#include "system.h"
#include "drawing.h"
#include "digital.h"
#include "timer.h"

void Init_timer_no_interrupts(void){
    TA1CTL = 0;
    TA1CTL |= (TASSEL_2|ID_3|TACLR);
    TA1CCTL0 = 0;
}

void Timer_Delay_5ms(void){
  TA1CCR0 = 5000;
  TA1CCTL0 &= ~CCIFG;
  TA1CTL |= MC_1|TACLR;
  while ((TA1CCTL0 & CCIFG)== 0){}

    }
