#include <stdio.h>
#include <stdlib.h>

int main()
{
    char response;
    int age;
    do
    {
        printf("enter your age:\n");
        scanf("%i",&age);
        if(age>=18)
        {
            printf("you can vote\n");
        }
        else
        {
            printf("you can't vote\n");
        }
printf("DO YOU WANT TO CONTINUE Y OR N:");
scanf(" %c",&response);
    }
    while(response=='Y' || response=='y');


}
