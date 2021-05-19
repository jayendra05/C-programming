#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20]="punit";
    char name_1[20];
    printf("your name is:%s\n",name);
    printf("copy the name:%s\n",strcpy(name_1,name));
    printf("%s\n",strrev(name_1));
    if(strcmp(name,name_1)==0)

    {
        printf("it is palindrome");
    }

    else
    {

        printf("not a palindrome");
    }
}
