#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    printf("enter a no:");
    scanf("%i",&row);
    for (int i=1;i<=row;i++)
    {
        for (int a=i;a<=row;a++)
        {
            printf(" ");
        }
        for (int a=1;a<=i;a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
