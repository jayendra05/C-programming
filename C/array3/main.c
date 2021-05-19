#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+arr[i];

    }

    printf("sum of all the no:%i",sum);

    return 0;
}
