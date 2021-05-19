#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("FILE:%s\n",__FILE__);
    printf("date:%s\n",__DATE__);
    printf("time:%s\n",__TIME__);
    printf("libe:%i\n",__LINE__);

    return 0;
}
