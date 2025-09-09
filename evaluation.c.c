#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min_tableau(int tab[], int taille){
    int min=tab[0];
    for(int i=1 ; i<taille ; i++){
        if(min > tab[i])
            min=tab[i];
    }
    return min;
}
int max_tableau(int tab[], int taille){
    int max=tab[0];
    for(int i=1 ; i<taille ; i++){
        if(max < tab[i])
            max=tab[i];
    }
    return max;
}


int main()
{
    int n;
    printf("entreez la taille du tableau 1:");
    scanf("%d",&n);

    int tab1[n];
    printf("entrez les element du tableau 1: \n");
    for(int i=0 ; i<n ; i++){
        printf("tab1[%d]= ",i);
        scanf("%d", &tab1[i]);
    }

    int m;
    printf("entreez la taille du tableau 2:");
    scanf("%d",&m);

    int tab2[m];
    printf("entrez les element du tableau 2: \n ");
    for(int i=0 ; i<m ; i++){
        printf("tab2[%d]= ",i);
        scanf("%d", &tab2[i]);
    }

    printf("\n*************************\n");
    printf("affichage du tableau 1: \n");
    for(int i=0 ; i<n ; i++){
        printf("tab1[%d]=%d \n",i, tab1[i]);
    }
    printf("\n*************************\n");
    printf("affichage du tableau 2: \n");
    for(int i=0 ; i<m ; i++){
        printf("tab2[%d]=%d \n",i, tab2[i]);
    }


    int fusion[n+m];
    int taille_fusion=0;

    for(int i=0 ; i<n ; i++){
        int exist=0;
       for(int j=0 ; j<taille_fusion ; j++){
            if(fusion[j] == tab1[i]){
                exist = 1;
                break;
            }
       }
       if(exist == 0){
        fusion[taille_fusion] = tab1[i];
        taille_fusion++;
       }
    }

    for(int i=0 ; i<m ; i++){
       int exist=0;
       for(int j=0 ; j<taille_fusion ; j++){
            if(fusion[j] == tab2[i]){
                exist = 1;
                break;
            }
       }
       if(exist == 0){
        fusion[taille_fusion] = tab2[i];
        taille_fusion++;
       }
    }

    printf("*************\n");
    printf("affichage du tableau de fusion\n");
    for(int i=0 ; i<taille_fusion ; i++)
        printf("fusion[%d]= %d \n", i, fusion[i]);

    int max=max_tableau(fusion,taille_fusion);
    int min=min_tableau(fusion, taille_fusion);


    printf("\n*******************************************\n");

    printf("le max est: %d \n", max);
    printf("le min est: %d \n", min);
    printf("\n*******************************************\n");
    for(int i = 0; i < taille_fusion-1; i++){
        int max_Index = i;
        for(int j = i+1; j < taille_fusion; j++){
            if(fusion[j] > fusion[max_Index]){
                max_Index = j;
            }
        }
        int tmp = fusion[max_Index];
        fusion[max_Index] = fusion[i];
        fusion[i] = tmp;
    }

    printf("le tableau fusion apres le tri :\n");
    for(int i=0 ; i<taille_fusion
     ; i++){
        printf("fusion[%d]=%d \n", i+1,fusion[i]);
    }
    int x;
    printf("entrez le numero recherche:");
    scanf("%d", &x);
    int trouver=0;
    for(int i=0; i<taille_fusion; i++){
        if(fusion[i]== x ){
            printf("le nombre exist");
            trouver=1;
            return 0;
        }
    }
    if(trouver==0)
        printf("le nombre %d n'exist pas",x);


     return 0;
}
