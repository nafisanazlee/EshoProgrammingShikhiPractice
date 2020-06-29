#include <stdio.h>
int main ()
{
int x_plus_y, x_minus_y, x, y;
x_plus_y = 15;
x_minus_y = 5;
x = (x_plus_y + x_minus_y)/2;
y = (x_plus_y - x_minus_y)/2;
printf("Value of x is %d", x);
printf("Value of y is %d", y);
}