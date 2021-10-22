#include <stdio.h>

void funk(int d, int a, int n)
{
    for(int i=a; i<n; i+=d)
	continue;
    printf("%d", i);
}

int main()
{
    int d, a, n;
    printf("Unesite prvi član: ");
    scanf("%d", &a);
    printf("Unesite udaljenost (d): ");
    scanf("%d", &d);
    printf("Unesite n-ti broj: ");
    scanf("%d", &n);
    funk(d, a, n);
}
