/**
*   \brief Source code for RGB Led Driver.
*/

#include "RGLedDriver.h"

static void RGLed_WriteRedCmp(uint16_t redcmp, uint8_t redtype);       // Write new red value
static void RGLed_WriteGreenCmp(uint16_t greencmp, uint8_t greentype);   // Write new green value


void RGLed_Start(void)
{
    // Start PWM Components
    PWM_RG_Start(); // Start PWM connected to red and green channels
}

void RGLed_Stop(void)
{
    // Stop PWM Components
    PWM_RG_Stop(); // Stop PWM connected to red and green channels
}

void RGLed_WriteCmp(Cmp p)
{
    RGLed_WriteRedCmp(p.red_cmp, p.red_cmp_type);
    RGLed_WriteGreenCmp(p.green_cmp, p.green_cmp_type);
    PWM_RG_WritePeriod(p.period);
    //PWM_RG_Clock_SetDivider(p.period);
}

static void RGLed_WriteRedCmp(uint16_t redcmp, uint8_t redtype)
{
    PWM_RG_WriteCompare1(redcmp);
    PWM_RG_SetCompareMode1(redtype);
}

static void RGLed_WriteGreenCmp(uint16_t greencmp, uint8_t greentype)
{
    PWM_RG_WriteCompare2(greencmp);
    PWM_RG_SetCompareMode2(greentype);
}

/* [] END OF FILE */
