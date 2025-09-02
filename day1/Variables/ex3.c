#include<stdio.h>
int main() {
    float kilo, yards;

    printf("Entrez la distance en kilometres : ");
    scanf("%f", &kilo);

    yards = kilo * 1093.61;

    printf("La distance en yards est : %.2f\n", yards);

    return 0;
}