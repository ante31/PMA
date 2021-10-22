#include <stdio.h>

void funk(int *velicina)
{
    FILE* datoteka = fopen("t.txt", "r");

    if (!datoteka)
        return 1;

    fseek(datoteka, 0, SEEK_END);
    *velicina = ftell(datoteka);

    fclose(datoteka);
    fseek(datoteka,0,0);
}

int main(void)
{
    int n = 0;

    funk(&n);
    printf("%d", n);

    return 0;
}
