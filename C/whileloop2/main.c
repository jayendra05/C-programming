#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter any no:");
    scanf("%i",&n);
    int i=1;
    while(i<=10)
    {

        printf("%i\n",n*i);
        i=i+1;

    }
    return 0;
}
