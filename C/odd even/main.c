#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no:");
    scanf("%i",&a);
    if(a%2==0)
    {
        printf("it is even no");
    }
    else{
        printf("it is odd");
    }
    return 0;
}
