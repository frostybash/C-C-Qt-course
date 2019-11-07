#include <stdio.h>

int main ()
{
    int  a=0;
    stop:
    a++;
    printf("a= %i\n", a);
    if (a<100)    
        goto stop;       
    return 0;          
}
