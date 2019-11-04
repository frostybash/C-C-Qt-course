#include <stdio.h>

void recur(int day); // prototip function
int day;
int mounth;
int year;
int num;

int main()
{
    printf ("enter day of your birthday: ");
    scanf  ("%d", &day);
    printf ("enter mounth of your birthday: ");
    scanf  ("%d", &mounth);
    printf ("enter year of your birthday: ");
    scanf  ("%d", &year);
    recur(day);
    puts ("recur is over!\n");    
}
void recur(int day)
{
    num=day+mounth+year;
    printf("%d\n",num);
    num=0;
    year++;
    if (year>2000)
        return;
    else
       recur(num); 

}
