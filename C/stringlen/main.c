#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[20];
    printf("enter your name:");
    scanf("%s",&name);
    printf("length of your name is:%i",strlen(name));
    return 0;
}
