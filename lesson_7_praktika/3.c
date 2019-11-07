#include <stdio.h>
enum A{ a1=-99,b1,c1};
enum B{ a2=33,b2,c2};

int main()
{

    printf("%d %d %d \n",A::a1, B::b2, A::c1);
    return 0;
   
}
