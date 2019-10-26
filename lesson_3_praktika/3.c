#include <stdio.h>
#include <stdbool.h>

     int main() {
             int i=0;
              printf("Bef: %d \n",i);
             for ( ;; ) {
              printf("In cycle: %d \n",i+=100);
             }   
               printf("aft: %d \n",i);
}
