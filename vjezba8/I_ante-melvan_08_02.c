
#include <stdio.h>
#include <string.h>

char* funk(char *str)
{
    int i, j, n = strlen(str) ;   
    for(i=0, j=0; i<=n; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            str[j]=str[i];
            j++;
        }
    }
    return str;
}

int main() 
{
    char string[] = "heeeeejhjhjeeeeeeeeeeeeeeeeeghiiiiiiiiiiiiiin";
    printf("%s", funk(string));
    
    return 0;
}