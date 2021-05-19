#include <stdio.h>
#include <stdlib.h>

void sum(int x)
{
    x=x+x;
    printf("x:%i\n",x);
}


int main()
{
    int x=10;
    printf("Before function call:%i\n",x);
    sum(x);
    printf("after function call:%i\n",x);
    return 0;
}
