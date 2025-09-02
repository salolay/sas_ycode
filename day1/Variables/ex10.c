#include <stdio.h>
#include <math.h> 

#define PI 3.14159 

int main() {
    float rayon;

    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &rayon);

    
    float volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    printf("Le volume de la sphere est : %.2f\n", volume);

    return 0;
}