#include<stdio.h>
int funk(int n)
{
    if (n <= 1)
        return n;
    return funk(n-1) + funk(n-2);
}

int main ()
{
    int n;
    printf("Unesite broj: ");
    scanf("%d, &n);
    printf("%d", funk(n));
    getchar();
    return 0;
}
