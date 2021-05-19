#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter a no1:");
    scanf("%i",&a);


    printf("enter a no2:");
    scanf("%i",&b);

    c=a%b;
    printf("mod is:%i",c);
    return 0;
}
