#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a:");
    scanf("%i",&a);
    if((a%5==0)&&(a%11==0))
    {
        printf("it is divide by 5 and 11");
    }
    else
    {
        printf("not divided by 5 and 11");
    }
    return 0;
}
