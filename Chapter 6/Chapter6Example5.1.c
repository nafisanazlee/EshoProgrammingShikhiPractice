#include <stdio.h>
int main()
{

	int ara[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int ara2[10];
	int i, j;

	for (i = 0, j = 9; i < 10; i++, j--)
	{
		ara2[j] = ara[i];

		/* 
		   Prothom baar: 
		   ara2[j] = ara2[9] = ara2 er 10 no element
		   ara[i] = ara[0] = ara er 1 num element = 10 
		   ara2[j] = ara[i] = 10 
		   j-- = j =8 
		   i++ = i = 1

		   1st loop er result: 
		   ara[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }
		 ara2[] = {     ,      ,      ,      ,      ,      ,     ,     ,      ,10 }

		   Porer baar:
		   ara2[j] = ara2[8] = ara2 er 9 num element 
		   ara[i] = ara[1] = ara er 2 num element = 20 
		   ara2[j] = ara[i] = 20 
		   j-- = j = 9 
		   i++ = i = 2

		   2nd loop er result:
		   ara[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }
	     ara2[] = {     ,      ,      ,      ,      ,     ,      ,     , 20 ,10 }

		   ...
		   ...
		   Whole loop complete er result: 
		   ara[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } 
		   ara2[] = {100,90 ,80 , 70,60, 50, 40, 30, 20,10 }

		 */

	}

	for (i = 0; i < 10; i++)
	{
		ara[i] = ara2[i];

		/* 
		   1st loop: 
		   i = 0
		   ara[i] = ara er 1st element 
		   ara2[i] = ara2 er 1st element = 100 
		   ara[i] = ara2[i] = ara er 1st element er jaygay ara2
		                                 er 1st element
		   ara[0] = 100

		   1st loop er result: 
		   ara[] = { 100, 20, 30, 40, 50, 60, 70, 80, 90, 100 } 
		 ara2[] = {100, 90 , 80, 70, 60, 50, 40, 30, 20, 10 } 
		   
		   ara2 er change nei karon ara er value assign kora hocche 
		   ara2 er na
		   i++ = i+1=0+1=1
		   
		   2nd loop: 
		   i = 1
		   ara[1] = ara er 1st element 
		   ara2[1] = ara2 er 2nd element = 100 
		   ara[i] = ara2[i] = ara er 2nd element er jaygay ara2
		                                 er 2nd element
		   
		  
		ara[1] = 90

		   2nd loop er result: 
		   ara[] = { 100, 90, 30, 40, 50, 60, 70, 80, 90, 100 } 
		 ara2[] = {100, 90 , 80, 70, 60, 50, 40, 30, 20, 10 } 
		   
		   ara2 er change nei karon ara er value assign kora hocche 
		   ara2 er na
		   i++ = i+1=0+1=1
		   
		   ...
		   ...
		   
		   Loop complete er result:
		    
		   ara[] = {100, 90 , 80, 70, 60, 50, 40, 30, 20, 10 } 
		 ara2[] = {100, 90 , 80, 70, 60, 50, 40, 30, 20, 10 } 
 */
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", ara[i]);

	}

	return 0;

}