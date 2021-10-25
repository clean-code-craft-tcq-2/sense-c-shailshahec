#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int loopcount = 0, sum = 0;
    
 for (loopcount = 0; loopcount < setlength; loopcount++)
 {
     if(numberset[loopcount] > numberset[loopcount+1])
     {
         s.max = numberset[loopcount];
     }
     if(numberset[loopcount] < numberset[loopcount+1])
     {
         s.min =  numberset[loopcount];
     }
     
      sum = sum + numberset[loopcount];
 }
    
    s.average = sum / setlength;
    
    return s;
}



int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
