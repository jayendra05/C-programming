#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[]={5,10,15,20,25};
//    printf("The marks is%i",marks[0]);

    for(int i=0;i<5;i++)
    {

        printf("the marks is %i of %i\n",i,marks[i]);
    }

    return 0;
}
