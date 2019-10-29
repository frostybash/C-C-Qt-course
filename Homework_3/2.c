#include <stdio.h>
#include <string.h>
    int main()
    {
        char str[50];
        int i;
        printf ("vvedite slovo: \n");
        scanf ("%s", str);
        for ( i = 0; i<3; ++i)
        switch (i) 
        {
            case 1:
            break;
            case 2:
            break;
            default:
            printf ("see letter %c\n", str[i]);
          
        } 
    return 0;          
    }
