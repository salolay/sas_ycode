#include<stdio.h>

int main() {

    int n;
    int somme=0;

    printf("entrez le nombre :");
    scanf("%d", &n);

    if(n>=0){
        for(int i=0 ; i<=n ; i++)
            somme += i;

        printf("la somme est %d", somme);
    }
    else
        printf("essyez d'entrer nombre positif");

    return 0;
}
