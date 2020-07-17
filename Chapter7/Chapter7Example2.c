#include <stdio.h> 
int add(int num1, int num2) 
{ 
 double sum = num1 + num2; 
 return sum; 
} 
int main()
{ 
 double a, b, c; 
 a = b = 2.5;
 c = add(a, b); 
 printf("%lf\n", c); 
 return 0; 
} 
/* program vul result dibe cause ami a ar b ke int e rekhechi tai 2.5 2 hoye jabe */