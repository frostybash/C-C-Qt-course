#include <stdio.h>
#include <stdlib.h>

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
    char z[255]={0};
    char i=0;
    FILE * Z = fopen( "1.txt", "r" );
    if (!Z)
    {
        fputs( "Error opening fiile\n", stderr );
        return 1;
    }
    
    while ( fscanf (Z, "%c", z[i] != EOF))
    {
        i++;
    }
    printf ("size of the data in file:", sizeof(a));
    fclose(Z);
    return 0;    
}
