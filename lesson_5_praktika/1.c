#include <stdio.h>
	int main ()
	{
		int arr_10[10];
		int *pi;
		pi= &arr_10[4];
		for(pi=4; pi<7; pi++)
		{
			printf( "address ykazatelya: %d\n" , pi);
		}
	return 0;
	}
