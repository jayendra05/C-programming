#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column;
    printf("enter a number of rows:");
    scanf("%i",&row);
    printf("enter a number of column:");
    scanf("%i",&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
//        printf("\n");
        for(int j=0;j<column;j++)
        {
            printf("enter a value of arr[%i][%i]:",i,j);
            scanf("%i",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        printf("\n");
        for(int j=0;j<column;j++)
        {
            printf("%i \t",arr[i][j]);
        }
    }

    return 0;
}
