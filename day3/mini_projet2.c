#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define PINK    "\033[1;95m"

typedef struct {
    char nom[50];
    char email[100];
    char numero[20];
    int id;
} centact;

centact contacts[100];
int count = 0;

void clearScreen() {
    system("cls || clear");
}

int ValideNumero(char num[]) {
    if(strlen(num) != 10) return 0;
    if(!(num[0] == '0' && (num[1] == '6' || num[1] == '7'))) return 0;
    for(int i = 0; i < 10; i++) {
        if(num[i] < '0' || num[i] > '9') return 0;
    }
    return 1;
}

int ValideEmail(char email[]) {
    int len = strlen(email);
    if(len < 10) return 0;

    if(strcmp(&email[len - 10], "@gmail.com") == 0) {
        return 1;
    }
    return 0;
}


void AjouteCentact() {
    if(count >= 100) {
        printf(RED "La liste est pleine\n" RESET);
        return;
    }

    centact *c = &contacts[count];
    printf(GREEN "---- Ajouter contact ----\n" RESET);

    printf("Nom : ");
    scanf("%s", c->nom);

    do {
        printf("Email : ");
        scanf("%s", c->email);
        if(!ValideEmail(c->email)) {
            printf(RED "Email invalide ! il doit finir par @gmail.com\n" RESET);
        }
    } while(!ValideEmail(c->email));

    do {
        printf("Numero : ");
        scanf("%s", c->numero);
        if(!ValideNumero(c->numero)) {
            printf(RED "Numero invalide ! Il doit contenir 10 chiffres et commencer par 06 ou 07\n" RESET);
        }
    } while(!ValideNumero(c->numero));

    c->id = count + 1;
    count++;

    printf(GREEN "\nContact ajoute avec succes\n" RESET);
}

void AfficherCentact(centact c) {
    printf(CYAN "---------------------------------\n" RESET);
    printf(BLUE   "ID     : %d\n" RESET, c.id);
    printf(YELLOW "Nom    : %s\n" RESET, c.nom);
    printf(PINK   "Email  : %s\n" RESET, c.email);
    printf(GREEN  "Numero : %s\n" RESET, c.numero);
    printf(CYAN "---------------------------------\n" RESET);
}

void AfficherTous() {
    if(count == 0) {
        printf(RED "Aucun contact a afficher\n" RESET);
        return;
    }

    int largeur = 78;

    for(int i = 0; i < largeur; i++) printf("=");
    printf("\n");

    printf("| %-4s | %-20s | %-30s | %-12s |\n", "ID", "Nom", "Email", "Numero");

    for(int i = 0; i < largeur; i++) printf("=");
    printf("\n");

    for(int i = 0; i < count; i++) {
        printf("| %-4d | %-20s | %-30s | %-12s |\n",
               contacts[i].id,
               contacts[i].nom,
               contacts[i].email,
               contacts[i].numero);
    }

    for(int i = 0; i < largeur; i++) printf("=");
    printf("\n");
}

void RechercherCentact() {
    char nom[50];
    printf(PINK "Nom du contact a rechercher : " RESET);
    scanf("%s", nom);

    int trouve = 0;
    for(int i = 0; i < count; i++) {
        if(strcmp(contacts[i].nom, nom) == 0) {
            printf(PINK "\nContact trouve\n" RESET);
            AfficherCentact(contacts[i]);
            trouve = 1;
            break;
        }
    }
    if(!trouve) {
        printf(RED "Aucun contact trouve avec ce nom\n" RESET);
    }
}

void ModefierCentact() {
    char nom[50];
    char confirm;
    AfficherTous();
    printf(YELLOW "\nNom du contact a modifier : " RESET);
    scanf("%s", nom);

    for(int i = 0; i < count; i++) {
        if(strcmp(contacts[i].nom, nom) == 0) {
            printf(YELLOW "Voulez-vous vraiment modifier ce contact ? (o/n) : " RESET);
            scanf(" %c", &confirm);

            if(confirm == 'o' || confirm == 'O') {
                do {
                    printf("Nouveau email : ");
                    scanf("%s", contacts[i].email);
                    if(!ValideEmail(contacts[i].email)) {
                        printf(RED "Email invalide ! il doit finir par @gmail.com\n" RESET);
                    }
                } while(!ValideEmail(contacts[i].email));

                do {
                    printf("Nouveau numero : ");
                    scanf("%s", contacts[i].numero);
                    if(!ValideNumero(contacts[i].numero)) {
                        printf(RED "Numero invalide ! Il doit contenir 10 chiffres et commencer par 06 ou 07\n" RESET);
                    }
                } while(!ValideNumero(contacts[i].numero));

                printf(YELLOW "\nModification avec succes\n" RESET);
                AfficherTous();
            } else {
                printf(GREEN "Modification annulee\n" RESET);
            }
            return;
        }
    }
    printf(RED "Le nom du contact n'existe pas\n" RESET);
}


void SupprimerCentact() {
    char nom[50];
    char confirm;
    AfficherTous();
    printf(RED "Nom du contact a supprimer : " RESET);
    scanf("%s", nom);

    for(int i = 0; i < count; i++) {
        if(strcmp(contacts[i].nom, nom) == 0) {
            printf(YELLOW "Voulez-vous vraiment supprimer ce contact ? (o/n) : " RESET);
            scanf(" %c", &confirm);

            if(confirm == 'o' || confirm == 'O') {
                for(int j = i; j < count - 1; j++) {
                    contacts[j] = contacts[j + 1];
                }
                count--;
                printf(RED "Contact supprime avec succes\n" RESET);
                AfficherTous();
            } else {
                printf(GREEN "Suppression annulee\n" RESET);
            }
            return;
        }
    }
    printf(RED "Aucun contact trouve avec ce nom\n" RESET);
}


void Menu() {
    printf(BLUE "========= Systeme de Gestion de Contacts =========\n" RESET);
    printf(GREEN   "1. Ajouter un Contact\n" RESET);
    printf(RED     "2. Supprimer un Contact\n" RESET);
    printf(YELLOW  "3. Modifier un Contact\n" RESET);
    printf(CYAN    "4. Afficher Tous les Contacts\n" RESET);
    printf(PINK    "5. Rechercher un Contact\n" RESET);
    printf(MAGENTA "6. Quitter\n" RESET);
    printf(BLUE "=================================================\n" RESET);
    printf("Votre choix : ");
}

int main() {
    int choix;
    do {
        clearScreen();
        Menu();
        scanf("%d", &choix);

        clearScreen();
        switch(choix) {
            case 1:
                AjouteCentact();
                break;
            case 2:
                SupprimerCentact();
                break;
            case 3:
                ModefierCentact();
                break;
            case 4:
                AfficherTous();
                break;
            case 5:
                RechercherCentact();
                break;
            case 6:
                printf(MAGENTA "Au revoir\n" RESET);
                break;
            default:
                printf(RED "Choix invalide!\n" RESET);
        }
         printf("\nAppuyez sur Entrer pour continuer...");
        getchar(); getchar();
    } while(choix != 6);

    return 0;
}
