#include<stdio.h>

int main() {

    int n;
    printf("essyez d'entrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("entrez les elements du tableau : \n");
    for(int i=0; i<n ; i++){
        printf("tab[%d]= \n",i);
        scanf("%d", &tab[i]);
    }
    int valeurRemp, nouvelleVal;

    printf("essyez d'entrer la valeur remplaçer: ");
    scanf("%d", &valeurRemp);

    printf("essyez d'entrer la nouvelle valeur : ");
    scanf("%d", &nouvelleVal);

    for(int i=0; i<n ; i++){
        if(tab[i]== valeurRemp)
            tab[i]=nouvelleVal;
    }
    printf("le nouveau tableau : \n");
    for(int i=0 ; i<n ; i++)
        printf("tab[%d]=%d ",i,tab[i]);

    return 0;
}
