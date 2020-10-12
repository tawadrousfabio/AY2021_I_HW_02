/**
*   \file main.c
*   \brief Project showing how to implement a simple driver for RGB LEDs.
*
*   This project shows how to set up a driver for RGB Led in common
*   anode configuration using PWMs in "Less" compare type. In order
*   to test the project, you need to connect the red channel to
*   pin 2.6, the blue channel to pin 2.5, the green channel to 2.7.
*   The long terminal must be connected to VDD (5V). The other
*   terminals must be connected to the pins through a resistor.
*/
#include "project.h"
#include "cmps.h"
#include "RGLedDriver.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    RGLed_Start();
    
    //RGLed_WriteCmp(COMPARE_4);
    
    for(;;)
    {
        //RGLed_WriteCmp(COMPARE_3);
        //CyDelay(10000);
        //CyDelay(100);
        RGLed_WriteCmp(COMPARE_7a);
       CyDelay(1000);
        RGLed_WriteCmp(COMPARE_7b);
        CyDelay(1000);
    }
}

/* [] END OF FILE */
