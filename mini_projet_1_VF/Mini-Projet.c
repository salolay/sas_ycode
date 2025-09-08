#include<stdio.h>
#include <string.h>
int main() {
	char titres[100][50];
	char auteurs[100][50];
	float prix[100];
	int quantite[100];
	int nb;
	int n=0;
	int choix;
	do {
        printf("\e[1;34m\n=== Menu Gestion Stock ===\e[0m\n");
        printf("\e[1;34m1. Ajouter un livre\e[0m\n");
        printf("\e[1;32m2. Afficher tous les livres\e[0m\n");
        printf("\e[1;35m3. Mettre a jour quantite\e[0m\n");
        printf("\e[1;36m4. Supprimer un livre\e[0m\n");
        printf("\e[1;31m5. Nombre total de livres\e[0m\n");
        printf("\e[0;37m0. Quitter\e[0m\n");
		printf("Votre choix : ");
		scanf("%d", &choix);

		if (choix == 1) {
			printf("Combien de livres voulez-vous ajouter ? ");
            scanf("%d", &nb);
			for(int i=0; i<nb; i++) {
				printf("\n Livre N %d\n", i+1);

				printf("Titre : ");
				scanf(" %[^\n]", titres[n]);
				printf("Auteur : ");
				scanf(" %[^\n]", auteurs[n]);
				printf("Prix : ");
				scanf("%f", &prix[n]);
				printf("Quantite : ");
				scanf("%d", &quantite[n]);
				n++;
			}
		}
        if (choix == 2) {
            if (n == 0) {
                printf("\nAucun livre en stock.\n");
            } else {
                printf("\n+----+----------------------+----------------------+---------+--------+\n");
                printf("| ID | Titre                | Auteur               | Prix DH | Qte    |\n");
                printf("+----+----------------------+----------------------+---------+--------+\n");
                for (int i = 0; i < n; i++) {
                    printf("| %-2d | %-20s | %-20s | %7.2f | %-6d |\n",
                        i+1, titres[i], auteurs[i], prix[i], quantite[i]);
                }
                printf("+----+----------------------+----------------------+---------+--------+\n");
            }
        }

		if (choix == 3) {
			char t[50];
			int trouve = 0;

			printf("\nTitre du livre a mettre a jour : ");
			scanf(" %[^\n]", t);

			for (int i = 0; i < n; i++) {
				int exist = 1;
				for (int j = 0; t[j] != '\0' || titres[i][j] != '\0'; j++) {
					if (t[j] != titres[i][j]) {
						exist = 0;
						break;
					}
				}

				if (exist) {
					printf("Ancienne quantite : %d\n", quantite[i]);
					printf("Nouvelle quantite : ");
					scanf("%d", &quantite[i]);
					printf("Quantite mise a jour avec succes.\n");
					trouve = 1;
					break;
				}
			}

			if (!trouve) {
				printf("Livre introuvable.\n");
			}
		}
		if (choix == 4) {
			char ts[50];
			int trouveS = 0;

			printf("\nTitre du livre a supprimer : ");
			scanf(" %[^\n]", ts);

			for (int i = 0; i < n; i++) {
				int ex = 1;
				for (int j = 0; ts[j] != '\0' || titres[i][j] != '\0'; j++) {
					if (ts[j] != titres[i][j]) {
						ex = 0;
						break;
					}
				}

				if (ex) {

					for (int j = i; j < n - 1; j++) {
						strcpy(titres[j], titres[j+1]);
						strcpy(auteurs[j], auteurs[j+1]);
						prix[j] = prix[j+1];
						quantite[j] = quantite[j+1];
					}
					n--;
					printf("Livre supprime avec succes.\n");
					trouveS = 1;
					break;
				}
			}

			if (!trouveS) {
				printf("Livre introuvable.\n");
			}
		}

		if (choix == 5) {
			int total = 0;

			for (int i = 0; i < n; i++) {
				total += quantite[i];
			}

			printf("\nTotal de livres en stock : %d\n", total);
		}
	} while (choix != 0);
	return 0;
}
