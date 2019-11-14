#include <iostream>
#include <malloc.h>


int main()
{

    long * i = new long(12);

    std::cout<<*i<<"\n";


    int * j = new(i) int(16);

    std::cout<<"*j "<< *j<<"\n";

    std::cout<<"*i "<< *i<<"\n";

    delete i;
    return 0;
}
