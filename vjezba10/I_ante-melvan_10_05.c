#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y, z;
}trokut;

trokut* funk(FILE *fp, trokut* tr, int n)
{
    fp = fopen("z.txt", "wb");

   int i;

   for(i=0; i<n; i++)
   {
       printf("Unesite x y z kordinate %d trokuta: ", i+1);
       scanf("%d %d %d", &tr->x, &tr->y, &tr->z);

       printf("Zaprimljno\n");

       fprintf("%d %d %d\n", tr->x, tr->y, tr->z);
   }

   fclose(fp);


}

int main()
{
    int n;
    trokut* tr;
    FILE *fp;

    printf("Unesite broj trukuta: ");
    scanf("%d", &n);


    funk(fp, tr, n);
}

