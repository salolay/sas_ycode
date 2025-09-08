#include<stdio.h>

int Factorielle(int a)
{
    int factorielle=1;
    if(a==0)
        return factorielle;
    for(int i=1 ; i<=a ; i++){
        factorielle *=i;
    }
    return factorielle;
}

int main()
{
    int x;
    printf("entrez le premier nombre : ");
    scanf("%d", &x);

    int fact=Factorielle(x);
    printf("le factorielle de %d est %d",x,fact);
    return 0;
}
