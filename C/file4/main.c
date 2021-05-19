#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    char buff[255];
    pointer=fopen("C:\\Users\\pc\\Desktop\\abc.txt","r");
    while(fscanf(pointer,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(pointer);
    return 0;
}
