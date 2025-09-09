#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* tri_fusion(int tab1[],int taille1,  int tab2[], int taille2){
    int tailleF = taille1 + taille2;
    int *Fus = malloc(tailleF * sizeof(int));
    int i;
    for( i=0 ; i<taille1 ; i++)
        Fus[i]=tab1[i];
    for( int j=0 ; j<taille2 ; j++)
        Fus[i+j]=tab2[j];

    for(i = 0; i < taille1 + taille2; i++){
        int max_Index = i;
        for(int j = i+1; j < taille1 + taille2; j++){
            if(Fus[j] > Fus[max_Index]){
                max_Index = j;
            }
        }
        // swap après avoir trouvé l'index max
        int tmp = Fus[max_Index];
        Fus[max_Index] = Fus[i];
        Fus[i] = tmp;
    }
    return Fus;
}

int main()
{
    //int t1[]={10,15,3,5,25,96};
    //int t2[]={3,5,7,9,1,55,4};

    int n;
    printf("entrez la taille du  tableau 1 non trier : ");
    scanf("%d", &n);

    int tab1[n];

    printf("entrez les element du tableau 1:\n");
    for(int i=0 ; i<n ; i++){
        printf("tab1[%d]= ", i+1);
        scanf("%d", &tab1[i]);
    }

    int m;
    printf("entrez la taille du  tableau 2 non trier : ");
    scanf("%d", &m);

    int tab2[m];

    printf("entrez les element du tableau :\n");
    for(int i=0 ; i<m ; i++){
        printf("tab2[%d]= ", i+1);
        scanf("%d", &tab2[i]);
    }
    printf("\n \n les tableaux sans fusion: \n");
    printf("le premier tableau: \n");
    for(int i=0 ; i<n ; i++)
        printf("tab1[%d]=%d \n",i+1,tab1[i]);

    printf("le deuxiemme  tableau: \n");
    for(int i=0 ; i<m ; i++)
        printf("tab2[%d]=%d \n",i+1,tab2[i]);


    int *fusion=tri_fusion(tab1, n, tab2, m);

    printf("le tableau apres le tri :\n");
    for(int i=0 ; i<n+m ; i++){
        printf("fusion[%d]=%d \n", i+1,fusion[i]);
    }

    return 0;
}
