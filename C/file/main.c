#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *pointer;
    pointer=fopen("C:\\Users\\pc\\Desktop\\abc.txt","a");
    if(pointer==NULL)
    {
        printf("error");
    }
    printf("enter a number:");
    scanf("%i",&num);
    fprintf(pointer,"%i",num);
    fclose(pointer);

    return 0;
}
