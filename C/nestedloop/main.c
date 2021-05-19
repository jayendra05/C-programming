#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter any no:");
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
    {
        for (int a=1;a<=i ;a++)
        {
            printf("* ");
        }
            printf("\n");
    }
    return 0;
}
