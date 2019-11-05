#include <stdio.h>

int main()
{
    int i=100;
    label:
    i++;
    printf("i: %d\n",i);
    if (i<102)
        goto label;
    printf("i: %d\n",i);
    return 0;
}
