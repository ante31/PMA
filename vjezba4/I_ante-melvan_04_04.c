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
    printf("%d", broj);
    
    do
    {
        broj = funk(broj);
        printf(", %d", broj);
        
    }while(broj!=1);
    printf(".");

}