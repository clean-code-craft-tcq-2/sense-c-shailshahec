/***************************************************************************************************
*                                                                                                  *
*  FILENAME:                                                                                      */
/**\file       stats.h
*
*  \brief       Header file for stats functionality

*
* FILE VERSION INFORMATION:  $Revision: $ 1.0.0
*                            $Date:     $ 25 oct 2021
*                            $Author:   $
*
* REVISION HISTORY: V1.0
*
***************************************************************************************************/
/**** typdefs/structures ***************************************************************************
* Typedefs/structures to be made available to other modules.                                      */
struct Stats
{
   float average;
   float min;
   float max;
};

/**** public functions *****************************************************************************
* Declarations of functions to be made available to other modules. Use SCOPE in front of each      *
* line.                                                                                           */
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
