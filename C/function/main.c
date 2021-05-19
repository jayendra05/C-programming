#include <stdio.h>
#include <stdlib.h>
int no1;
int no2;

void add()
{
    int result=no1+no2;
    printf("Addition is %i\n",result);
}
void sub()
{
    int result=no1-no2;
    printf("Substraction is %i\n",result);
}

void divi()
{
    int result = no1 / no2;
    printf("Division is %i\n",result);
}
void mul()
{
    int result=no1*no2;
    printf("Multiplication %i\n",result);
}


int main()
{
    printf("enter no1:");
    scanf("%i",&no1);
    printf("enter no2:");
    scanf("%i",&no2);
    //for function
    add();
    divi();
    mul();
    sub();
    return 0;
}
