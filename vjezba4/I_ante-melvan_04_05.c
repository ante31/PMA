
#include <stdio.h>
 
int funk(int dan, int misec, int godina)
{
    //provjera godine
    if(godina>=1900 && godina<=2019)
    {
        //provjera miseca
        if(misec>=1 && misec<=12)
        {
            //provjera dana
            if((dan>=1 && dan<=31) && (misec==1 || misec==3 || misec==5 || misec==7 || misec==8 || misec==10 || misec==12))
                printf("Validan -");
            else if((dan>=1 && dan<=30) && (misec==4 || misec==6 || misec==9 || misec==11))
                printf("Validan -");
            else if((dan>=1 && dan<=28) && (misec==2))
                printf("Validan -");
            else if(dan==29 && misec==2 && (godina%400==0 ||(godina%4==0 && godina%100!=0)))
                printf("Validan -");
            else
            {
                printf("Nije validan\n");
                return 0;
            }
            
            if((((dan>=1 && dan<=31) && (misec==1 || misec==3 || misec==5 || misec==7 || misec==8 || misec==10 || misec==12)) ||
                ((dan>=1 && dan<=30) && (misec==4 || misec==6 || misec==9 || misec==11))) && ((godina%400==0 ||(godina%4==0 && godina%100!=0))))
                printf(" prijestupna\n");
            else
                printf(" nije prijestupna");
        }
        else
        {
            printf("Nije validan\n");
        }
    }
    else
    {
        printf("Nije validan\n");
    }
 
    return 0;    
}

int main()
{
    int dan, misec, godina;
     
    printf("Unesite datum: ");
    scanf("%d.%d.%d",&dan,&misec,&godina);
    funk(dan, misec, godina);
}

