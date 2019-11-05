#include <stdio.h>

int opt=1;
int main()
{
	start:
        if (opt==1)
        {
            printf ("1");
            goto start;
            //printf ("1");
        }
        else
        {
            printf ("2");
            //break;
        }
    return 0;
}
