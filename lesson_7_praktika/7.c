#include <stdio.h>

struct myS{
    int i;
    char c;
};

void handlerStructs( struct myS State,struct myS State2 )
{
    State.i = State2.i /2;
    State.c = ++State.c;
    printf (" %d %c\n", State.i, State.c);
}
int main()
{
    struct myS State[10];
    State[0].i = 100500;
    State[0].c = 'A';
    printf (" %d %c\n", State[0].i, State[0].c);
	for( int j=1;j<10;j++)
    {
        handlerStructs(State[j], State[j-1]);
        //printf (" %d %c\n", State.i, State.c);
    }  
    //printf (" %d %s\n", curS.i, curS.s);
    
    return 0;	
}
