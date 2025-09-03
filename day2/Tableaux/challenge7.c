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

    //tri par selection
    for(int i = 0 ; i < n ; i++){
        int minI = i;
        for(int j=0 ; j < i+1 ; j++){
            if( tab[j] < tab[minI]){
                int temp = tab[i];
                tab[i] = tab[minI];
                tab[minI] = temp;
            }
        }
    }

    printf("le tableau apres le tri :\n");
    for(int i = 0 ; i < n ; i++) {
        printf("tableau[%d]=%d\n", tab[i]);
    }

    return 0;
}
