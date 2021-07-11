#include <msp430f5529.h>
#include <intrinsics.h>
#include "display.h"
#include "system.h"
#include "drawing.h"
#include "digital.h"
/**
 * main.c
 */

void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	Init_clock ();
	Init_display ();


	init_button1();
	init_button2();
	 init_int_but1();
	 init_int_but2();

	 __enable_interrupt();


while(1){
  if (FLAG_L==1){
     rectangle_1 ();
     FLAG_L=0;
  }

    if  (FLAG_R==1){
      rectangle_2 ();
      FLAG_R=0;
    }

}





}
