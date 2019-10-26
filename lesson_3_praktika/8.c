#include <stdio.h>
#include <stdbool.h>

     int main() {
             bool t = true;
             bool f = false;

       	     if (!(!(1||f)&&(0||0))||(t||f)){
              printf("in if 1");
             if (!(!(1||f)&&(0||0))||(t||f))
              printf("in if 2");
                else printf("In if 3"); 
              }
            else printf("In if 4");

}
