#include <stdio.h>

typedef int _int;
char a[10];

struct s
    {
	int a;
    char m;
    char z[1050];
    };
typedef struct s _s;

int main()
{
    _int a = 10050500;
    printf (" %d\n",a);	
    return 0;
}
