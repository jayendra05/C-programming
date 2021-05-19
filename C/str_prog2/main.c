#include <stdio.h>
#include <stdlib.h>
struct student
{
    char stu_stream[20];
    int stu_rollno;
    char stu_name[50];
    int stu_age;
    char stu_city[50];
    float stu_CGPA;
};
int main()
{
    int input;
    printf("ENTER THE NUMBER OF STUDENT:");
    scanf("%i",&input);
    struct student s[input];
    for(int i=1;i<=input;i++)
    {
        printf("ENTER YOUR STREAM NAME:");
        scanf("%s",&s[i].stu_stream);
        printf("ENTER YOUR  NAME:");
        scanf("%s",&s[i].stu_name);
        printf("ENTER YOUR ROLL NUMBER:");
        scanf("%i",&s[i].stu_rollno);
        printf("ENTER YOUR AGE:");
        scanf("%i",&s[i].stu_age);
        printf("ENTER YOUR CITY:");
        scanf("%s",&s[i].stu_city);
        printf("ENTER YOUR CGPA:");
        scanf("%f",&s[i].stu_CGPA);
    }
    printf("DISPLAYING THE INFORMATION OF STUDENT:%i\n",input);
    for(int i=1;i<=input;i++)
    {
        printf("YOUR STREAM NAME IS:%s\n",s[i].stu_stream);
        printf("YOUR ROLL NUMBER  IS:%i\n",s[i].stu_rollno);
        printf("YOUR  NAME IS:%s\n",s[i].stu_name);
        printf("YOUR AGE IS:%i\n",s[i].stu_age);
        printf("YOUR CITY NAME IS:%s\n",s[i].stu_city);
        printf("YOUR CGPA IS:%f\n",s[i].stu_CGPA);
    }
    return 0;
}
