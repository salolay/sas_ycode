#include<string.h>
#include<stdlib.h>
#include<stdio.h>


int main()
{
    char text[20][20];
    int n;

    printf("entrez le nombre de mot du text:");
    scanf("%d", &n);

    printf("entrez le text : \n");
    for(int i = 0 ; i<n ; i++){
        scanf("%19s",text[i]);
        //getchar();
    }

    char mot[20];
    printf("entrez le mot rechercher :");
    scanf("%19s", mot);
    //getchar();


    int trouver=0;
    for( int i=0 ; i<n ; i++)
    {
        if(strcmp(text[i],mot)==0){
            printf("le mot %s est dans le text", mot);
            trouver=1;
            printf("\n indice de mot est :%d \n",i+1);
            break;
        }

    }
    if(trouver==0)
        printf("le mot n'est pas dans le text");


    return 0;
}
