#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a year=");
    scanf("%i",&a);
    if(a%4==0)
    {
        printf("it is leap year=%i",a);
    }
    else
    {
        printf("it is not a leap year=%i",a);
    }


    return 0;
}
