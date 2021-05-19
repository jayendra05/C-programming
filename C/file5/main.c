#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer;
    int emp_id;
    char emp_name[255];
    float salary;
    pointer=fopen("C:\\Users\\pc\\Desktop\\emp.txt","w+");
    if(pointer==NULL)
    {
        printf("file does not exits");
    }
    printf("enter your your id:");
    scanf("%i",&emp_id);
    fprintf(pointer,"id=%d\n",emp_id);
    printf("ente your name:");
    scanf("%s",&emp_name);
    fprintf(pointer,"your name is=%s\n",emp_name);
    printf("enter your salary:");
    scanf("%f",&salary);
    fprintf(pointer,"salary=%.2f\n",salary);
    fclose(pointer);



    return 0;
}
