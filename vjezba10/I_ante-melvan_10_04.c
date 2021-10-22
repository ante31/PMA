#include <stdio.h>

void funk(FILE *fp)
{
    int broj;
   char rijec[100];

    fp = fopen("t.txt","r");
   if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   }

   while(1)
   {
      fscanf(fp, "%d", &broj);
      fscanf(fp, "%s", rijec);


      if(feof(fp))
         break ;

      for(int i=0; i<broj; i++)
        printf("%s", rijec);
      printf("\n");
   }
   fclose(fp);
}

int main () {
   FILE *fp;

   funk(fp);
}
