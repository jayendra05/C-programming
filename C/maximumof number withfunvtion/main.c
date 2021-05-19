#include <stdio.h>
#include <stdlib.h>
int max_arr(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}



int main()
{
    int num[]={1,2,4,6,3,0};
    int result=max_arr(num,6);
    printf("maximum of no:%i",result);
    return 0;
}
