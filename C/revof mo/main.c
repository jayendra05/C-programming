#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    int sum=0;
    printf("enter a no:");
    scanf("%i",&no);
    while(no>0)
    {
        int rem=no%10;
        sum=sum*10+rem;
        no=no/10;


    }
    printf("rev of no is:%i",sum);
//    int div=no/10;
//    printf("div:%i\n",div);
//    int mod=no%10;
//    printf("mod:%i\n",mod);
//    printf("rev of no is:%i",(mod*10)+div);
   return 0;
}

