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

CY_ISR(Interrupt_1)
{
    // Read TIMER Status Register -- Bring interrupt line low
    //Timer_LED_ReadStatusRegister();
    // Toggle LED
    //Green_LED_Write(!Green_LED_Read());
    uint8_t pushButtonLastState = !BUTTON_PRESSED;
    // Current reading of push button
    uint8_t pushButtonReading = !BUTTON_PRESSED;
    
    pushButtonLastState = pushButtonReading;
    pushButtonReading = RG_Control_SW_Read();
        
        
    if (pushButtonReading != pushButtonLastState) {
            
            // Reset counter if something changed
        
    }
        
        
            // If button was pressed 
    if (pushButtonReading == BUTTON_PRESSED) {
            
                // Toggle LED
            k = k+1;
            if(k>6)
            {
                k=0;
            }
    }  
    
    
    switch(k)
    {
        case 0:
            RGLed_WriteCmp(COMPARE_1);
            break;
            
        case 1:
            RGLed_WriteCmp(COMPARE_2);
            break;
            
        case 2:
            RGLed_WriteCmp(COMPARE_3);
            break;
            
        case 3:
            RGLed_WriteCmp(COMPARE_4);
            break;
            
        case 4:
            RGLed_WriteCmp(COMPARE_5);
            break;
            
        case 5:
            RGLed_WriteCmp(COMPARE_6);
            break;
            
        case 6:
            RGLed_WriteCmp(COMPARE_7a);
            CyDelay(1000);
            RGLed_WriteCmp(COMPARE_7b);
            break;
    }
    
 }


/* [] END OF FILE */
