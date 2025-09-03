#include <stdio.h>
#include <string.h>

int main() {

    int nbLIVRE;
    printf("entrez le nombre de livre :");
    scanf("%d",&nbLIVRE);

    char titre[100], auteur[50], prix[20], quantite[10] ;

    printf("entrez les livres :\n");

    for(int i=0 ; i < nbLIVRE ; i++){
        printf("les informations de livre %d:\n", i+1);

        printf("le titre : ");
        scanf("%s", titre);

        printf("l'auteur :");
        scanf("%s",auteur);

        printf("le prix :");
        scanf("%s",prix);

        printf("la quantite :");
        scanf("%s",quantite);
        n++;
    }

    printf("\n--- Liste des livres ---\n");
    for (int i = 0; i < nbLIVRE; i++) {
        printf("Livre %d : %s, %s, Prix: %s, Quantite: %s\n",
               i + 1, titre[i], auteur[i], prix[i], quantite[i]);
    }

    return 0;
}
