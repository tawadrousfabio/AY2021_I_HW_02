/**
*   \brief Source code for the implementation of what happens during the interrupt
*   \author: Fabio Tawadrous
*/
#include "InterruptRoutines.h"
#include "cmps.h"

uint8 k = 0; //k is an index that refers to the array of patterns

CY_ISR(Interrupt_RG_LED_Handler)
{
    
    k = k + !RG_Control_BTN_Read(); //If the button is pressed, k is incremented.
        
    if(k>6) 
    {
        k=0; //of course if we had finished the patterns, we'll start again from the first one.
    } 

    RGLed_WriteCmp(CMP_ARR[k]); //Get the k-th struct from the array and use it to set the PWM values in both channels.
 }


/* [] END OF FILE */
