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
    int som=0;
    float moy;

    for(int i=0 ; i<n ; i++)
        som += tab[i];
    moy = (float) som / n;


    return 0;
}
