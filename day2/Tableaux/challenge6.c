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

    int x;

    printf("Entrez le facteur ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        tableau[i] *= x;
    }

    printf("Les nouveau tableau :\n");
    for(int i = 0; i < n; i++) {
        printf("tableau[%d]=%d\n", tableau[i]);
    }
    return 0;
}
