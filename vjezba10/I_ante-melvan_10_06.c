#include <stdio.h>

int funk(FILE *fp)
{
    int a, b, c, d;
    int brojac = 1, redak = 1, konacniRedak = 1;
    char slovo;
    float max=0, prosjek;

    fp = fopen("t.txt", "r");

    // Provjera jel file postoji
    if (fp == NULL)
    {
        printf("Could not open file %s", "t.txt");
        return 0;
    }

    // brojanje redova
    for (slovo = getc(fp); slovo != EOF; slovo = getc(fp))
        if (slovo == '\n')
            brojac = brojac + 1;

    // moramo refreshat jer smo s brojanjem redova dosli do kraja fajla
    fclose(fp);
    fp = fopen("t.txt", "r");

    for(int i=0; i<brojac; i++)
    {
        fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);
        prosjek = (a+b+c+d)/4;

        if(prosjek > max)
        {
            max = prosjek;
            konacniRedak = redak;
        }
        redak++;
    }

    fclose(fp);
    return konacniRedak;
}

int main()
{
    FILE *fp;
    printf("Najveca prosjecna vrijednost se nalazi u %d. redu", funk(fp));
    return 0;
}
