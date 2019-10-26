#include <stdio.h>
#include <stdbool.h>

     int main() {
		int a = 0;
        	for(int i = 0; i < 10; i++)

                switch (i)
		{
                case 1:
		case 2:
		case 5:
		case 6: a++;
		case 8:
		case 11:
		default: a++;
		}
		printf("%d",a);
}
