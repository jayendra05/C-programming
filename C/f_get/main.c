#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("enter your name:");
    fgets(name,10,stdin);
    printf("your name is:%s",name);
    return 0;
}
