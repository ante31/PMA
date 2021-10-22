#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ime[20];
    char prezime[20];
    unsigned jmbag;
    char grupa;
    int postotak;
}studenti;


void unos(studenti* student, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("Unesi ime, prezime, JMBAG, grupu i postotak\n");
        scanf("%s %s %d %c %d", &student[i].ime, &student[i].prezime, &student[i].jmbag, &student[i].grupa, &student[i].postotak);
    }
}

studenti* filtriranje(studenti* student, int n)
{
    int i, j=0;
    studenti* odabrani = (studenti*)malloc(n*sizeof(student));
    for(i=0; i<n; i++)
    {
        if(student[i].postotak >= 40)
        {
            odabrani[j] = student[i];
            j++;
        }
    }
    return odabrani;
}

void theChosenOnes(studenti* student, int n)
{
    int i;
    printf("Studenti koji su prosli kolokvij su:\n");
    for(i=0; i<n; i++)
        printf("%s %s %u %c %d\n", student[i].ime, student[i].prezime, student[i].jmbag, student[i].grupa, student[i].postotak);
}

int main()
{
    int n;
    studenti* lista;
    printf("Unesi broj studenata: ");
    scanf("%d", &n);
    lista = (studenti*)malloc(n*sizeof(studenti));
    unos(lista, n);
    studenti* odabrani = filtriranje(lista, n);
    theChosenOnes(odabrani, n);
}