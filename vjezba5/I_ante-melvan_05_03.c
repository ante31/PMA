#include <stdio.h>        
    
unsigned int funk(unsigned int n)
{
   unsigned int brojac = 0;
   while (n)
   {
        brojac++;
        n >>= 1;
    }
    return brojac;
}
  
int main()
{
    unsigned int privremeni, n;
    printf("Unesi broj: ");
    scanf("%d", &n);
    unsigned int brojac = funk(n);
    
    for (int i=brojac-1; i>=0; i--)
    {
        privremeni = n >> i;
        
        printf((privremeni&1)? "1": "0");
        
    }
    
    return 0;
}