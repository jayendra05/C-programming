#include <stdio.h>
#include <stdlib.h>

struct student
{
    char stu_name[30];
    int stu_rollno;
    int stu_age;
    unsigned long long stu_phoneno;

};


int main()
{
    struct student s;
    printf("enter your name:");
    scanf("%s",&s.stu_name);
    printf("enter your roll number:");
    scanf("%i",&s.stu_rollno);
    printf("enter your age:");
    scanf("%i",&s.stu_age);
    printf("enter your phone number:");
    scanf("%llu",&s.stu_phoneno);

    printf("Displaying the info:\n");

    printf("your name is:%s\n",s.stu_name);
    printf("your roll number is:%i\n",s.stu_rollno);
    printf("your age is :%i\n",s.stu_age);
    printf("your phone number is :%llu",s.stu_phoneno);

    return 0;
}
