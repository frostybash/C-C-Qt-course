#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main ()
	{
	    int ival=1024;
		int*pi=0;
        int*pi2=&ival;
        pi=pi2;
        *pi=*pi+2; // work with value
        pi=pi+2; // work with poiter
        printf ("%d\n",*pi);
	    return 0;
	}
