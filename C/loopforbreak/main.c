#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("enter a no:");
    scanf("%i",&a);
    printf("enter a no:");
    scanf("%i",&b);
    for(a;a<=b;a++)
    {
        if(a==5)
            {
                continue;
            }
            printf("%i\n",a);
        }
        printf("statement is out of loop");

        return 0;
    }
