#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i;
    printf("enter any no:");
    scanf("%u",&i);
    if ((i=1) || (i<9))
    {
        printf("it is no");
    }
    return 0;
}
