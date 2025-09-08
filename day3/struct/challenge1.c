#include<stdio.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
}personne;


int main(){

    personne p1;
    printf("entrez les infos:\n");
    printf("le nom :");
    scanf("%[^\n]",p1.nom);
    getchar();

    printf("le prenom :");
    scanf("%[^\n]",p1.prenom);
    getchar();

    printf("l'age :");
    scanf("%d",&p1.age);

    printf("le nom est: %s, le prenom est: %s et lage est %d",p1.nom, p1.prenom, p1.age);

    return 0;
}
