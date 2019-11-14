#include <iostream>
#include <malloc.h>


int main() 
{

    double* ptd;
	int n = 0;
    std::cin>>n;
    ptd = (double *)malloc(10 * sizeof(double));

    if(ptd != NULL)

{

    for(int i = 0;i < n;i++){

    ptd[i] = i;
    std::cout<<"ptd["<<i<<"]:"<<ptd[i]<<"\n";
}
} 
    else 
    std::cout<<"Не удалось выделить память."<<"\n";
    return 0;
}
