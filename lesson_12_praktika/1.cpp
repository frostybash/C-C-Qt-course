#include <iostream>
//include "namespaces.h"

using namespace std;
using namespace first;   //thsi is not good for programm
using namespace second;

int val = 100;

int main()
{
    int val = 200;
    cout << first::second::val << "\n";

    return 0;
}
