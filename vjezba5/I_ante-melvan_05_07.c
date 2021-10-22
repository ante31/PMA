#include <stdio.h>

int main()
{
    int broj_studenata, broj_vjezbi, broj_rjesenih_vjezbi, broj_rjesene_vjezbe, potencija, brojac_skroz_rjesenih=0;  
    printf("Upisi broj studenata i broj vjezbi");
    scanf("%d %d", &broj_studenata, &broj_vjezbi);
    
    //MASKA1
    int maska1 = 1;
    for(int i=1;i<=broj_vjezbi;i++)
    {
        maska1 <<= 1;
        maska1 += 1;
    }

    //MASKA0
    int maska0 = 1;
    for(int i = 0; i<broj_vjezbi; i++)
        maska0<<=1;

    int maska_studenta;
    int maska_svih_rjesenih = maska1;
    int maska_nerjsenih_vjezbi = maska0;
    
    for (int i = 1; i<=broj_studenata; i++)
    {
        maska_studenta = maska0;
        printf("\n%d. student\n", i);
        printf("Unesi broj rjesenih vjezbi: ");
        scanf("%d", &broj_rjesenih_vjezbi);
        
        for(int j=1; j<=broj_rjesenih_vjezbi; j++)
        {
            potencija = 1;
            printf("Unesi redni broj rjesene vjezbe: ");
            scanf("%d", &broj_rjesene_vjezbe);

            for(int k = 0; k<broj_rjesene_vjezbe; k++)
                potencija *= 2;

            maska_studenta = maska_studenta | potencija;
            printf("%d\n", maska_studenta);
        }
        maska_svih_rjesenih = maska_svih_rjesenih & maska_studenta;
        maska_nerjsenih_vjezbi = maska_nerjsenih_vjezbi | maska_studenta;
        if(maska_studenta==maska1)
            brojac_skroz_rjesenih+=1;
    }
    
    int provjera;
    //PROVJERA VJEZBI KOJIH SU SVI RIJESILI
    printf("Vjezbe koje su svi studenti rijesili su: ");
    for(int i=0; i<broj_vjezbi; i++)
    {
        provjera = maska_svih_rjesenih%2;
        if(provjera)
            printf("%d ", i);
        maska_svih_rjesenih >>= 1;
    }
    
    //PROVJERA KOJU VJEZBU NIJE NITKO RIJESIO
    printf("\nVjezbe koje nitko nije rijesio: ");
    for(int i=0; i<broj_vjezbi; i++)
    {
        provjera = maska_nerjsenih_vjezbi%2;
        if(!provjera)
            printf("%d ", i);
        maska_nerjsenih_vjezbi >>= 1;
    }
    
    printf("\nBroj studenata koji su sve rijesili je: %d", brojac_skroz_rjesenih);
    
}