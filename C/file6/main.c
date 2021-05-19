#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    pointer=fopen("C:\\Users\\pc\\Desktop\\char.txt","w");
    fputc('A',pointer);
    fclose(pointer);


    return 0;
}
