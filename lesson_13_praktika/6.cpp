#include <iostream>
#include <string.h>

double ilonmask( int a, int b)
{
    return static_cast<double>(a)/b;
}

int * beglov( int a, int b)
{
    return reinterpret_cast<int*>(a);
}

int main (){

    std::cout<<ilonmask('a','b');
    std::cout<<beglov(777000);
}
