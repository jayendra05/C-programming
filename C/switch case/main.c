#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no 1-12:");
    scanf("%i",&a);
    switch(a)
    {
        case 1:
            printf("jan-31");
            break;
        case 2:
            printf("feb_28");
            break;
        case 3:
            printf("mar-31");
            break;
        case 4:
            printf("apr-30");
            break;
        case 5:
            printf("may-31");
            break;
        case 6:
            printf("june-30");
            break;
        case 7:
            printf("july-31");
            break;
        case 8:
            printf("aug-31");
            break;
        case 9:
            printf("sep-30");
            break;
        case 10:
            printf("oct-31");
            break;
        case 11:
            printf("nov-30");
            break;
        case 12:
            printf("dec-3");
            break;
        default:
            printf("month no is wrong");

    }
    return 0;
}
