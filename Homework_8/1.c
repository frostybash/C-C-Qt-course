#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stek.h"
#include "ochered.h"



int b;
void task_menu()
{
    printf( "//////////////////////// welcome to the task menu ///////////////////////\n");
    printf( " select item \n");
    printf( " 1. Press 1 to select stek \n");
    printf( " 2. Press 2 to select ochered \n");
    scanf( "%d", &b);
}

int main()
{
    task_menu();
    switch (b)
    {
        case 1:
        stek();
        break;
        case 2:
        ochered();
        break;
        default:
        printf( " incorrect enter \n");
    }
    
}




















