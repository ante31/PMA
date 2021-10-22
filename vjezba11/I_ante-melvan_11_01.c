#include <stdio.h>

int funk(int n)
{
    if(!n)
        return 0;

    funk(n/2);
    printf("%d", n%2);
}

int main()
{
    int n;
    printf("Unesi broj: ");
    scanf("%d", &n);
    funk(n);
}
