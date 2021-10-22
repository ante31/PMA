#include<stdio.h>
#include<math.h>

int funk(int broj,int k)
{
    int novi = 0;
    for(int i=0;i<=6;i++)
    {
        novi += 1;
        novi <<= 1;
    }
    novi += 1;
    novi <<= 8*(k-1);
    novi = novi|broj;
    return novi;
}
int main()
{
    int broj, k;
    printf("Unesi broj i bajt: ");
    scanf("%d %d", &broj, &k);
    printf("%d",funk(n,k));
}