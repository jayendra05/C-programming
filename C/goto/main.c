#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i=1;
    printf("enter a no:");
    scanf("%i",&num);
    table:
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    if(i<=10)
        goto table;

    return 0;
}
