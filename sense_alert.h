/***************************************************************************************************
*                                                                                                  *
*  FILENAME:                                                                                      */
/**\file       sense_alert.h
*
*  \brief       Header file for selecting the senser alert

*
* FILE VERSION INFORMATION:  $Revision: $ 1.0.0
*                            $Date:     $ 25 oct 2021
*                            $Author:   $
*
* REVISION HISTORY: V1.0
*
***************************************************************************************************/

// public global variable
extern int emailAlertCallCount;
extern int ledAlertCallCount;

/**** public functions *****************************************************************************
* Declarations of functions to be made available to other modules. Use SCOPE in front of each      *
* line.                                                                                           */
void emailAlerter(void);
void ledAlerter(void);

/* ################ End Of File ############################# */
