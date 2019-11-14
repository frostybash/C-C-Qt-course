#include <iostream>
#include <malloc.h>


int main() 
{

    double* ptd;

    ptd = (double *)malloc(10 * sizeof(double));

    if(ptd != NULL)

{

    for(int i = 0;i < 10;i++){

    ptd[i] = i;
    std::cout<<ptd[i];
}
} 
    else 
    std::cout<<"Не удалось выделить память.";
    return 0;
}
