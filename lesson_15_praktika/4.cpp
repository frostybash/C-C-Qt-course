#include <iostream>
class A
{
public:
    A(){std::cout<<"A";};
    virtual ~A() {;};
    virtual void f() = 0;
};
class B: virtual public A
{
public:
     A::~A(){std::cout<<"cons ZZZ";}
    B(){std::cout<<"B";};
    virtual void f() {std::cout<<"BM";};
};
class C: virtual public A
{
public:
    C(){std::cout<<"C";};
    void f() {std::cout<<"CM""\n";};
};
class D: public B, public C
{
public:
    D(){std::cout<<"D""\n";};
    //void f() {std::cout<<"Bz";};
    void f() {std::cout<<"CM""\n";};
};
int main(){   
   D d;
       // d.f();
C c;
//A a;
    std::cout<<sizeof(d);
}
