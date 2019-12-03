#include <iostream>

class myC{
public:
    std::string str
};
template < typename T >
void my_swap ( T & first , T & second ) //T - тип, указанный в параметре шаблона
{
    T temp(first) ; //временная переменная должна быть того же типа, что и параметры
    first = second ;
    second = temp ;
}

//Функция будет принимать указатель на данные 
//и кол-во элементов массива данных
//Сам алгоритм сортировки можете посмотреть в Интернете.
//Никаких оптимизаций и проверок аргументов применять не будем, нам нужна просто демонстрация.    
template < class ElementType > //Использовал class, но можно и typename - без разницы
void bubbleSort(ElementType * arr, size_t arrSize)
{
    for(size_t i = 0; i < arrSize - 1; ++i) 
        for(size_t j = 0; j < arrSize - 1; ++j)
            if (arr[j + 1] < arr[j]) 
                my_swap ( arr[j] , arr[j+1] ) ;
}

template < typename ElementType >
void out_array ( const ElementType * arr , size_t arrSize )
{
    for ( size_t i = 0 ; i < arrSize ; ++i )
       std::cout << arr[i] << ' ' ;
    std::cout << std::endl ;
}


int main ()
{
    const size_t n = 5 ;
    int arr1 [ n ] = { 10 , 5 , 7 , 3 , 4 } ;
    double arr2 [ n ] = { 7.62 , 5.56 , 38.0 , 56.0 , 9.0 } ;
    myC arr3[n];
    for(int i=0;i<n;i++)
        arr3[n].str = str::to_string(i);
    std::cout << "Source arrays:\n" ;
    out_array ( arr1 , n ) ;//Компилятор сам выведет параметр шаблона исходя из первого аргумента функции
    out_array ( arr2 , n ) ;
    out_array ( arr3 , n ) ;
    out_array ( arr4 , n ) ;

    bubbleSort ( arr1 , n ) ;
    bubbleSort ( arr2 , n ) ;

    std::cout << "Sorted arrays:\n" ;
    out_array ( arr1 , n ) ;
    out_array ( arr2 , n ) ;
    out_array ( arr3 , n ) ;
    out_array ( arr4 , n ) ;
}
