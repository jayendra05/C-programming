#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n,i;
    n = 5;

    //printf("Enter number of elements %d \n");

    ptr = (int*) malloc(n*sizeof(int)); //memory allocation
    printf("%d\n",ptr);

    printf("------------------------------------------\n");

    if(ptr==NULL)
    {
        printf("Memory not allocated to the pointer\n");
    }

    else{

        printf("Memory allocated successfully\n");
        for(i=0;i<n;i++)
        {
            ptr[i] = i+1;

        }

        printf("Elements of array are: ");
        for(i=0;i<n;i++)
        {
            printf("%d\n",ptr[i]);
        }


    }

    return 0;


}
