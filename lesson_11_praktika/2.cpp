#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

int main ()
{
    std:: vector <std::string> myVector;

    //myVector.push_back("String");
    myVector.push_back("String1");
    myVector.push_back("String2");
    
    std::vector<std::string>::iterator it= myVector.end();
 
    myVector.insert(it,"New string");
    if (myVector.empty())
    std:: cout <<"EMPTY!";

    for( std::vector<std::string>::iterator it =myVector.begin();
    it!=myVector.end();
    it++)
    std::cout<<*it<<std::endl;   

    return 0;
}
