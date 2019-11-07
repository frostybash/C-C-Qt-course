#include <stdio.h>
typedef int celoe;

volatile  celoe z=1;
int main ()
{
    const celoe k=1;
    celoe b;
    celoe  a;
    celoe c;
    stop:
    c=z+k+b+a;
    c++;
    printf("sum= %d\n", c);
    printf("size= %ld bite\n", sizeof(c));
    if (c<10)    
        goto stop;       
    return 0;          
}
