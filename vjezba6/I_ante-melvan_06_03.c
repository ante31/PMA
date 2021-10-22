#include<stdio.h>
float prosjek(int niz[],int N)
{
    float suma=0;
    for(int i=0;i<N;i++)
        suma+=niz[i];
    return suma/N;
}
void ispis(int niz[],int N)
{
    printf("{ ");
    for(int k=0;k<N;k++)
        printf("%d ",niz[k]);
    printf("}\n");
}
int unos(int niz[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("Unesite element niza:\n");
        scanf("%d",&niz[i]);
    }
}
int main()
{
    int N;
    printf("Unesite velicinu niza: \n");
    scanf("%d",&N);
    int niz[N];
    unos(niz,N);
    ispis(niz,N);
    printf("%f je prosjecna vrijednost elementa u nizu.\n",prosjek(niz,N));
    return 0;
}