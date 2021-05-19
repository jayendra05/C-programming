#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no:");
    scanf("%i",&a);
    for (int i=1 ;i<=10;i++)
    {
        printf("%i\n",a*i);
    }
    return 0;
}
