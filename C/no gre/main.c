#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("enter a no:");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);

   if (a>b && a>c)
   {
       printf("a is greater");
   }
   else if (b>c && b>a)
    {
        printf("b is greater");
    }
   else if (c>b && c>a)
   {
       printf("c is greater");
   }
   else if (a==b && a==c )
   {
       printf("all are equal");
   }
   else if (a==b && a>c )
   {
       printf("a and b are equal");
   }
   else if (a==c && a>b)
   {
       printf("a and c are equal");
   }
   else if (b==c && c>a)
   {
       printf("b and c are equal");
   }
   else
   {
       printf("no num is greater");
   }
    return 0;
}
