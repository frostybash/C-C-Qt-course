#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NMAX 10
struct stack {
    float elem[NMAX];
    int top;
    int priority;    
};


void task_menu()
{
    printf( "//////////////////////// welcome to the task menu ///////////////////////\n");
}

void init_stek(struct stack *stk) {    
  stk->top = 0;
}

void push(struct stack *stk, float f) {
  if(stk->top < NMAX) {
    stk->elem[stk->top] = f;
    stk->top++;
  } else
    printf("Стек полон, количество элементов: %d !\n", stk->top);
}

void pop(struct stack *stk) {
  float elem;
  if((stk->top) > 0) {
    stk->top—;
    elem = stk->elem[stk->top];
    return(elem);
  } else {
    printf("Стек пуст!\n");
    return(0);
  }
}

void stkTop(struct stack *stk) {     ///peek function
  if((stk->top) > 0) {
    return( stk->elem[stk->top-1]);
  } else {
    printf("Стек пуст!\n");
    return(0);
  }
}

int gettop(struct stack *stk) {    ///take element from top of the stack
 return(stk->top);}
