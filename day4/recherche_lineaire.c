#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    printf("entrez la taille du tableau  : ");
    scanf("%d", &n);

    int tab[n];

    printf("entrez les element du tableau :\n");
    for(int i=0 ; i<n ; i++){
        printf("tab[%d]= ", i+1);
        scanf("%d", &tab[i]);
    }
    int x;
    printf("entrez la valeur recherché  : ");
    scanf("%d", &x);

    for(int i=0 ; i<n ; i++){
        if(tab[i]==x){
            printf("la valeur est exist dans le tableau");
            return 0;
        }
    }
    printf("la valeur %x n'est pas exist dans le tableau");

    return 0;
}
