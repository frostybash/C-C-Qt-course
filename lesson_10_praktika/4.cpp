#include <iostream>
#include <malloc.h>


int main() 
{

    double* ptd;
	int n = 0;
    std::cin>>n;
    ptd = new double[n];


    for(int i = 0;i < n;i++)
{

    ptd[i] = i;
    std::cout<<"ptd["<<i<<"]:"<<ptd[i]<<"\n";
    //delete [] ptd;
}
    delete[] ptd;
    //std::cout<<"Не удалось выделить память."<<"\n";
    return 0;
}
