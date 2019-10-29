#include <stdio.h>

       void f(int a)
        {
        a=0;
        }
    int main() 
    {
        int a=0;
        printf("a: $d\n" , a);
        f(a);
        printf("a: $d\n" , a);
        return 0;    
    }
