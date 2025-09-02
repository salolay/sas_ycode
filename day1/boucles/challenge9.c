#include <stdio.h>

int main() {
    int n, cmp = 0;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n == 0) cmp = 1;
    while (n != 0) {
        n /= 10;
        cmp++;
    }

    printf("Nombre de chiffres = %d\n", cmp);
    return 0;
}

