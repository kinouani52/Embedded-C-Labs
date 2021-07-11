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

	uint8_t F=0;
	uint8_t D=0;

while(1){

    if (button1 != F){
  if ( button1)
  {
     F=1;
  rectangle_1();


  }
  else
  {
      F=0;
      clear_1();

  }
    }

    if (button2 != D){

	if (button2 )
	{
	    D=1;
rectangle_2();

	}
	else {
	    D=0;
	    clear_2();

	}

}

}

}
