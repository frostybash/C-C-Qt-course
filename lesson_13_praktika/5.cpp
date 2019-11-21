#include <iostream>
#include <string.h>

class ThisClass
{
    public:
    bool solution = true;
    ThisClass(bool solution)
    {
        solution = solution;
    }
};



int main()
{
	
    //ThisClass shaker(true);
    try { // начало блока try
    std::cout << "Inside try block\n";
    int *p1 = new int[500000000000000000000000000000000000000000000];
    throw 100; // генерация ошибки
    std::cout << "This will not execute";
    }
    catch (std::bad_alloc) { // перехват ошибки
    std::cout << "Caught an exception -- value is: ";
    std::cout << "This will not execute";}
    return 0;
}
