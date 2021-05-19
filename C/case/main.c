#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a no of day from 1 to 7=");
    scanf("%i",&a);
    switch(a)
    {
    case 1:
        printf("day is mon");
        break;
    case 2:
        printf("day is tus");
        break;
    case 3:
        printf("day is wed");
        break;
    case 4:
        printf("day is thu");
        break;
    case 5:
        printf("day is fri");
        break;
    case 6:
        printf("day is sat");
        break;
    case 7:
        printf("day is sun");
        break;
    default:
        printf("input is wrong");
    }

    return 0;
}
