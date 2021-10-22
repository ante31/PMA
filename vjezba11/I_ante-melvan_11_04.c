#include <stdio.h>

int funk(int n)
{
    if(n<1)
        return 0;

    printf("%d\n", n);
    funk(n-2);

}

int main()
{
    int n;
    printf("Unesi broj: ");
    scanf("%d", &n);
    n%2==0? funk(n-1): funk(n);
}
