#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 5
	int main ()
	{
		char a[MAX_SIZE][MAX_SIZE];
        	for (int x=0; x<5; x++)
		{
			for (int y=0; y<5; y++)
			{
        		a[x][y]=(char) (rand()%256-127);
        		printf("a[%d][%d]=%c\n",x, y, a[x][y]);
        		}
		}
	    return 0;
	}
