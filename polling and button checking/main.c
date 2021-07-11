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


while(1){
  if  ( button1)
  {
  rectangle_1();
  }

	if (button2)
	{
rectangle_2();
	}

}



}
