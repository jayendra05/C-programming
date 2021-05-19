#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *pointer;
    pointer=fopen("C:\\Users\\pc\\Desktop\\abc.txt","r");
    if(pointer==NULL)
    {
        printf("error");
    }
    fscanf(pointer,"%i",&num);
    printf("value of number=%i",num);
    fclose(pointer);

    return 0;
}
