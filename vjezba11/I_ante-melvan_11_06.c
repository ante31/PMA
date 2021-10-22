/*Napisati tri funkcije sa istim prototipom: unesi_niz, ispisi_niz, sortiraj_niz_uzlazno,
sortiraj_niz_silazno za unos, ispis i sortiranje niza podataka tipa struct ucenik.
Sortiranje izvesti funkcijom qsort. Učenike možete čitati iz datoteke.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ime[50];
    char prezime[50];
    int ocjena;
}ucenik;

void ispisi_niz(ucenik* uc, int duljina)
{
    int i;
    for(i=0; i < duljina; i++)
    {
        printf("%s %s %d\n", uc[i].ime, uc[i].prezime, uc[i].ocjena);
    }
    puts("\n");
}

ucenik* unesi_niz(FILE* fp, int* duljNiza)
{
    int i=0, d=10;
    ucenik* student = (ucenik*)malloc(d*sizeof(ucenik));
    if(!student) return NULL;
    while (fscanf(fp, "%s %s %d\n", student[i].ime, student[i].prezime, &student[i].ocjena) != EOF)
    {
        if (++i > *duljNiza)
        {
            d *= 2;
            student = (ucenik*) realloc(student, d * sizeof(ucenik));
            if (!student) return NULL;
        }
    }
    *duljNiza = i;
    return student;
}

int sortiraj_niz_uzlazno(const void* p, const void* q)
{
    ucenik* u1 = (ucenik*)p;
    ucenik* u2 = (ucenik*)q;
    return u1->ocjena - u2->ocjena;
}

int sortiraj_niz_silazno(const void* p, const void* q)
{
    ucenik* u1 = (ucenik*)p;
    ucenik* u2 = (ucenik*)q;
    if((u1->ocjena - u2->ocjena)<0) return 1;
    if((u1->ocjena - u2->ocjena)>0) return -1;
    else return 0;
}


int main(void)
{
    int d;
    FILE* fp = fopen("t.txt", "r");
    ucenik* uc = NULL;
    uc = unesi_niz(fp, &d);
    fclose(fp);

    qsort(uc, d, sizeof(ucenik), sortiraj_niz_uzlazno);
    ispisi_niz(uc, d);

    qsort(uc, d, sizeof(ucenik), sortiraj_niz_silazno);
    ispisi_niz(uc, d);
}
