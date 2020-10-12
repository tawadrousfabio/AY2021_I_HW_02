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

autore
*/
#include "project.h"
#include "InterruptRoutines.h"
#include "RGLedDriver.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    LED_ISR_StartEx(Interrupt_RG_LED);   // Start the ISR
    RGLed_Start();
    const Cmp COMPARE_1     = {65000,   65000, 3, 3, 65000, 65000};
    
    RGLed_WriteCmp(COMPARE_1);
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */



