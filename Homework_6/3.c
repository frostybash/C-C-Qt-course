#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Create_file()
{
    int a[100000];
    FILE * Z= fopen ( "1.txt", "w+t" ); 
    for( int i=0; i<100000; i++ )
    {  
        fprintf( Z,"%d", a[i]);   
    }
    fclose(Z); 
}
        

int main ()
{
    Create_file();
    long size;
    FILE * Z = fopen( "1.txt", "r" );
    if (!Z)
    {
        fputs( "Error opening fiile\n", stderr );
        return 1;
    }
    fseek (Z, 0, SEEK_END);   
    size=ftell (Z);   
    fclose(Z);
    printf ("number of symbols: %ld\n", size);
    return 0;    
}
