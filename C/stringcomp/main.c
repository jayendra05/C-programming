#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[10]="jayendra";
    char name_2[10]="jayendra";
    if (strcmp(name,name_2)==0)
    {
        printf("both are equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}
