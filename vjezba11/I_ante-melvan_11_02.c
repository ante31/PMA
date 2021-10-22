#include <stdio.h>

int funk(int zbroj, int brojac, int m, int n)
{
    if(brojac<=n)
    {
        if(brojac%m==0)
            zbroj+=brojac;
        brojac++;
        return funk(zbroj, brojac, m, n);
    }

    return zbroj;
}

int main()
{
    int n, m, zbroj = 0, brojac = 1;
    printf("Unesi n: ");
    scanf("%d", &n);
    printf("Unesi m: ");
    scanf("%d", &m);

    printf("%d", funk(zbroj, brojac, m, n));
}
