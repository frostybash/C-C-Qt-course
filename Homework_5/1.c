#include <stdio.h>
#include <stdlib.h>


int main()
{
	char arr[1000];
	for (int i=0;i<1000;i++)
	{
		arr[i] = rand() % 255;
	}
	for (int i=0;i<1000;i++)
	{
		printf("a[%d]:%c",i,arr);
	}
	printf("\n");
	return 0;
}
