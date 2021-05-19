#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    float HRA;
    float DA ;
    float total_salary;
    printf("enter your salary=");
    scanf("%i",&salary);

    if (salary<=10000 && salary>0)
    {
        printf("salary=%i\n",salary);
        HRA=(salary*20)/100;
        DA=(salary*80)/100;
        total_salary=salary+HRA+DA;
        printf("your salary is=%f",total_salary);
    }

    else if(salary<=20000 && salary>0)
    {
        printf("salary=%i\n",salary);
        HRA=(salary*25)/100;
        DA=(salary*90)/100;
        total_salary=salary+HRA+DA;
        printf("your salary is=%f",total_salary);
    }

    else if (salary>20000)
    {
        printf("salary=%i\n",salary);
        HRA=(salary*30)/100;
        DA=(salary*95)/100;
        total_salary=salary+HRA+DA;
        printf("your salary is=%f",total_salary);
    }
    else if (salary<0)
    {
        printf("salary is wrong");
    }

    else
    {
        printf("no salary");
    }

    return 0;
    }
