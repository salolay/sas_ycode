#include<stdio.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int note[10];
}etudiant;

int main()
{
    etudiant etd ;
    printf("entrez les infos:\n");
    printf("le nom :");
    scanf("%[^\n]",etd.nom);
    getchar();

    printf("le prenom :");
    scanf("%[^\n]",etd.prenom);
    getchar();

    int n;
    printf("entrez nonbre des notes: \n");
    scanf("%d",&n);

    printf("entrez les notes: \n");
    for(int i=0 ; i < n ; i++){
        printf("note %d:  ",i+1);
        scanf("%d",&etd.note[i]);
    }

    printf("-------------les infos suivantes:-------------\n");
    printf("le nom est: %s\n", etd.nom);
    printf("le prenomnom est: %s\n", etd.prenom);
    printf("les notes sont : \n");
    for(int i=0 ; i<n ; i++){
        printf("note %d:  %d\n",i+1,etd.note[i]);
    }

    return 0;
}
