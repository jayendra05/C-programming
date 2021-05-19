#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i,n,start=1,end=2,newTeam,sum=0;
    printf("enter a range:");
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        newTeam=start+end;
        //printf("%i ",start);
        start=end;
        end=newTeam;
        if(start%2==0)
        {
            //printf("%i ",start);

            if(sum<4000000)
            {
                sum = sum + start;
            }

//             sum = sum + start;

        }

    }
    printf("sum:%u\n",sum);
    return 0;
}
