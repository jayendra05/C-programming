#include <stdio.h>
#include <stdlib.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main()
{
    int a,b;
    a=2;

    b=3;
    printf("before swapping a is:%d\n",a);
    printf("before swapping b is:%d\n",b);
    swap(&a,&b);

    printf("after swapping a is:%d\n",a);
    printf("after swapping b is:%d",b);


    return 0;
}
