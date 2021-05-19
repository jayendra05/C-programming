#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int no;
    float ans;
    sqr:
        printf("enter a no:");
        scanf("%i",&no);
        if(no>0)
        {
            ans=sqrt(no);
            printf("ans:%f\n",ans);
        }
        else
        {
            printf("enter a +no");
        }
    goto sqr;


    return 0;
}
