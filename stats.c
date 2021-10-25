#include "stats.h"
#include "sense_alert.h"
#include <math.h>

/***************************************************************************************************
*                                                                                                  *
*  FILENAME:                                                                                      */
/**\file       stats.c
*
*  \brief       source file for computing the statistics functionality

*
* FILE VERSION INFORMATION:  $Revision: $ 1.0.0
*                            $Date:     $ 25 oct 2021
*                            $Author:   $
*
* REVISION HISTORY: V1.0
*
***************************************************************************************************/
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

//**************************************************************************************************
// FUNCTION:           compute_statistics
//
//! \brief             function to compute average,minimum, maximum of number
//!
//! //! \param[in]     none		            
//! //! \param[in]     none		         
//! \return            none
//
//************************************************************************************************** 
struct Stats compute_statistics(const float* numberset, int setlength) 
{
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float min = numberset[0];
    float max = numberset[0];
    int loopcount = 0;
    float Numbertotal = 0;
    
// To find the max, min, average from number
 for(loopcount=0;loopcount<setlength;loopcount++)
 {
     // check for minimum number
     if(numberset[loopcount]<min) 
     {
        min= numberset[loopcount];
     }
    if(numberset[loopcount]> max) 
    {
       max= numberset[loopcount];
    }
    Numbertotal = Numbertotal + numberset[loopcount];
  }
    s.average = Numbertotal/setlength;
    s.min = min;
    s.max = max;

    return s;
}

//**************************************************************************************************
// FUNCTION:           check_and_alert
//
//! \brief             function to compute maximum of number
//!
//! //! \param[in]     none		            
//! //! \param[in]     none		         
//! \return            none
//
//************************************************************************************************** 
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    // check compute status greater then threshold
    if(computedStats.max > maxThreshold)
    {
	// calling the led alert function
        alerters[0]();
	alerters[1]();
    }
}

/* #########################    End of File ################################ */
