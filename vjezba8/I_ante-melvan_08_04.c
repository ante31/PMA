#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *funk(char *str)
{
    char slash='/';
    int i,j=0,prvipoz,drugipoz;
    char* doubleSlash=strstr(str,"//");

    char* zadnjiSlash=strchr(doubleSlash+2,slash);


    prvipoz=(int)(doubleSlash-str);
    drugipoz=(int)(zadnjiSlash-str);
    char* novi;
    novi=(char*)malloc((drugipoz-prvipoz)+1*sizeof(char));
    for(i=prvipoz+2; i<drugipoz;i++,j++)
    {
        novi[j] = str[i];
    }
    novi[j] = '\0';
    return novi;
}
int main()
{
    char *str2;
    char str[] = "http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";
    str2 = funk(str);
    printf("%s\n", str2);
    return 0;
}
