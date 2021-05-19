#include <stdio.h>
#include <stdlib.h>
int bubble_sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted element are :\n");
    for(i=0;i<size;i++)
    {
        printf("%i\n",arr[i]);
    }
    return 0;
}
int main()
{
    int num[]={1,2,7,54,43,56};
    bubble_sort(num,6);
    return 0;
}
