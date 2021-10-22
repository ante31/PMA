#include <stdio.h>
int funk(int n)
{
    int kopija = n;
    int suma = 0, produkt = 1;
    
    while(kopija>0)
    {
        suma += (kopija%10);
        produkt *= (kopija%10);
        kopija/=10;
    }
    
    printf("Suma znamenki je %d\n", suma);
    printf("Produkt znamenki je %d\n", produkt);
}

int main()
{
    int n;
    printf("Unesi broj");
    scanf("%d", &n);
    funk(n);
    return 0;
}
