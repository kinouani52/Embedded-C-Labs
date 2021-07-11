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
#include "timer.h"

static uint8_t FLAG_X;
static uint8_t FLAG_F;


void pin_configEx10(void) {
    P2DIR |= (BIT5|BIT4);
}


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

void init_int_but1(void){

    P1IES |= BIT1;
    P1IFG &= ~(BIT1);
    P1IE |= BIT1;
}
void init_int_but2(void){

    P2IES |= BIT1;
    P2IFG &= ~(BIT1);
    P2IE |= BIT1;
}


uint8_t Check_FLAG_X () {
    uint8_t copya;
    uint8_t aux;
    aux =P1IE & BIT1;
    P1IE &=~(BIT1);
    __no_operation();
    copya = FLAG_X;
    FLAG_X = 0;
    P1IE |= aux;
    return (copya);
}

uint8_t Check_FLAG_F () {
    uint8_t copyb;
    uint8_t tux;
    tux= P2IE & BIT1;
    P2IE &=~(BIT1);
    __no_operation();
    copyb = FLAG_F;
        FLAG_F = 0;
        P2IE |=tux;
    return (copyb);

}

#pragma vector=PORT1_VECTOR
__interrupt void detect_bouton1(void) {
 if ( (P1IFG & BIT1) != 0){
     FLAG_X=1;
 //   rectangle_1 ();
      P1IFG &= ~(BIT1);
//  }

     }
}

#pragma vector=PORT2_VECTOR
__interrupt void detect_bouton2(void) {
   if ((P2IFG & BIT1)!=0){
        FLAG_F=1;
 //   rectangle_2 ();
P2IFG &= ~(BIT1);
    }
}

