#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char user_name[255];
   char password[50];
   printf("Enter user name: ");
   scanf("%s",&user_name);
   printf("Enter your password: ");
   scanf("%s",&password);
   printf("%s",password);
   if(strcmp(user_name,"test")==0 && strcmp(password,"123")==0)
   {
       printf("Welcome");

   }

   else{

        printf("Invalid Credentials");
   }


}
