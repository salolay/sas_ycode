#include<stdio.h>
#include<string.h>


int main(){

    int nbL;

    printf("Entrez le nombre de livres : ");
    scanf("%d", &nbL);

    getchar();

    char titres[100][50];
    char auteur[100][50];
    float prix[100];
    int quantite[100];

    int choix;
    do{
        printf("\n    Menu      \n");
        printf("1. Ajouter un livre \n");
        printf("2. Afficher tous les livres \n");
        printf("3. Mettre a jour  la quantite \n");
        printf("4. Supprimer un livre \n");
        printf("5. Nombre total de livres en stock \n");
        printf("0. Quitter");
        printf("Votre choix :");
        scanf("%d", &choix);
        getchar();

        switch(choix){
        case 1:
            if( nbL<100){
                printf("\n Livre %d : \n", nbL+1);

                printf("Titre :");
                scanf("%[^\n]", titres[nbL]);
                getchar();

                printf("Auteur:");
                scanf("%[^\n]", auteur[nbL]);
                getchar();

                printf("Prix : ");
                scanf("%f", &prix[nbL]);
                getchar();

                printf("Quantite : ");
                scanf("%d", &quantite[nbL]);
                getchar();

                nbL++
            }
            else{
                printf("Stocker plein ! \n");
            }
            break;
        case 2:
            if(nbL == 0){
                printf("Aucun livre dans le stock.\n")
            }else {
                printf("\n   Liste des livres    \n");
                for(int i=0; i < nbL ; i++){
                    printf("%d. %s | Prix: %.2f | Quantite: %d \n,
                           i+1, titres[i], auteur[i], prix[i], quantite[i]");
                }
                break;
            }
        case 3:

        }
    }



    for(int i = 0 ; i < nbL ; i++){
        printf("\n Livre %d : \n", i+1);

        printf("Titre :");
        scanf("%[^\n]", titres[i]);
        getchar();

        printf("Auteur:");
        scanf("%[^\n]", auteur[i]);
        getchar();

        printf("Prix : ");
        scanf("%f", &prix[i]);
        getchar();

        printf("Quantite : ");
        scanf("%d", &quantite[i]);
        getchar();
    }

    return 0;
}
