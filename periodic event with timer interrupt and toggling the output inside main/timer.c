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


static uint16_t FLAG_T=0;

uint16_t Check_FLAG_T () {
    uint16_t copy;
    uint16_t aux;
  //  aux =P1IE & BIT1;
    aux = TA1CCTL0 & CCIE;
   // P1IE &=~(BIT1);
    TA1CCTL0  &=~( CCIE);
    __no_operation();
    copy = FLAG_T;
    FLAG_T = 0;
   // P1IE |= aux;
    TA1CCTL0 |= aux;
   //TA1CCTL0 = CCIE;
    return (copy);
}


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
void Run_timer_interrupt_5ms(void){
TA1CTL =0;
TA1CTL |= (TASSEL_2|ID_3|TACLR |MC_1);
TA1CCTL0 = CCIE;
TA1CCR0 = 5000;

}

#pragma vector=TIMER1_A0_VECTOR
__interrupt void Timer1_A1(void)
{
    static int16_t count=0;
    if (count==240){
            FLAG_T=1;
            count=0;

    }
          count++;

            }

