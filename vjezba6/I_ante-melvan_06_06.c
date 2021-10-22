#include <stdio.h>
int *unos(int* n, int *lista)
{
    
    
    printf("Unesi velicinu liste: ");
    scanf("%d", n);
    lista[*n];
    int *p;
    
    for(p=lista; p != lista+*n; p++)
    {
        printf("Unesi broj liste: ");
        scanf("%d", p);
    }
    return lista;
}

void ispis(int *n, int* p)
{
    float prosjek = 0;
    for (int i=0; i<*n; i+=1)
    {
        prosjek += *(p+i);
    }
    printf("Prosjek niza je %f", prosjek/(*n));

}

int main()
{
    int n;
 
    int lista[100];
    int *p = unos(&n, lista);
    ispis(&n, p);
}