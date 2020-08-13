#include <stdio.h>
#include <string.h>

int main()
{
	char name[100];
	printf("Enter anything: ");
	gets(name);
	printf("Length: %d", strlen(name));

	}
