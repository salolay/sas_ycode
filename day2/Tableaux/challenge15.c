#include<stdio.h>

int main() {

    int n, m;


    printf("essyez d'entrer la taille du tableau 1: ");
    scanf("%d", &n);

    printf("essyez d'entrer la taille du tableau 2: ");
    scanf("%d", &m);

     int tab1[n], tab2[m];
    printf("entrez les elements du tableau 1: \n");
    for(int i=0; i<n ; i++){
        printf("tab1[%d]= \n",i);
        scanf("%d", &tab1[i]);
    }

    printf("entrez les elements du tableau 2: \n");
    for(int i=0; i<m ; i++){
        printf("tab2[%d]= \n",i);
        scanf("%d", &tab2[i]);
    }
    int res[n+m];

    for(int i=0; i<n ; i++){
        res[i]=tab1[i];
    }
    for(int i=0; i<m ; i++){
        res[n+i]=tab2[i];
    }
    printf("le tableau fusionner est: \n");
    for(int i=0 ; i<n+m ; i++)
        printf("Resultat[%d]= %d",i,res[i]);

    return 0;
}
