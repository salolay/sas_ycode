#include<stdio.h>
int main() 
{
    float c, k;

    printf("Entrez la température en Celsius : ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("La température en Kelvin est : %.2f\n", k);

    return 0;
}
