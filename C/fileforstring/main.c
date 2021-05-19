#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    pointer=fopen("C:\\Users\\pc\\Desktop\\xyz.txt","w");
    fputs("8454816298",pointer);
    fclose(pointer);
    return 0;
}
