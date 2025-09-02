#include <stdio.h>

int main() {
    int nombre, chiffre1, chiffre2, chiffre3, chiffre4;

    printf("Entrez un nombre entier a quatre chiffres : ");
    scanf("%d", &nombre);

    
    chiffre4 = nombre % 10;      
    nombre = nombre / 10;
    chiffre3 = nombre % 10;      
    nombre = nombre / 10;
    chiffre2 = nombre % 10;      
    nombre = nombre / 10;
    chiffre1 = nombre % 10;      


    printf("Le nombre inverse est : %d%d%d%d\n", chiffre4, chiffre3, chiffre2, chiffre1);

    return 0;
}