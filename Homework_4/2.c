#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{ 
    char name_of_file[255];
    FILE *fp;
    printf(" enter name of files\n");
    printf ("one symbol for file:\n");
    for (int i=1; i<=10; i++)
    {
        fgets(name_of_file,3,stdin);
        fp=fopen(strcat(name_of_file,".txt"),"w+r");
            printf("file create\n");
            int str;
            for (int k=0; k<1001; k++)
            {
                int str= rand() % 1000;
                fprintf(fp,"%d",str);
            }
    fclose(fp);
    }
}
