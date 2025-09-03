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

    int tabCopy[n];
    for(int i=0; i<n ; i++){
        tabCopy[i]=tab[i];
    }

    printf("tableau copier est : ");
    for(int i=0 ; i<n ; i++)
        printf("%d", tabcopy[i]);

    return 0;
}
