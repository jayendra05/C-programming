#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pointer="jayendra";
    printf("your name is :%s\n",pointer);
    char *pointer_1;
    pointer_1=pointer;
    printf("your name is :%s",pointer_1);

    return 0;
}
