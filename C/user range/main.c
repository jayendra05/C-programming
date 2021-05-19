#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no 10 20 30=");
    scanf("%i",&a);
    switch (a)
    {
    case 10:
        printf("no is 10");
        break;

    case 20:
        printf("no is 20");
        break;
    case 30:
        printf("no is 30");
        break;

    default:
        printf("error");
    }
    return 0;
}
