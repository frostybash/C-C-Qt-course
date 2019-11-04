#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 5
	int main ()
	{
	    char * str = "stri\0ng";
        printf("%s\n", str);	
	    return 0;
	}
