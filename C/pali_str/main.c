#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char name_1[20];
    printf("enter your name:");
    scanf("%s",name);
    strcpy(name_1,name);
    printf("name_1:%s\n",name_1);
    strrev(name_1);
    printf("name_1:%s\n",name_1);
    if (strcmp(name_1,name)==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}
