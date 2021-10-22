#include <stdio.h>

int funk(int n, int k)
{
    int kopija_n = n, potencija=1;
    
    unsigned int brojac = 0;
    
    for(int i = 0; i<k; i++)
        potencija *= 2;
    
    n = n | potencija;
    
    return n;
    
}

int main()
{
    int n, k;
    printf("Unesi broj: ");
    scanf("%d", &n);
    printf("Unesi k: ");
    scanf("%d", &k);
    printf("%d", funk(n, k));
}