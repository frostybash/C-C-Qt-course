#include <iostream>
#include <malloc.h>

void memoryLeaker(int n=1)
{
    char *c = new char[n];
}
int main() 
{   
    //int n = 0;
    //std::cin>> n;
    //for( int i=0; i<n; i++)
    while(1)
    memoryLeaker(50000);

    
    return 0;
}
