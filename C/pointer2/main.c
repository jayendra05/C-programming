#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *a=&arr;
    for(int i=0;i<5;i++)
    {
        printf("Address is %d and value is :%i\n",a,*a);
        a++;
    }

    return 0;
}
