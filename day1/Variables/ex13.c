#include<stdio.h>

void afficherBinaire(int n) {
    if (n > 1) {
        afficherBinaire(n / 2); 
    }
    printf("%d", n % 2); 
}

 main() {
printf("Valeur binaire : ");
afficherBinaire(nombre);
printf("\n");
}