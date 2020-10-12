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
#include "RGLedDriver.h"


const Cmp COMPARE_1     = {65000,   65000, 3, 3, 65000, 65000}; //1 = less than, 3 = greater than
const Cmp COMPARE_2     = {65000,   32500, 3, 3, 65000, 65000};
const Cmp COMPARE_3     = {32500,   65000, 1, 3, 65000, 65000}; //pero' in questo caso inizia basso il rosso!!!!!
const Cmp COMPARE_4     = {16250,   16250, 3, 1, 32500, 32500}; //pero' in questo caso inizia basso il rosso!!!!!
const Cmp COMPARE_5     = {8125,   8125, 1, 3, 16250,16250}; //pero' in questo caso inizia basso il rosso!!!!!
const Cmp COMPARE_6     = {16250,   32500, 1, 1, 65000, 65000}; //pero' in questo caso inizia basso il rosso!!!!!
const Cmp COMPARE_7     = {32500,   16250, 3, 1, 65000, 32500}; //pero' in questo caso inizia basso il rosso!!!!!


/* [] END OF FILE */
