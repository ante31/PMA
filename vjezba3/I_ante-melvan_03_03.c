/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int prost, n;
  
  printf("Unesi broj: ");
  scanf("%d", &n);
  
  while (1)
  {
        prost = 1;
        for (int i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                prost = 0;
                break;
            }
        }
        if(prost)
        {
            printf("%d", n);
            break;
        }
        else
        {
            n = n + 1;
        }
  }
}
