#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ;
    printf("enter size of array:");
    scanf("%i",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter element to index %i:",i);
        scanf("%i",&arr[i]);

    }
    printf("content of array \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
