#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[9]="jayendra";
    char *pointer=&name;
    printf("name is :%s\n",pointer);
    printf("address of the pointer:%i",*pointer);
    return 0;
}
