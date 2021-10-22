#include <stdio.h>

int funk()
{
    int broj;
    int suma=10;

    scanf("%d", &broj);
    do
    {
 
        suma = 0;
        
        while(broj > 0)
        {
            suma = suma + broj%10;
            broj = broj / 10;
        }
        broj=suma;
        
    }while(suma>9);
    return suma;
}

int main()
{
    printf("%d", funk());
}
