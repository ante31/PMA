#include <stdio.h>

int funk()
{
    unsigned x;
    int znamenka=0;

    scanf("%d", &x);
    while(x > 1)
    {

        znamenka+=1;
        x = x / 10;
    }
    return znamenka;
}

int main()
{
    printf("%d", funk());
}
