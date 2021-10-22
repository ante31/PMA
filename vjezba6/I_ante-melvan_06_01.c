#include <stdio.h>
int funk1(int* m,int* n)
{
    if ((*m)%2==0)
    {
        *m = *m/2;
    }
    *n = 3*(*n)+1;
}

int main()
{
    int m, n;
    printf("Unesi m: ");
    scanf("%d", &m);
    printf("Unesi n: ");
    scanf("%d", &n);
    funk1(&m, &n);
    printf("m je %d\nn je %d", m, n);
}
