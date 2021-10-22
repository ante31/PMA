#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void funk(FILE *fp, FILE *fp1, char* ime1, char* ime2)
{

    strcat(ime1, ".txt");
    strcat(ime2, ".txt");

    fp = fopen(ime1, "r");
    fp1 = fopen(ime2, "w");

    if (fp == NULL || fp1 == NULL)
    {
        printf("Nema file-a");
    }

   char c;
   int provjera;

   for(c = getc(fp); c!=EOF; c = getc(fp))
   {
       provjera = ispunct(c);
       if(!provjera && c!=' ' && c!='\n')
            fprintf(fp1,"%c", c);
   }

   fclose(fp);
   fclose(fp1);


}

int main()
{
    FILE *fp, *fp1;
    char ime1[100];
    char ime2[100];
    printf("Upisi ime prve datoteke: ");
    scanf("%s", ime1);
    printf("Upisi ime druge datoteke: ");
    scanf("%s", ime2);
    funk(fp, fp1, ime1, ime2);
}
