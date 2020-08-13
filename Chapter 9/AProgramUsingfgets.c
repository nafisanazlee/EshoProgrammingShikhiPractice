#include <stdio.h>
int main ()
{   char name[100];
    fgets(name, 100, stdin);
    printf("Your name: %s",name);
    return 0;
}
