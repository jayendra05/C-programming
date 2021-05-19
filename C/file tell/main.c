#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    int len;
    pointer=fopen("C:\\Users\\pc\\Desktop\\txt.txt","r");
    fseek(pointer,0,SEEK_END);
    len=ftell(pointer);
    fclose(pointer);
    printf("len:%i",len);
    return 0;
}
