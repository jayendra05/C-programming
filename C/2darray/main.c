#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    printf("enter your name:");
    scanf("%[^\n]s",&name);
    int rollno;
    int sum=0;
    printf("enter your roll no:");
    scanf("%i",&rollno);
    int subject;
    printf("enter no of subject:");
    scanf("%i",&subject);
    int score[subject];
    for(int i=1;i<=subject;i++)
    {
        printf("marks of %i:",i);
        scanf("%d",&score[i]);
        sum=sum+score[i];
    }
    printf("sum:%i\n",sum);
    printf("hi %s your result is:\n",name);

    int avg=sum/subject;
    printf("avg of marks is %i\n:",avg);
    if(avg>=75 && avg<=100)
    {
        printf("you r distinction");
    }
    else if(avg>=60 && avg<75)
    {
        printf("u r first class");
    }
    else if(avg>=50 && avg<60)
    {
        printf("second class");
    }
    else if(avg>=35 && avg<50)
    {
        printf("just pass");
    }
    else if(avg<35 && avg<0)
    {
        printf("fail");
    }
//    else if(avg<=0 && avg>100)
//    {
//        printf("error");
//    }
    else
    {
        printf("error");

    }













//    for (int i=1;i<=subject;i++)
//    {
//        printf("marks of sunb %i:",i);
//        scanf("%i",&subject);
//        sum=sum+subject;
//    }
//    printf("sum of marks is:%i",sum);

    return 0;
}
