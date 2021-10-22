#include <stdio.h>

int funkcija(int a, int b)
{
    int varijabla = (a<=b) ? a+b: a-b;
}

int main()
{
    int a, b;
    printf("Unesi 2 broja:\n");
    scanf("%d %d", &a, &b);
    printf("%d",funkcija(a, b));
}
