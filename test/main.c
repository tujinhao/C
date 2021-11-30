#include <stdio.h>
#pragma

int main ()

{
    const int t  = 100;

    printf(" t = %d \n",t);

    const int * pt = &t;

    //*pt = 100;
    printf(" *pt = %d \n",*pt);



    return 0;
}