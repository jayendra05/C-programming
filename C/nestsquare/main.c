#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter aqny no:");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int a=1;a<=n;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
