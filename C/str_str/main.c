#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100]="it is very hot today";
    printf("%s",strstr(name,"very"));
    return 0;
}
