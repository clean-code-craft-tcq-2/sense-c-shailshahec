#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int loopcount = 0, sum = 0;
    
    s.max =  get_arrmax(numberset,setlength);
    s.min = get_arrmin (numberset,setlength);
    s.average = get_arraver(numberset,setlength);

    return s;
}

float get_arrmax(float a[], int num_elements)
{
  int i, max;
   max = a[0];
   for (i=1; i<num_elements; i++)
   {
      if (a[i]>max)
      {
         max=a[i];
      }
   }

   return(max);
}

float get_arrmin(float a[], int num_elements)
{
   int i, min;
   min = a[0];
   for (i=1; i<num_elements; i++)
   {
      if (a[i]<min)
      {
         min=a[i];
      }
   }

   return(min);
}

float get_aver(float a[], int num_elements)
{ 
 int sum,i;
   float avg;
   sum=0;
   avg=0;

   for (i=0; i<num_elements;i++)
   {
      sum=sum+a[i];
      avg=(float)sum/(i+1);
   }
   return(avg);
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max> maxThreshold)
    {       
         (*alerters[0])();
         (*alerters[1])();
    }
}

