#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;
   printf("enter a and b=");
   scanf("%i",&a);
   scanf("%i",&b);

   a=a+b;
   printf("a=%i\n",a);

   b=a-b;
   printf("b=%i\n",b);

   a=a-b;
   printf("a=%i",a);

    return 0;
}
