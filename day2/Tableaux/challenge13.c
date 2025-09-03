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

    printf("les elements impaire au tableau sont : \n");
    for(int i=0 ; i<n ; i++)
        if(tab[i]%2 == 1)
            printf("%d ",tab[i]);

    return 0;
}
