#include <stdio.h>

int main()
{
	const char *a ="a";
    a="b";
    char const *c ="c";
    c="c";
    char * const x ="x";
    //x="c"; // this is not working
    
    return 0;
}
