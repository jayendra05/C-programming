#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =10;
    int *p=&n;
    printf("value:%i\n",*p);


    printf("address:%i",p);
    return 0;
}
