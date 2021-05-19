#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no;");
    scanf("%i",&a);
    if(a>=75 && a<100)
    {
        printf("it is de");
    }

    else if(a<75 && a>=60)
    {
        printf("first class");
    }
    else if(a<60 && a>=35)
    {
        printf("second class");

    }
    else if(a<35 && a>0)
    {
        printf("fail");
    }

    else
    {
        printf("error");
    }
    return 0;
}
