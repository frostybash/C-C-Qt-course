#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main ()
	{
	    int ival=1024;
		int*pi=0;
        int*pi2=&ival;
        pi=pi2;
        pi2=0;
        printf ("%d\n",*pi);
	    return 0;
	}
