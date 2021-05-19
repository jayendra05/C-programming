#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=2;
    int *pointer;
    int **pointer1;
    pointer=&number;
    pointer1=pointer;
    printf("address of number is:%i\n",pointer);
    printf("address of pointer is:%i\n",pointer1);
    printf("value of number is:%i\n",*pointer);
    printf("value of pointer is:%i\n",*pointer1);
    return 0;
}
