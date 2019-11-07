#include <stdio.h>

struct myS{
    int i;
    char c;
};

int main()
{
    struct myS State[10];
    State[0].i = 100500;
    State[0].c = 'A';
    printf (" %d %c\n", State[0].i, State[0].c);
	for( int j=1;j<10;j++)
    {
        State[j].i = State[j-1].i/2;
        State[j].c = ++State[j-1].c;
        printf (" %d %c\n", State[j].i, State[j].c);
    }  
    //printf (" %d %s\n", curS.i, curS.s);
    
    return 0;	
}
