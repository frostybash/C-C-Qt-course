#include <iostream>
class A
{
public:
    A(){std::cout<<"A";};
};
class B: virtual public A
{
public:
    B(){std::cout<<"B";};
};
class C: virtual public A
{
public:
    C(){std::cout<<"C";};
};
class D: public B, public C
{
public:
    D(){std::cout<<"D""\n";};
};
int main(){   
   D d;
}
