#include <stdio.h>    
	int fact(int num) 
    	{
	    if (num <=1)
		return 1;
		else return num*fact(num-1);
        }
       int main()
	{
	long long int a,r;
	scanf("%lld",&a);
	r=fact(a);
	printf("%lld! = %lld\n");
	return 0;
        }
       

    
