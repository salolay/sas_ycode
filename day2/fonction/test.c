
#include <stdio.h>

void InverserChaine(char chaine[]) {
    int taille = 0;
    int i = 0;

    // Calcul de la taille de la chaîne
    while (chaine[i] != '\0') {
        taille++;
        i++;
    }

    char inverser[taille + 1]; // +1 pour '\0'

    // Remplir la chaîne inversée
    int j = taille - 1;
    i = 0;
    while (j >= 0) {
        inverser[i] = chaine[j];
        i++;
        j--;
    }

    inverser[i] = '\0'; // Fin de chaîne

    printf("Inverse est : %s\n", inverser);
}

int main() {
    char ch[100];
    printf("Entrez la chaîne : ");
    scanf(" %[^\n]", ch); // espace avant %[^\n] pour ignorer les retours ligne précédents

    InverserChaine(ch);

    return 0;
}


