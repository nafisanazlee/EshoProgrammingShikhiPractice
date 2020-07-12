#include <stdio.h>
int main ()
{
int i;
double fact;
printf("Enter an integer to do its reverse factorial : ");
scanf("%lf", &fact);
int input = fact;
 for(i = 1; i > 0; i++) {
 fact = fact / i;
  if(fact == 1){
 break;
  }
  if(fact < 1) {
    printf("Sorry,the number %d doesn't have an integer reverse factorial.", input);
    break;
  }
 }
 while (fact == 1){
  printf("%d! = %d", i,input);
  break;
 }
}
  
