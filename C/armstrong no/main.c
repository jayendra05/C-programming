#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int mod,sum=0;
    printf("enter any no:");
    scanf("%i",&number);
    int temp =number;
    while(number>0)
    {
        mod=number%10;
        int cube=mod*mod*mod;
        sum=sum+cube;
        number=number/10;
    }
    number=temp;
    if(number==sum)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("it is no a armstrong number");
    }

    return 0;
}
