#include <stdio.h>
#include <stdlib.h>

int min_arr(int arr[],int size)
{
    int min=arr[0];
    for(int i=1;i<size;i++)
    {
        if(min >arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int num[]={1,10,1,3,5};
    int result=min_arr(num,4);
    printf("the minimum no of %i",result);
    return 0;
}

