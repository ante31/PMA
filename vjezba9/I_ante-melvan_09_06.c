#include <stdio.h>

#define UDIO(r, g, b) ((r>=g) && (r>=b) && (r<256) && (g<256) && (b<256))? 1: 0

struct KOORDINATE
{
    int x, y, z, r, g, b;
};

void funkcija(struct KOORDINATE tocka, int* brojac)
{
    *brojac += UDIO(tocka.r, tocka.g, tocka.b);
}

int main(void)
{
    struct KOORDINATE tocka;

    int i, n, brojac = 0;
    
    printf("Koliko tocaka zelis unijet: \n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        printf("Unesi x, y, z: \n");
        scanf("%d %d %d", &tocka.x, &tocka.y, &tocka.z);
        printf("Unesi r, g, b (ne smije biti veci od 255): \n");
        scanf("%d %d %d", &tocka.r, &tocka.g, &tocka.b);
        
        funkcija(tocka, &brojac);
    }

    printf("%d tocaka ima dominantnu crvenu boju", brojac);

}