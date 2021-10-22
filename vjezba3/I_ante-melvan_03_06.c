#include <stdio.h>



int check(char c)
{
    if (('a' <= c) && (c <= 'z'))
        return 1;
    else if (('A' <= c) && (c <= 'Z'))
        return 2;
    else if (('0' <= c) && (c <= '9'))
        return 3;
    else
        return 'O';
}

int main()
{
    char c, provjera;
    while(1)
    {
        scanf(" %c", &c);
        if(c == '.')
            break;
        provjera = check(c);
        
        switch(provjera)
        {
            case 1:
                printf("Malo\n");
                break;
            case 2:
                printf("Veliko\n");
                break;
            case 3:
                printf("%d\n", ((int)c-48)*((int)c-48));
                break;
            case 'O':
                printf("Ni slovo ni znamenka\n");
                break;
        }
    }
}

