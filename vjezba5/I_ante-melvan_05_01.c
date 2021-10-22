#include <stdio.h>

int funk(int a, int b, int c)
{
    int najmanji;
    
    najmanji = (a<=b) ? a: b;
    najmanji = (najmanji<=c) ? najmanji: c;
    return najmanji;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Unesi 3 broja:\n");
    
    printf("%d",funk(a, b, c));
}
