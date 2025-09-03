#include<stdio.h>

int main(){

    int lignes;
    printf("entrez le nombre de ligne : ");
    scanf("%d", &lignes);

    for(int i=1 ; i <= lignes ; i++){
        int nbEtoiles = 2*i-1;

        for( int s=0 ; s < lignes-i; s++ )
            printf(" ");

        for( int j=0 ; j < nbEtoiles ; j++ )
            printf("*");

        printf("\n");

    }

    return 0;
}