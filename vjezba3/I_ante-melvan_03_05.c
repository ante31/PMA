#include <stdio.h>

int funk(int broj)
{
    int novi = 0;
    for(int i = 10; i<=100000; i*=10)
    {
        novi += (broj % i);
    
        if ((broj%i)/(i/10) < 9)
        {
            novi += (i/10);
        }
        broj /= i;
        broj *= i;
    }
    return novi;
}


int main()
{
    int broj, decimale;
    while(1)
    {
        scanf("%d", &broj);
        if((9999 > broj) || (broj > 99999))
        {
            continue;
        }
        
        printf("%d", funk(broj));
        break;
        
    }
}