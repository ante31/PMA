#include <stdio.h>



funk(int n, int novi)
{
    if(n==0)
        return novi;

    novi=novi*10+n%10;
    funk(n/10, novi);


}

int main()
{
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    n==funk(n, 0)? printf("da"): printf("ne");
}
