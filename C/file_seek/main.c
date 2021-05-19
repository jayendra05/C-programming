#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    pointer=fopen("C:\\Users\\pc\\Desktop\\txt.txt","w+");
    fputs("this is jayendra mishra",pointer);
    fseek(pointer,8,15);
    fputs("chandan",pointer);
    fclose(pointer);

    return 0;
}
