#include <stdio.h> 
int main() 
{ 
 int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
 int i, j, temp; 
 for(i = 0, j = 9; i < 10; i++, j--) { 
 temp = ara[j];
 ara[j] = ara[i];
 ara[i] = temp;
 /*
 for example, 1st loop,
 temp = ara[9];
 ara[9] = ara[0];
 ara[0] = temp;
 2nd loop,
 temp = ara[8];
 ara[8] = ara[1];
 ara[1] = temp;
 evabe ara[j] te j er man pichone jete thakbe. ar ara[0] er jaygay ara[9],ara[1] er jaygay ara[8] evabe print hobe.
 */
 }
 for(i = 0, j = 9; i < 10; i++, j--) { 
 printf("%d\n", ara[j]); 
 /* 
 boite ekhane vul chilo. debug korte bola hoyeche. ei for loop tar khetre ara[i] print korte disilo.kintu,amra ara [j] orthat ara[9],[8],[7] evabe print korte chacchi.tai ara[j] print korte hobe. 
 */
 } 
 return 0; 
} 