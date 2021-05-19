#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,sum;
    char ch;
    do
    {
        printf("enter 1 no:\n");
        scanf("%f",&x);
        printf("enter 2 no:\n");
        scanf("%f",&y);
        sum=x+y;
        printf("the tot no is :%f",sum);
        printf("do you want to continue y/n");
        scanf(" %c",&ch);
    }
    while(ch=='y' ||ch=='Y');


    return 0;
}
