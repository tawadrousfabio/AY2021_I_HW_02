/**
*   \brief Header containing the pattern information
*   \author: Fabio Tawadrous
*/
#include "RGLedDriver.h"
#define F 65000;
/*
    This simple array of structs contains all the information we need to set up the patterns. 
*/
const Cmp CMP_ARR[7] = {{65000,   65000, 3, 3, 65000, 65000},
                        {65000,   32500, 3, 1, 65000, 65000},
                        {32500,   65000, 3, 3, 65000, 65000},
                        {16250,   16250, 1, 3, 32500, 32500},
                        {8125 ,   8125 , 3, 1, 16250, 16250},
                        {16250,   32500, 1, 1, 65000, 65000},
                        {32500,   16250, 3, 1, 65000, 32500}};


/* [] END OF FILE */
