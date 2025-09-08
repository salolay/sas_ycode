#include<stdio.h>
#include<string.h>

typedef struct
{
    char titre[100], auteur[100];
    int annee;
}livre;

livre creerLivre(char *titr, char *aut, int ans){
    livre l;
    strcpy(l.titre, titr);
    strcpy(l.auteur, aut);
    l.annee=ans;
    return l;
}

int main()
{
    livre L=creerLivre("SAS", "Olaya azzam", 2025);
    printf("information de livre:\n");
    printf("le titre est : %s\n", L.titre);
    printf("l'auteur est : %s\n", L.auteur);
    printf("L'annee est : %d\n", L.annee);
    return 0;
}
