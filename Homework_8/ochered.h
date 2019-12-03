#include <stdio.h>
#include <stdlib.h>
#include <time.h>

n = rear-frnt+1
#define QMAX 100
struct queue {
  int qu[QMAX];
  int rear, frnt;
};

void init(struct queue *q) {
  q->frnt = 1;
  q->rear = 0;
  return;
}

void insert(struct queue *q, int x) {
  if(q->rear < QMAX-1) {
    q->rear++;
    q->qu[q->rear]=x;
  }
  else
    printf("Очередь полна!\n");
  return;
}

int isempty(struct queue *q) {
  if(q->rear < q->frnt)    return(1);
  else  return(0);
}

void print(struct queue *q) {
  int h;
  if(isempty(q)==1) {
    printf("Очередь пуста!\n");
    return;
  }
  for(h = q->frnt; h<= q->rear; h++)
    printf(«%d «,q->qu[h]);
  return;
}

int remove(struct queue *q) {
  int x;
  if(isempty(q)==1) {
    printf("Очередь пуста!\n");
    return(0);
  }
  x = q->qu[q->frnt];
  q->frnt++;
  return(x);
}


int removex(struct queue *q) {
  int x, h;
  if(isempty(q)==1) {
    printf("Очередь пуста!\n");
    return(0);
  }
  x = q->qu[q->frnt];
  for(h = q->frnt; h < q->rear; h++) {
    q->qu[h] = q->qu[h+1];
  }
  q->rear—;
  return(x);
}

int ochered() {
  struct queue *q;
  int a;
  //system(«chcp 1251»);
  //system(«cls»);
  q = (queue*)malloc(sizeof(queue));
  init(q);
  print(q);
  for(int i=0;i<8;i++) {
    printf("Введите элемент очереди: ");
    scanf("%d",&a);
    insert(q, a);
  }
  printf("\n");
  print(q);
  while(q->frnt <= q->rear) {
    a = remove(q);
    printf("\nУдален элемент %d\n", a);
    print(q);
  }
  return 0;
}
