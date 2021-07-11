/*
 * drawing.c
 *
 *  Created on: 9 juin 2020
 *      Author: kinou
 */
#include <msp430f5529.h>
#include <intrinsics.h>
#include "display.h"
#include "system.h"
#include "drawing.h"



void rectangle_1 (){
    Filled_rectangle(0,100,0,100, GRAPHICS_COLOR_DARK_RED );
}


void rectangle_2(void){
    Filled_rectangle(0,20,0,100, GRAPHICS_COLOR_BLUE);
}

void rectangle_3(void){
    Filled_rectangle(0,100,0,20, GRAPHICS_COLOR_GREEN);
}

void clear_1(void){
    Filled_rectangle(0,100,0,100, GRAPHICS_COLOR_WHITE );
}
void clear_2(void){
    Filled_rectangle(0,100,0,100, GRAPHICS_COLOR_WHITE );
}

