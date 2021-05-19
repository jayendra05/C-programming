#include <stdio.h>
#include <stdlib.h>

void avg(int a,int b,int c,int d,int e)
{
    printf("avg of sub is:%i",(a+b+c+d+e)/5);
}
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("enter a no for a:");
    scanf("%i",&a);
    printf("enter a no for b:");
    scanf("%i",&b);
    printf("enter a no for c:");
    scanf("%i",&c);
    printf("enter a no for d:");
    scanf("%i",&d);
    printf("enter a no for e:");
    scanf("%i",&e);
    avg(a,b,c,d,e);
    return 0;
}
