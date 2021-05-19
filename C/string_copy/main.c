#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[10]="jayendra";
    char name_2[10];
    strcpy(name_2,name);
    printf("your name is:%s",name_2);

    return 0;
}
