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


//void button1(void){
//  while ( P1IN & BIT1) )
//   {
//       rectangle_1 ();
//
//   }
//
//}
//
//void button2(void)
//{
//  while ((P1IN & BIT1) !=0)
//  {
//      rectangle_2();
//
//  }
//
//}
