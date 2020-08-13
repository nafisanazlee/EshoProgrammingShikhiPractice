#include <stdio.h>
int main()
{
    char ara[99999999];
    while(NULL != gets(ara)) {
        printf("%s\n", ara);
    }

    return 0;
}
