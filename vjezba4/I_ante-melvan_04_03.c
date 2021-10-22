#include <stdio.h>

int funk(int broj)
{
    if(broj%2==0)
        return broj/2;
    else
        return 3*broj+1;
}

int main()
{
    int broj;
    scanf("%d", &broj);
    printf("%d", funk(broj));
}