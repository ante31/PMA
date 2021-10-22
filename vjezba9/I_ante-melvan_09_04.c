#include <stdio.h>
struct VRIME 
{
   int sekunde;
   int minute;
   int sati;
};

void funkcija(struct VRIME pocetak, struct VRIME kraj, struct VRIME *razlika) 
{
   while (kraj.sekunde < pocetak.sekunde) {
      --kraj.minute;
      kraj.sekunde += 60;
   }
   
   while (kraj.minute < pocetak.minute) {
      --kraj.sati;
      kraj.minute += 60;
   }
 
   razlika->sekunde = kraj.sekunde - pocetak.sekunde;
   razlika->minute = kraj.minute - pocetak.minute;
   razlika->sati = kraj.sati - pocetak.sati;
}

int main() {
   struct VRIME pocetak, kraj, razlika;

   printf("Unesite pocetni iznos vremena (sati, minute, sekunde) \n");
   scanf("%d %d %d", &pocetak.sati, &pocetak.minute, &pocetak.sekunde);

   printf("Unesite zasvrsni iznos vremena (sati, minute, sekunde) \n");
   scanf("%d %d %d", &kraj.sati, &kraj.minute, &kraj.sekunde);

   //RAZLIKA
   funkcija(pocetak, kraj, &razlika);
   printf("\nVremenska razlika: %d:%d:%d - ", kraj.sati, kraj.minute, kraj.sekunde);
   printf("%d:%d:%d ", pocetak.sati, pocetak.minute, pocetak.sekunde);
   printf("= %d:%d:%d\n", razlika.sati, razlika.minute, razlika.sekunde);
}