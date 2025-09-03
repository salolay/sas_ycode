#include<stdio.h>

int main() {

    int n;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tableau[n];

    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    int somme=0;
    for(int i = 0; i < n; i++) {
        somme += tableau[i];
    }

    printf("la somme du tableau est : %d", somme);


    return 0;
}
