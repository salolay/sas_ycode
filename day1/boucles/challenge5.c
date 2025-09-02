#include<stdio.h>

void main() {
    int base, exp;
    double res=1;

    printf("entrez la base: ");
    scanf("%d", &base);

    printf("entrez le'exposant: ");
    scanf("%d", &exp);

    for(int i=1; i<=exp ; i++){
        res *=base;
    }
    printf("la puissance de %d est %lf", base, res);
}
