#include <stdio.h>
#define MAX(prvi, drugi, treci)((prvi>drugi)&&(prvi>treci)? prvi: (drugi>treci)? drugi: treci)
#define MIN(prvi, drugi, treci)((prvi<drugi)&&(prvi<treci)? prvi: (drugi<treci)? drugi: treci)

void funk(int prvi, int drugi, int treci, int* min, int* max)
{
    *max = MAX(prvi, drugi, treci);
    *min = MIN(prvi, drugi, treci);
}

int main() 
{
    int prvi, drugi, treci, min, max;
    printf("Unesi tri broja: ");
    scanf("%d %d %d", &prvi, &drugi, &treci);
    funk(prvi, drugi, treci, &min, &max);
    printf("Najmanji je %d, a najveci je %d", min, max);
}