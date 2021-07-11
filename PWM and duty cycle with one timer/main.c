#include <msp430f5529.h>
#include <intrinsics.h>
#include "display.h"
#include "system.h"
#include "drawing.h"
#include "digital.h"
#include "timer.h"


/**
 * main.c
 */
int main(void)
{



    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
      Init_clock ();
     //   Init_display ();
     //   Init_timer_no_interrupts();
        pin_configEx10();
      //  init_button1();
        Run_timer_interrupt_5ms();
        __enable_interrupt();
      //  init_button2();
        // init_int_but1();
         //init_int_but2();
        pwm_red();
while(1){



   // if (Check_FLAG_T ()){


   //    P2OUT^=BIT4;
     //   P2OUT^=BIT5;

        //}


}
}
