#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    int arr[]={5,7,0,8,1,9,3,4};
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(arr[j]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted element are:\n");
    for(int i=0;i<8;i++)
    {
        printf("element:%i\n",arr[i]);
    }
    return 0;
}
