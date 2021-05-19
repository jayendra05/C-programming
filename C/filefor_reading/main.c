#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    char c[255];
    pointer=fopen("C:\\Users\\pc\\Desktop\\xyz.txt","r");
    printf("%s",fgets(c,255,pointer));
    fclose(pointer);
    return 0;
}
