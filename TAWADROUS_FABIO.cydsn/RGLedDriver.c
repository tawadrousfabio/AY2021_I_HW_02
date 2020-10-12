/**
*   \brief Source code for RGB Led Driver.
*/

#include "RGLedDriver.h"

static void RGLed_WriteRedCmp(uint16_t redcmp, uint8_t redtype, uint16_t redperiod);       // Write new red value
static void RGLed_WriteGreenCmp(uint16_t greencmp, uint8_t greentype, uint16_t greenperiod);   // Write new green value


void RGLed_Start(void)
{
    // Start PWM Components
    PWM_R_Start(); // Start PWM connected to red and green channels
    PWM_G_Start();
}

void RGLed_Stop(void)
{
    // Stop PWM Components
    PWM_R_Stop(); // Stop PWM connected to red and green channels
    PWM_G_Stop();
}

void RGLed_WriteCmp(Cmp p)
{
    RGLed_WriteRedCmp(p.red_cmp, p.red_cmp_type, p.red_period);
    RGLed_WriteGreenCmp(p.green_cmp, p.green_cmp_type, p.green_period);
    //PWM_RG_WritePeriod(p.period);
    //PWM_RG_Clock_SetDivider(p.period);
}

/*
void RGLed_WriteCmp7(Cmp c1, Cmp c2)
{
    RGLed_WriteRedCmp(c1.red_cmp, c1.red_cmp_type);
    RGLed_WriteGreenCmp(c1.green_cmp, c1.green_cmp_type);
    PWM_RG_WritePeriod(c1.period);
    
    //then
    CyDelay(1000);
    RGLed_WriteRedCmp(c2.red_cmp, c2.red_cmp_type);
    RGLed_WriteGreenCmp(c2.green_cmp, c2.green_cmp_type);
    PWM_RG_WritePeriod(c2.period);
    CyDelay(1000);
}
*/

static void RGLed_WriteRedCmp(uint16_t redcmp, uint8_t redtype, uint16_t redperiod)
{
    PWM_R_WriteCompare(redcmp);
    PWM_R_SetCompareMode(redtype);
    PWM_R_WritePeriod(redperiod);
}

static void RGLed_WriteGreenCmp(uint16_t greencmp, uint8_t greentype, uint16_t greenperiod)
{
    PWM_G_WriteCompare(greencmp);
    PWM_G_SetCompareMode(greentype);
    PWM_G_WritePeriod(greenperiod);
}

/* [] END OF FILE */
