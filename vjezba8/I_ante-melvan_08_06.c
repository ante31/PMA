#include <stdio.h>
#include <stdlib.h>

int funk(int dan, int misec, int godina)
{
    //provjera godine
    if(godina>=1900 && godina<=2021)
    {
        //provjera miseca
        if(misec>=1 && misec<=12)
        {
            //provjera dana
            if(godina!=2021)
            {
                if((dan>=1 && dan<=31) && (misec==1 || misec==3 || misec==5 || misec==7 || misec==8 || misec==10 || misec==12))
                    return 1;
                else if((dan>=1 && dan<=30) && (misec==4 || misec==6 || misec==9 || misec==11))
                    return 1;
                else if((dan>=1 && dan<=28) && (misec==2))
                    return 1;
                else if(dan==29 && misec==2 && (godina%400==0 ||(godina%4==0 && godina%100!=0)))
                    return 1;
                else
                    return 0;
            }
            else
            {
                if((dan>=1 && dan<=31) && misec==1 || misec==3)
                    return 1;
                else if((dan>=1 && dan<=28) && (misec==2))
                    return 1;
                else if((dan>=1 && dan<=30) && misec==4)
                    return 1;
                else if((dan>=1 && dan<=15) && misec==5)
                    return 1;
                else
                    return 0;
            }
        }
        
        else
            return 0;
    }
    else
        return 0;
}

int racun(int dan, int misec, int godina)
{
    int brojilo = 0;
    int provjera_validnosti_datuma = funk(dan, misec, godina);
    
    if (provjera_validnosti_datuma)
    {
        for(int i=godina+1; i<=2021; i++)
        {
            if(funk(dan, misec, i))
                brojilo++;
        }
    }
    return brojilo;
}

void konverter(char* string, int *dan, int *mjesec, int* godina)
{
    *dan = atoi(string);
    *mjesec = atoi(string+3);
    *godina = atoi(string+6);
}

int main()
{
    int dan, mjesec, godina;
    char string[10];
    scanf("%s", string);
    konverter(string, &dan, &mjesec, &godina);
    printf("%d", racun(dan, mjesec, godina));
}