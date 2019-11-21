#include <iostream>
#include <string.h>

template <typename T, typename E>

auto compose(T a, E b) -> decltype(a+b) /* decltype - позволяет определить тип на основе
входного параметра */

{ return a+b;}

int main()
{
    auto c = compose('2', 3.14); // c - double
    auto b = compose(8.212, 1.11); // c - double
    std::cout <<c<< "\n";
    std::cout <<b<< "\n";
    return 0;
}
