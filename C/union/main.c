#include <stdio.h>
#include <stdlib.h>

union student
{
    char stu_name[30];
    int stu_roll_no;

}s;


int main()
{
    printf("ENTER YOUR NAME:");
    scanf("%s",&s.stu_name);
    printf("ENTER YOUR ROLL NUMBER:");
    scanf("%i",&s.stu_roll_no);
    printf("YOUR NAME IS:%s\n",s.stu_name);
    printf("YOUR ROLL NUMBER IS:%i",s.stu_roll_no);

    return 0;
}
