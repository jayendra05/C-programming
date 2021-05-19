#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("enter your name is :%s",name);
    gets(name);
    printf("your name is:");
    puts(name);
    return 0;
}
