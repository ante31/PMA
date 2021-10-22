int funk(int broj)
{
    int znamenka = 1;
    int x = broj;
    while(x>9)
    {
        znamenka*=10;
        x = x / 10;
    }
    printf("%d^3 je %d.",broj, broj*broj*broj);
    if ((broj%(10*znamenka))==(broj*broj*broj%(10*znamenka))) return 1; 
    else 
    return 0; 
}

int main(void)
{
    int provjera;
     do
     { 
        int broj;
        printf("Upisite neki broj\n");
        scanf("%d",&broj); 
        if (broj == 0) 
            break; 
        else 
        { 
            provjera = funk(broj); 
            if (provjera) 
                printf("Broj je trimorfan.\n"); 
            else 
                printf("Broj nije trimorfan.\n");
        }
     }while(1);
}