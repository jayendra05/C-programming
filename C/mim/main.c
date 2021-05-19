#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter a no=");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    if (a<b && a<c)
    {
        printf("a is smaller");
    }
    else if (b<a && b<c)
    {
        printf("b is smaller ");
    }
    else if (c<a && c<b)
    {
        printf("c is smaller");
    }
    else if (a==b && a==c)
    {
        printf("all are equal");

    }
    else
    {
        printf("input is wrong");
    }
    return 0;
}
