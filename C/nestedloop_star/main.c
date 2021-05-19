#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter any no:");
    scanf("%i",&n);
    for (int i=n;i>=1;i--)
    {
        for(int a=i;a>=1;a--)
        {
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
