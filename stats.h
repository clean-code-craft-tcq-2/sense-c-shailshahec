
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

float get_arrmax(float a[], int num_elements);
float get_arrmin(float a[], int num_elements);
float get_aver(float a[], int num_elements);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
