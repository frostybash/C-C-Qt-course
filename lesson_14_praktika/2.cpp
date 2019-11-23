#include <iostream>

class Item
{
public:
    int name;
    int price;
    int weight;
    int pokypka()
    {
        std::cin<<"enter price of the pbject:" &price;
        std::cin<<"enter price of the pbject:" &weight;
        std::cin<<"enter price of the pbject:" &name;
    }
};
class Item : public Buy
{  
    int pr; 
    Item object;
    object.name= name;
    object.price= price;
    object.weight= weight;
    int Sum()
    {
        
        pr= object.name+object.price+object.weight;
        std::cout<<pr;
    }
};
class Buy : public Check
{
     Sum();
};
int main()
{
    return 0;
}
