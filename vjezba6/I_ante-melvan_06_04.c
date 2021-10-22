#include <stdio.h>

int funk(int *niz, int suma, int i)
{
    if(i%2==1)
        suma += niz[i];
    return suma;
}

int main()
{
    int x, broj, suma=0;
    printf("Unesi broj clanova niza: ");
    scanf("%d", &x);
    int niz[x];
    for(int i = 0; i<x; i++)
    {
        printf("Unesi %d. clan niza: ", i);
        scanf("%d", &niz[i]);
        suma = funk(niz, suma, i);
    }
    printf("%d", suma);
}