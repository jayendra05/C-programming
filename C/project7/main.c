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
int sum=0;
// main function starting point of program.....

int main()
{
    char username[255];
    char password[255];
    char user_type[255];
    printf("Enter username:");
    scanf("%s",&username);
    printf("Enter password:");
    scanf("%s",&password);
     printf("Enter User Type:");
    scanf("%s",&user_type);
    printf("your user name is :%s\n",username);
    printf("your password is :%s\n",password);
    if(strcmp(username,"test")==0 && strcmp(password,"123")==0 && strcmp(user_type,"admin")==0)
    {
        int num,subject,marks,average,percent,sum=0;
        printf("Enter the number of student you want to create:");
        scanf("%d",&num);
        struct stud s[num];

        for(int i=1;i<=num;i++)
        {
//to take values from user............................................................
        printf("_________________________________________________\n");
        printf("Enter your stream:");
        scanf("%s",s[i].stud_stream);
        printf("Enter your name:");
        scanf("%s",s[i].stud_name);
        printf("Enter your roll no:");
        scanf("%i",&s[i].stud_roll_no);
        printf("Enter your age:");
        scanf("%i",&s[i].stud_age);
//.....................................................................................


//to take number of subject from the user ...........................................
        printf("Enter number of subject:");
        scanf("%i",&subject);
        for(int a=1;a<=subject;a++)
        {
            printf("Enter marks of subject:");
            scanf("%i",&marks);
            if(marks>0 && marks<100)
            {
                sum=sum+marks;
            }
            else if(marks<0 || marks>100)
            {
                return 0;
            }
        }
        printf("The sum of marks is:%i\n",sum);

//....................................................................................


//For the finding the percentage and average..........................................
        average=sum/subject;
        percent=average;
        printf("The Average of the Marks for student is:%i\n",average);
        printf("The Percentage of the Student is:%i\n",percent);
        if(percent>=75 && percent<100)
        {
            printf("Student pass with distinction:%i\n",percent);
        }
        else if(percent>=60 && percent<75)
        {
            printf("Student pass with first class:%i\n",percent);
        }
        else if(percent>=50 && percent<60)
        {
            printf("Student pass with second class:%i\n",percent);
        }
        else if(percent>=35 && percent<50)
        {
            printf("Student just pass:%i\n",percent);
        }
        else if (percent<35 && percent>=0)
        {
            printf("Fail:%i\n",percent);
        }
        else if(percent<0)
        {
            printf("error:%i\n",percent);
        }
        else if(percent>100)
        {
            printf("error :%i\n",percent);
        }
        else
        {
        }
//....................................................................................


//....................................................................................

//....................................................................................
    sum=0;
    printf("_________________________________________________\n");


}
    printf("_________________________________________________\n");


// for displaying the information for students........................................
    printf("Displaying the information for students %d is:\n",num);
//...................................................................................


// For outout........................
    for(int i=1;i<=num;i++)
    {
        printf("Stream of Student is: %s\n",s[i].stud_stream);
        printf("Name of Student is: %s\n",s[i].stud_name);
//.....................................................................................

// for student roll no.................................................................
        if(s[i].stud_roll_no>0)
        {
           printf("Roll of Student number is: %i\n",s[i].stud_roll_no);
        }
        else if(s[i].stud_roll_no<0)
        {
            printf("Invalid roll number\n");
        }
// Condition to check the age of user and student age will be in range of 18 t0 50.....
      if(s[i].stud_age<18||s[i].stud_age>50)
        {
            printf("Invalid Age\n");
        }
        else
        {
            printf("Age of Student is:%i\n",s[i].stud_age);
        }
        printf("_________________________________________________\n");
    }

//..................................................................................
    }

    else{


        printf("You do not have access to this application");
    }
    return 0;
}
