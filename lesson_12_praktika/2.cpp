#include <iostream>

class myC
{
    int pref;
protected: 
    std::string str;
public:
    std::string getStr(){return str;};
    int getPref(){return pref;};
    myC(int _pref, std::string _str)
    {
        pref = _pref;
        str = _str;
    }

};

int main()
{
    myC newC(0, "Newstring");
    
    std::cout << "Pref: " << newC.getPref()
              << "Str: " << newC.getStr()
              << '\n';
        
    return 0;
}
