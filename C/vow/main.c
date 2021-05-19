#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char name[20];
    int count=0;
    printf("enter your name:");
    scanf("%s",&name);
    for(int i=0;i<strlen(name);i++)
    {
            if(name[i]=='a' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='e')
        {
            count++;
        }
    }
      printf("vowels are:%i", count);
    return 0;
}
