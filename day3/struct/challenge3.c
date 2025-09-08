#include<stdio.h>

typedef struct{
    float largeur, longueur;
}rectangle;

float AireRectangle(rectangle R)
{
    return R.largeur*2 + R.longueur*2;
}

int main()
{
    rectangle Rect;
    printf("entrez largeur :");
    scanf("%f", &Rect.largeur);

    printf("entrez longueur ");
    scanf("%f", &Rect.longueur);

    float aire=AireRectangle(Rect);
    printf("l'aire du rectangle est : %.2f", aire);
    return 0;
}
