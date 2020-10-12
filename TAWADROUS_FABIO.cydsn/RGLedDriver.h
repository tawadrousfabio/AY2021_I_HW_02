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
#ifndef _RG_LED_DRIVER_H_
    #define _RG_LED_DRIVER_H_
    
    #include "project.h"
    
    
    /**
    *   \brief Struct holding color data
    */
    
    typedef struct {
        uint16_t red_cmp;    ///< Red value   period 1 - 65k???????
        uint16_t green_cmp;  ///< Green value period 1 - 65k???????
        uint8_t red_cmp_type;
        uint8_t green_cmp_type;
        uint16_t red_period;
        uint16_t green_period;
    } Cmp;
    
    
    /**
    *   \brief Start RG Led Driver.
    */
    void RGLed_Start(void);
    
    /**
    *   \brief Stop RG Led Driver.
    */
    void RGLed_Stop(void);
    
    
    /**
    *   \FUNZIONE GENERICA VALIDA PER TUTTI I 7 PUNTI, CHE PRENDE COME INPUT IL PERIODO PER R E PER G!!
    */
    void RGLed_WriteCmp(Cmp c);
    
    //void RGLed_WriteCmp7(Cmp c1, Cmp c2);
#endif

/* [] END OF FILE */
