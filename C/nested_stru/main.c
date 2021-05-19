#include <stdio.h>
#include <stdlib.h>
struct student_basic_detail
{
    char stu_name[30];
    int stu_roll_no;

};
struct student_address
{
    char stu_street_name[30];
    char stu_Locality[30];
    int pincode;
    struct student_basic_detail eb;
};
int main()
{
    struct  student_address ea;
    printf("ENTER YOUR NAME:");
    scanf("%s",&ea.eb.stu_name);
    printf("ENTER YOUR ROLL NUMBER:");
    scanf("%i",&ea.eb.stu_roll_no);
    printf("ENTER YOUR STREET NAME:");
    scanf("%[^\n]s",ea.stu_street_name);
    printf("ENTER YOUR LOCALITY NAME:");
    scanf("%s",&ea.stu_Locality);
    printf("ENTER YOUR PINCODE:");
    scanf("%i",&ea.pincode);
    printf("_______________________________________\n");
    printf("YOUR NAME IS :%s\n",ea.eb.stu_name);
    printf("YOUR ROLL NUMBER IS :%i\n",ea.eb.stu_roll_no);
    printf("YOUR STREET NAME IS:%s\n",ea.stu_street_name);
    printf("YOUR LOCALITY NAME IS:%s\n",ea.stu_Locality);
    printf("YOUR PINCODE IS:%i\n",ea.pincode);




    return 0;
}
