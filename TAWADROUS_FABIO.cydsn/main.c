/**
*   \file main.c
*   \brief Project aim: to show how to implement a simple driver for RB LEDs using PWMs.
*   \author: Fabio Tawadrous
autore
*/

#include "project.h"
#include "InterruptRoutines.h"
#include "RGLedDriver.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    LED_ISR_StartEx(Interrupt_RG_LED_Handler);   // Start the ISR
    RGLed_Start(); //Start the PWMs
    LED_ISR_SetPending(); //Makes interrupt pending without request (useful to start the first pattern without clicking the button)
}


/* [] END OF FILE */



