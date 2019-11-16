#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>

int main ()
{
    std::map<std::string,int> myMap;
    myMap.insert(std::pair<std::string,int>("Str",100));
    myMap.insert(std::pair<std::string,int>("aaStr",101));
    myMap.insert(std::pair<std::string,int>("abStr",101));
    
    for(auto it=myMap.begin();it!=myMap.end();it++)
    std::cout<<it->first<<it->second<<it->third<<std::endl;
    return 0;
}
