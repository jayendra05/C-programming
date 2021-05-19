#include <stdio.h>
#include <stdlib.h>
void sum(int a,int b)
{
    printf("sum is:%i",a+b);
}



int main()
{
    int a;
    int b;
    printf("enter a no for a:");
    scanf("%i",&a);
    printf("enter a no for b:");
    scanf("%i",&b);

    sum(a,b);

    return 0;
}
