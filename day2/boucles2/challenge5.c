#include<stdio.h>

int main(){
    int n, somme=0;

    printf("entrez le nombre entier : ");
    scanf("%d", &n);

    for(int i=1 ; i <= n ; i++ )
        somme += i;

    printf("la somme des %d premiers nombres naturels est : %d \n ", n, somme);

    return 0;
}