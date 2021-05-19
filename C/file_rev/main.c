#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    char read;
    pointer=fopen("C:\\Users\\pc\\Desktop\\txt.txt","r");
    while((read=fgetc(pointer))!=EOF)
    {
        printf("%c",read);
    }
    rewind(pointer);
    while((read=fgetc(pointer))!=EOF)
    {
        printf("%c",read);
    }
    fclose(pointer);

    return 0;
}
