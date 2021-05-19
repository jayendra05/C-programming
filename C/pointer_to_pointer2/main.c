#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=5;
    int *pointer;
    pointer=&number;
    int **pointer_1;
    pointer_1=pointer;
    printf("THE VALUE OF NUMBER:%i\n",*pointer);
    printf("THE VALUE OF POINTER:%i\n",*pointer_1);
    printf("THE ADDRESS OF NUMBER:%i\n",pointer);
    printf("THE ADDRESS OF POINTER:%i\n",pointer_1);

    return 0;
}
