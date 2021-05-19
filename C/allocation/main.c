#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    int num,i;
    num = 5;
    pointer = (int*) malloc(num*sizeof(int)); //memory allocation
    printf("%d\n",pointer);
    printf("___________________________\n");
    if(pointer!=NULL)
    {
        printf("memory is allocated\n");
        for(int i=0;i<num;i++)
        {
            pointer[i]=i+1;
        }
        for (int i=0;i<num;i++)
        {
            printf("element are :%i\n",pointer[i]);
        }

    }
    else{
        printf("memory is not allocated");
    }
    free(pointer);
    printf("%i",pointer);
    return 0;
}
