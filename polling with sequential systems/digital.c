/*
 * digital.c
 *
 *  Created on: 9 juin 2020
 *      Author: kinou
 */
#include <msp430f5529.h>
#include <intrinsics.h>
#include "display.h"
#include "system.h"
#include "drawing.h"
#include "digital.h"

// uint8_t FLAG_X=1;
// uint8_t FLAG_F=1;
void init_button1(void){
   // P1SEL &= ~BIT1;  // I\O
  //  P1SEL2 &= ~BIT1;  //I\O
    P1REN |= BIT1; // Enable resistor
       P1OUT |= BIT1; // Set resistor to pull-up
       P1DIR  &= ~BIT1; // Set P1.1 as input
}
void init_button2(void){
   // P1SEL &= ~BIT1;  // I\O
    //    P1SEL2 &= ~BIT1;  //I\O
    P2REN |= BIT1; // Enable resistor on P2.1
        P2OUT |= BIT1; // Set resistor to pull-up
        P2DIR  &= ~BIT1; // Set P2.1 as intput
    }


/*uint8_t Check_FLAG_X () {
    uint8_t copya;
    Save_State_and_Disable_interrupt_X();


copya = FLAG_X;
FLAG_X = 0;
Restore_State_interrupt_X();
    return (copya);
}
uint8_t Check_FLAG_F () {
    uint8_t copyb;
    Save_State_and_Disable_interrupt_F();

copyb = FLAG_F;
FLAG_F = 0;
Restore_State_interrupt_F();
    return (copyb);
}
*/
