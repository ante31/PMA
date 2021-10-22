#include <stdio.h>
#define VOLUMEN(a, b, c) ((a)*(b)*(c))
#define OPLOSJE(a, b, c) (2 * (a) * (b) + 4 * (b) * (c))


struct KVADAR
{
    int a;
    int b;
    int c;
};

void funkcija(struct KVADAR kvadar, int* volumen, int* oplosje)
{
    *volumen = VOLUMEN(kvadar.a, kvadar.b, kvadar.c);
    *oplosje = OPLOSJE(kvadar.a, kvadar.b, kvadar.c);
}

int main() 
{
    struct KVADAR kvadar;
    int volumen, oplosje;
    
    printf("Unesite tri stranice kvadra: \n");
    scanf("%d %d %d", &kvadar.a, &kvadar.b, &kvadar.c);
    
    funkcija(kvadar, &volumen, &oplosje);
    printf("%d\n", volumen);

    printf("%d", oplosje);

}