#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    printf("entrez le tableau non trier : ");
    scanf("%d", &n);

    int tab[n];

    printf("entrez les element du tableau :\n");
    for(int i=0 ; i<n ; i++){
        printf("tab[%d]= ", i+1);
        scanf("%d", &tab[i]);
    }

    for( int i=0 ; i<n ; i++ ){
        for(int j=0; j<n-1-i ; j++){
                if(tab[j] > tab[j+1]){
                    int tmp=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=tmp;
                }
        }
    }
    printf("le tableau apres le tri :\n");
    for(int i=0 ; i<n ; i++){
        printf("tab[%d]=%d \n", i+1,tab[i]);
    }
    return 0;
}
