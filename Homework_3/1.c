#include <stdio.h>
        int main () 
        {
            int x=1;
            int y=1;
            int z=2;
            int sum=0;
            do
                {
                x++;
                printf ("see x: %4d\n", x);
                while ( y<3 )
                    {
                    y++;
                    printf ("see y: %4d\n", y);
                    for (; sum<100; x++)
                        {
                        sum= sum+1;
                        printf ("see sum: %4d\n", sum);
                        }
                    }
                 }while ( x<100);
        printf ("see sum: %4d\n", sum);
        return 0;                  
        }
