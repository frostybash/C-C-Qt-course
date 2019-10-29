#include <stdio.h>
#include <string.h>

    int main() 
    {
	char* str= "hello neighboard";
        FILE *fp;
        fp = fopen ("t.txt","w");
        if (fp)    
        {
            //fprintf(fp,"%s" str);
		fputs(str,fp);
        }
        fclose(fp);

    }
