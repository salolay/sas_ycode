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

    for(int i=0 ; i<n/2 ; i++ ){
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }

    printf("Le tableau inversé est : \n");
    for(int i=0 ; i < n ; i++ ){
        printf("%d", tab[i]);
    }
    printf("\n");

    return 0;
}
