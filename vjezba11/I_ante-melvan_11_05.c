/* Napisati rekurzivnu funkciju koja traži n-to pojavljivanje nekog znaka u stringu.*/

#include <stdio.h>
#include <string.h>
int vracaPoziciju(char *string, char c, int n, char *poz)
{
    if(poz == NULL) return -1;
    if(n==1) return poz-string+1;
    if(n>1)
    {
        poz = strchr(poz+1, c);
        vracaPoziciju(string++, c, n-1, poz);
    }
}
int main(void)
{
    char string[] = "popocatepetl";
    char c = 'o';
    int n = 2;
    char *poz = strchr(string, c);
    printf("%d", vracaPoziciju(string, c, n, poz));
}

