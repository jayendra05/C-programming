#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a no:");
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
    {
        for(int a=i;a<n;a++)
        {
            printf(" ");
        }
        for (int a=1;a<=(2*i-1);a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
