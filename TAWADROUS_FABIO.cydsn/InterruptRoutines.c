/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "InterruptRoutines.h"
#define BUTTON_PRESSED 0
#include "cmps.h"


uint8 k = 0;

CY_ISR(Interrupt_RG_LED)
{

    uint8_t pushButtonLastState = !BUTTON_PRESSED;
    // Current reading of push button
    uint8_t pushButtonReading = !BUTTON_PRESSED;
    
    pushButtonLastState = pushButtonReading;
    pushButtonReading = RG_Control_SW_Read();
        
        
    if (pushButtonReading != pushButtonLastState) {
            
        
    }
        
        
    // If button was pressed 
    if (pushButtonReading == BUTTON_PRESSED) {
            
            // Then increment k
            k++;
            if(k>6)
            {
                k=0;
            }
    }  
    
    
    RGLed_WriteCmp(CMP_ARR[k]);
       
 }


/* [] END OF FILE */
