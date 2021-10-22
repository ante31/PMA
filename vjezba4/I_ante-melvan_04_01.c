#include <stdio.h>
int funk(int n, int k)
{
    int faktor, potencirani;
    
    //Provjerava najvecu potenciju
    int kopija_k = k;
    int i=1;
    do
    {
        kopija_k *= k;
        i+=1;
    }while(kopija_k < n/k);
    
    //Ispisivanje
    printf("%d = ", n);

    for(i; i>=0; i--)
    {
        faktor = 0;

        //Potencirani broj
        potencirani = k;
        
        if(i!=0)
            for (int j=i; j>1; j--)
            {
                potencirani = potencirani*k;
            }
        else
            potencirani = 1;

        //Provjera koliko potencirani moze stat u orginalni
        if(n>=potencirani)
        {
            faktor = n/potencirani;
            n = n%potencirani;
        }

        //Provjera za printanje
        if(faktor && i!=0)
            printf("%d*%d^%d + ",faktor ,k ,i);
        
        else if(faktor && i==0)
            printf("%d*%d^%d",faktor ,k ,i);

    }
}

int main()
{
    int n, k;
    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite k: ");
    scanf("%d", &k);
    funk(n, k);
}