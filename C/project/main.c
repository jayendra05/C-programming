#include <stdio.h>
#include <stdlib.h>

struct stud
{
    float stud_cgpa;
    char stud_stream[100];
    char stud_name[100];
    int stud_roll_no;
    int stud_age;
};

int main()
{
    int num,subject,marks,average,sum=0;
    printf("Enter the number of student you want to create:");
    scanf("%d",&num);
    struct stud s[num];
    for(int i=1;i<=num;i++)
    {
        //for values from user
        printf("Enter your stream:");
        scanf("%s",s[i].stud_stream);
        printf("Enter your name:");
        scanf("%s",s[i].stud_name);
        printf("Enter your roll no:");
        scanf("%i",&s[i].stud_roll_no);
        printf("Enter your age:");
        scanf("%i",&s[i].stud_age);
        //for the subject ...so we use loop
        printf("Enter number of subject:");
        scanf("%i",&subject);
        for(int a=1;a<=subject;a++)
        {
            printf("enter marks of subject:");
            scanf("%i",&marks);
            if(marks<0 ||marks>100)
            {
                printf("Invalid marks");
            }
            sum=sum+marks;

        }
        average=marks/subject;
        if(marks>=0 || marks<=100)
        {
            printf("the sum of the marks is:%i\n",sum);
        }
        else if(marks<0 || marks>100)
        {
            printf("Invalid marks");
        }

    }


    printf("Displaying the information for students %d is:\n",num);

    for(int i=1;i<=num;i++)
    {
        printf("Your Stream is: %s\n",s[i].stud_stream);
        printf("Your name is: %s\n",s[i].stud_name);
        printf("Your roll number is: %d\n",s[i].stud_roll_no);
        printf("Your sum is:%i\n",sum);
        if(s[i].stud_age<18||s[i].stud_age>50)//    printf("Displaying the information for students %d is:\n",num);
//    printf("Displaying the information for students %d is:\n",num);

        {
            printf("Invalid Age\n");
        }
        else
            {
                printf("Your age is: %d\n",s[i].stud_age);
            }
        if(s[i].stud_cgpa<0||s[i].stud_cgpa>10)
        {
            printf("Invalid CGPA\n");
        }
        else
            {
                printf("Your CGPA is: %d\n",s[i].stud_cgpa);
            }
    }


    return 0;
}//    printf("Displaying the information for students %d is:\n",num);

