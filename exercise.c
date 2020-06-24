#include<time.h>
#include<stdio.h>
// developer did
int main()

time_t ltime;
ltime-time(NULL);
printf("Hi form C: %s",asctime(localtime(&ltime)));
return 0;
}
