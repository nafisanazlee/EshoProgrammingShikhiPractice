#include <stdio.h>
int main ()
{
double v,t,n;
n = 2;
printf("Enter the value of v.\n");
scanf("%lf", &v);
printf("Enter the value of t.\n");
scanf("%lf", &t);
printf("If the time is 2t, s = %0.2lf", n * t * v);
return 0;
}