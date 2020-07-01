#include <stdio.h> 
int main() 
{ 
 int n, i, m, d; 
 printf("Enter an integer :");
 scanf("%d", &d);
 for(n = 1; n <= d; n = n + 1) { 
 m = 0;
 for(i = 1; i <= 10; i = i + 1) {
 m = m + n;
 printf("%d X %d = %d\n", n, i, m); 
 if (i == 10) {
   printf("\n");
 }
 } 
 } 
 return 0; 
}