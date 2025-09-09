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
    int debut=0, fin=n-1;
    int EST_Trouver=0;
    int i=0;
    while(debut <= fin){
        int milieu= (int)(debut +fin)/2;
        if( tab[milieu] == x ){
            printf("La valeur %d exist a la position %d (indice %d",tab[milieu], milieu, i+milieu);
            EST_Trouver=1;
            break;
        }else {
            if(tab[milieu]<x){
                    debut=milieu+1;
            }
            else
                fin=milieu-1;
        }
    }
    if( EST_Trouver = 0)
        printf("la valeur %d n'exist pas dans le tableau ", x);

    return 0;
}
