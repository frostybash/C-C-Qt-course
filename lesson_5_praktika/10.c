#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main ()
	{
	    int a[3][2]={2312,3214,
			            23,32,
                        45,5621};
		int*pi=0;
        int*pi2=&a[1][1]; //adress a a[0]
        pi=pi2;
        printf ("%d\n",*pi);
        //*pi=*pi+2; // work with value
        pi=pi+1; // work with poiter
        printf ("%d\n",*pi);
	    return 0;
	}
