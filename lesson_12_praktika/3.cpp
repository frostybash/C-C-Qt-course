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
    myC(int _pref)
    {
        pref = _pref;
    }
    myC():pref(100), str ("list of initialization"){};
    //tyt kakie to deistvi9

};
    //myC():pref(100), str ("list of initialization"){};

int main()
{
    myC newC;    
    std::cout << "Pref: " << newC.getPref()
              << "Str: " << newC.getStr()
              << '\n';
   /* newCC myC (0, "Newstring");    
    std::cout << "Pref: " << newC.getPref()
              << "Str: " << newC.getStr()
              << '\n'; */ 
    myC newCC(123,"2123445frf");
    std::cout << "Pref: " << newCC.getPref()
              << "Str: " << newCC.getStr()
              << '\n';      
    return 0;
}
