#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tableau[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &tableau[i]);
    }

    int max = tableau[0];
    for(int i = 1; i < n; i++) {
        if(tableau[i] > max) max = tableau[i];
    }

    printf("Le maximum est: %d\n", max);
    return 0;
}
