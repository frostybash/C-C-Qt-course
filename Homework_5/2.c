#include <stdio.h>
#include <string.h>



int FREQ[256]={0};
char symbol;

int main()
{
    FILE*G;
    G=fopen("text.txt","r+a");

    while((symbol=fgetc(G))!=EOF)
    {
        FREQ[symbol]++;
        printf ("%c",symbol);
    }
    symbol=fgetc(G);
    fclose(G);
    for (int i=0; i<256; i++)
    {    
        if (FREQ[i])
            printf("symbol %c : %5u time\n", i,FREQ[i]);
    }
    return 0;
	
}
