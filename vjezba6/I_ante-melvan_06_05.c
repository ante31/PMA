#include <stdio.h>

int main()
{
    int x, broj, m, n, suma=0;
    int niz[100];
    printf("Unesi broj clanova niza: ");
    scanf("%d", &x);
    
    for(int i = 0; i<x; i++)
    {
        printf("Unesi %d. clan niza: ", i+1);
        scanf("%d", &niz[i]);
    }
    printf("Unesi m: ");
    scanf("%d", &m);
    printf("Unesi n: ");
    scanf("%d", &n);
    
    {
        int temp;
        if(m>n)
        {
            temp=n;
            n=m;
            m=temp;
        }
    }
    
    
    for(int i = m; i<=n; i++)
    {
        suma = suma + niz[i-1];
    }
    printf("%d", suma);
    return 0;
}
