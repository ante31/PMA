#include <stdio.h>
#include <string.h>

int funk(char *str, char *str2)
{
    if(strlen(str)!=strlen(str2))
        return 0;
    else
    {
        int i, j, k, x, y, n = strlen(str), uvjet, prepis_uvjet;
        
        //Opca petlja za izvrtit slova u stringu "vatra"
        for(i=0; i<n; i++)
        {
            //Ako uvjet na bilo kojem slovu nije ispunjen returnat ce 0, vidi doli
            uvjet = 0;
            
            //Petlja za izvrtit slova u stringu "trava"
            for(j=0, k=0; j<n; j++)
            {
                prepis_uvjet=0;
                
                //Provjera podudaranja prvog i drugog stringa
                if(str[i]==str2[j])
                {
                    printf("Uvjet je postignut! %c == %c\n", str[i], str2[j]);
                    uvjet = 1;
                    
                    //Ovo je petlja koja ce iz drugog stringa izbrisat doticno slovo
                    for(x=0, y=0; x<=n; x++)
                    {
                        if(str2[x]!=str2[j] || prepis_uvjet)
                        {
                            str2[y]=str2[x];
                            y++;
                        }
                        else
                            //Bez prepis uvjeta gornja for petlja bi skinila sva ista slova koja se podudaraju, ugl makni ga pa ces vidit
                            prepis_uvjet=1;
                    }
                    k++;
                    printf("Nova rijec je %s\n", str2);
                    break;
                }
            }
            if(!uvjet)
                return 0;
        }
        return 1;
    }
}

int main()
{
    char string[] = "vatra";
    char string2[] = "traga";
    funk(string, string2)? printf("Anagram"): printf("Nije anagram");

    return 0;
}