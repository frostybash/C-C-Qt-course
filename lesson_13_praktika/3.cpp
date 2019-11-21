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

class Partymaker: public ThisClass
{
    bool solution = false;
    ThsiClass()
    {
        this->solution = false;
    }
};

int main()
{
    ThisClass shaker(true);
    Partymaker();
    if (parter.solution)
        std::cout<<"Shaker shaker"<<"\n";
    return 0;
}
