/**
*   \brief Header containing the Patterns information
*   \author: Fabio Tawadrous
*
*   In this file I've defined a simple array of structs 
*   containing all the information we need in order to 
*   set up the patterns.
*   Remember: each struct is composed by: 
*   1. compare value for red channel
*   2. compare value for green channel
*   3. compare type for red channel (3 = greater, 1 = less)
*   4. compare type for green channel
*   5. PWM period value for red channel 
*   6. PWM period value for green channel
*/

#include "RGLedDriver.h"
#define P 65000 //This value MUST be 2 times the clock frequency (expressed in Hz). Max value: 65535.

const Cmp CMP_ARR[7] = {{        P,          P, 3, 3,        P,       P}, 
                        {        P,      0.5*P, 3, 1,        P,       P},
                        {    0.5*P,          P, 3, 3,        P,       P},
                        {   0.25*P,     0.25*P, 1, 3,    0.5*P,   0.5*P},
                        {  0.125*P ,   0.125*P, 3, 1,   0.25*P,  0.25*P},
                        {   0.25*P,      0.5*P, 1, 1,        P,       P},
                        {    0.5*P,     0.25*P, 3, 1,        P,   0.5*P}};

/* [] END OF FILE */
