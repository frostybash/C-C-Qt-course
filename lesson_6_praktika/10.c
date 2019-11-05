#include <stdio.h>

struct s
    {
	int a;
    char m;
    char z[1050];
    };
char array[103020];

int main()
{
    int a=10050500;
    int * b=10000000;
    printf (" %d\n",sizeof(a));	
    printf (" %d\n",sizeof(b));
	printf (" %d\n", sizeof(struct s));	
    printf (" %d\n", sizeof(array));
    return 0;
}
