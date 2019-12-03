#include <iostream>

template < typename T >
struct my_class
{
    //#1
    template < typename U > friend class my_class ;

    template < typename U >
    my_class ( const U & val = U() ) : m_x (val)
    {}

    //#2
    my_class ( const my_class & src ) : m_x ( src.m_x )
    {}

    //#3
    template < typename U >
    my_class ( const my_class<U> & src ) : m_x ( src.m_x )
    {}

    my_class & operator= ( const my_class & rhv )
    {
        m_x = rhv.m_x ;
    }

    template < typename U >
    my_class & operator= ( const my_class<U> & rhv )
    {
        m_x = rhv.m_x ;
    }

    template < typename U >
    bool operator== ( const my_class<U> & rhv )
    {
        return m_x == rhv.m_x ;
    }

    T getX() const
    {
        return m_x ;
    }

private:
    T m_x ;
} ;


int main()
{
    my_class<int> obj1(6) ;
    my_class<short> obj2 (8) ;
    my_class<double> obj3(obj1) ;
    obj3 = obj2 ;
    std::cout << (obj1 == obj2) << std::endl ;
    std::cout << (obj3 == obj1) << std::endl ;
}
