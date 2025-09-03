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

    int x;
    printf("entrez element rechercher :");
    scanf("%d", &x);

    for(int i=0; i<n ; i++){
        if(tab[i]==x){
             printf("le nombre est existe");
             return 0;
        }
    }
    printf("le nombre %d n'existe pas", x);
    return 0;
}
