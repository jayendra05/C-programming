#include <stdio.h>
#include <stdlib.h>
void change(int *no)
{
    (*no)+=10;

}



int main()
{
    int no=10;
    printf("before function call value of no:%i\n",no);
    change(&no);
    printf("after function call value of no:%i\n",no);
    return 0;
}
