#include <stdio.h>
#include <string.h>

int funk(char *string, char *slovo)
{
    char* poz = strchr(strchr(string, slovo)+1, slovo);

    return poz? poz-string+1: -1;
}


int main()
{
    char string[] = "ONoffON";
    char slovo = 'f';
    printf("%d", funk(string, slovo));
}
