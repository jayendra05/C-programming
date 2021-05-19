#include <stdio.h>
#include <stdlib.h>
int a=2;
int b=3;
int c=a;
int main()
{

    printf("Value of a before swapping %d\n",a);

    printf("Value of b before swapping %d\n",b);

    b=a;
    printf("the value of a after swapping is %d:\n",b);
    b=c;
    a=b;
    printf("the value of b after swapping %d:",b);

    return 0;
}
