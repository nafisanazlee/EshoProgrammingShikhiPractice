#include <stdio.h>
int main ()
{
int number, i, factorial;
factorial = 1;
scanf("%d", &number);
for(i = 1; i <= number; i++) {
factorial = factorial * i;
}
printf("%d", factorial);
}