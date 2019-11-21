#include <iostream>
#include <string.h>

//constexpr 
	int countArray(){
	int b ;
	std::cin<<b; 	
	return b;  // something actions
}
/*class ThisClass
{
    public:
    bool solution = true;
    ThisClass(bool solution)
    {
        solution = solution;
    }
};*/
int main()
{
	int curArray[countArray()*100];
	for(auto i :curArray)
	std::cout<<countArray[i];
	std::cout<<"\n";
    return 0;
}
