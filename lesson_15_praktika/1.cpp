#include <iostream>
class A
{
public:
    void f(){std::cout<<"A";};
};
class B: public A
{
public:
    void f(){std::cout<<"B";};
};
class C: public A
{
public:
    void f(){std::cout<<"C";};
};
class D: public B, public C
{
public:
//    void f(){std::cout<<"D";};
};
int main(){   
   D d;
    d.f();
}
