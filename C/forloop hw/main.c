#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter any no:");
    scanf("%i:",&a);
    int mul=1;
    for (int i=1;i<=a;i++)
    {
        mul=mul*i;
    }
    printf("no:%i\n",mul);
    return 0;
}
