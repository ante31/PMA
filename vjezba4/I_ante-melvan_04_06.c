#include <stdio.h>
 
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
                    return 2;
                else
                    return 0;
            }
            else
            {
                if((dan>=1 && dan<=31) && misec==1 || misec==3)
                    return 1;
                else if((dan>=1 && dan<=28) && (misec==2))
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
    int rad_funkcije = 1;
    int brojilo = 0;
    int provjera_validnosti_datuma = funk(dan, misec, godina);
    
    if (provjera_validnosti_datuma)
    {
        for(int i=godina+1; i<=2021; i++)
        {
            if(funk(dan, misec, i)==2)
                rad_funkcije = 0;
                
            if(funk(dan, misec, i))
                brojilo++;
            
        }
    }
    printf("%d\n", brojilo);
    return rad_funkcije;
}

int main()
{
    int dan, misec, godina, rad_funkcije=1;
    while (rad_funkcije)
    {
        printf("Unesite datum rođenja: ");
        scanf("%d %d %d",&dan,&misec,&godina);
        rad_funkcije=racun(dan, misec, godina);
    }
}