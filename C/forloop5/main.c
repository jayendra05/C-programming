#include <stdio.h>
    #include <stdlib.h>

int main()
{
    int a;
    printf("enter any no:");
    scanf("%i",&a);
    int sum = 0;
    for(int i=1;i<=a;i++)
    {
        sum=sum + i;

        //printf("%d\n",sum);

    }

    printf("%d",sum);
    return 0;
}
