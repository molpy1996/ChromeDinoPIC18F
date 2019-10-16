/* 
 * File:   newmain.c
 * Author: Adrian Chazottes
 *
 * Created on 18 novembre 2016, 10:00
 */

#include "main.h"

#pragma config FOSC = HS 		//oscillator HS
#pragma config LVP = OFF 		//Disable low voltage programmig

void main (void)
{
    // call the function that will init the PIC
    initMyPIC18F();
    glcd_Image();
    //glcd_PlotPixel( 2, 2, 0xFF);
    while(1)
    {
        glcd_Init(1);
        glcd_Rect(8,8,32,16,1);
    }

}// end of the main function

// make sure to have an empty LAST line in any *.c file (just hit an Enter)!

