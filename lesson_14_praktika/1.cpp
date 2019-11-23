#include <iostream>

class Integer{

int value;

public:

Integer(int i): value(i) {}

const Integer operator+(const Integer& rv) const {

return (value + rv.value);

}
   int getI(){return value;};

};

int main()
{
    Integer _int(100500);
    _int = _int+_int;
    int i = _int.getI();
    std::cout<<i<<"\n";
}
