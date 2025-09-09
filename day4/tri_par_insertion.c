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

    for(int i=1 ; i<n ; i++){
        int tmp=tab[i];
        int j=i-1;
        while(tmp <tab[j] && j>=0){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1]=tmp;
    }

    printf("le tableau apres le tri :\n");
    for(int i=0 ; i<n ; i++){
        printf("tab[%d]=%d \n", i+1,tab[i]);
    }
    return 0;
}
