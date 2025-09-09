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

    for(int i = 0; i < n-1; i++){
        int max_Index = i;
        for(int j = i+1; j < n; j++){
            if(tab[j] > tab[max_Index]){
                max_Index = j;
            }
        }
        // swap après avoir trouvé l'index max
        int tmp = tab[max_Index];
        tab[max_Index] = tab[i];
        tab[i] = tmp;
    }

    printf("le tableau apres le tri :\n");
    for(int i=0 ; i<n ; i++){
        printf("tab[%d]=%d \n", i+1,tab[i]);
    }
    return 0;
}

