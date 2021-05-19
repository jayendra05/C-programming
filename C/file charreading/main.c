#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    char c;
    pointer=fopen("C:\\Users\\pc\\Desktop\\name.txt","r");

    while((c=fgetc(pointer))!=EOF)
    {
        printf("%c",c);
    }
    fclose(pointer);


    return 0;
}
