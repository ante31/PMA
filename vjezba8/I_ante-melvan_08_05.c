#include <stdio.h>
#include <string.h>

char* funk(char* string1, char* string2, char* string3)
{
    if((strlen(string1)<strlen(string2)) && (strlen(string1)<strlen(string2)))
    {
        strncat(string3, string2, strlen(string2));
        return string3;
    }
    else if((strlen(string2)<strlen(string3)) && (strlen(string2)<strlen(string1)))
    {
        strncat(string1, string3, strlen(string3));
        return string1;
    }
    else
    {
        strncat(string2, string1, strlen(string1));
        return string2;
    }
}

int main() {
    char string1[]="Najduzaaaaaa";
    char string2[]="Srednjaaa";
    char string3[]="Mala";
    printf("%s", funk(string1, string2, string3));
    
}
