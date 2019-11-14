#include <iostream>
#include <malloc.h>

int main ()
{
    int n=0, m=0;
    std::cin>>n;
    std::cin>>m;
    float **ptrarray = new float *[n];
    for( int count=0;count<n;count++)
    {
        ptrarray[n] = new float [m];
    }

}
