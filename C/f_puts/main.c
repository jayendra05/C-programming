#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10]="jayendra";
    printf("enter your name:");
    fgets(name,10,stdin);
    printf("your name is:");
    fputs(name,stdout);
    return 0;
}
