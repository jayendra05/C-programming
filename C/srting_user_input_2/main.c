#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    printf("enter your name:");
    scanf("%[^\n]s",&name);
    printf("your name is :%s",name);

    return 0;
}
