#include "sense_alert.h"

/***************************************************************************************************
*                                                                                                  *
*  FILENAME:                                                                                      */
/**\file       sense_alert.c
*
*  \brief       Source file for selecting the senser alert

*
* FILE VERSION INFORMATION:  $Revision: $ 1.0.0
*                            $Date:     $ 25 oct 2021
*                            $Author:   $
*
* REVISION HISTORY: V1.0
*
***************************************************************************************************/

//**************************************************************************************************
// FUNCTION:           emailAlerter
//
//! \brief             function to increment emailAlerter counter
//!
//! //! \param[in]     none		            
//! //! \param[in]     none		         
//! \return            none
//
//************************************************************************************************** 
void emailAlerter(void)
{
    emailAlertCallCount++;
}

//**************************************************************************************************
// FUNCTION:           ledAlerter
//
//! \brief             function to increment ledAlerter counter
//!
//! //! \param[in]     none		            
//! //! \param[in]     none		         
//! \return            none
//
//************************************************************************************************** 
void ledAlerter(void)
{
   ledAlertCallCount++;
}
