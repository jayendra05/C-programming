#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter any number:");
    scanf("%i",&num);
    int temp=num;
    int sum=0;
    while(num>0)
    {
        int mod=num%10;
        sum=sum*10+mod;
        num=num/10;
    }
    num=temp;
    if (num==sum)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palidrome");
    }

    return 0;
}
