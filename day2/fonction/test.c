
#include <stdio.h>

void InverserChaine(char chaine[]) {
    int taille = 0;
    int i = 0;

    // Calcul de la taille de la cha�ne
    while (chaine[i] != '\0') {
        taille++;
        i++;
    }

    char inverser[taille + 1]; // +1 pour '\0'

    // Remplir la cha�ne invers�e
    int j = taille - 1;
    i = 0;
    while (j >= 0) {
        inverser[i] = chaine[j];
        i++;
        j--;
    }

    inverser[i] = '\0'; // Fin de cha�ne

    printf("Inverse est : %s\n", inverser);
}

int main() {
    char ch[100];
    printf("Entrez la cha�ne : ");
    scanf(" %[^\n]", ch); // espace avant %[^\n] pour ignorer les retours ligne pr�c�dents

    InverserChaine(ch);

    return 0;
}


