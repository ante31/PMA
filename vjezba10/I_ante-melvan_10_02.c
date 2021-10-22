#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* funk(FILE* fp, int *broj)
{
    char c, *string, n=0;

    fp = fopen("z.txt", "r");

    fseek(fp, 0, SEEK_END);
    *d = ftell(fp);
    string = (char*)malloc(*broj*sizeof(char));

    fseek(fp, 0, SEEK_SET);
    while((c = fgetc(fp))!=EOF)
    {
        if(islower(c))
        {
            string[n] = c;
            n++;
        }
    }
    string[n] = '\0';

    fclose(fp);

    return string;
}

int main(void)
{
    FILE *fp;
    int broj=0;
    char* string;


    if (!fp)
        printf("Nema file-a\n");

    string = funk(fp, &broj);
    printf("%s", string);

    fclose(fp);
    free(string);

    return 0;
}
