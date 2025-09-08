#include<stdio.h>

typedef  struct {
    float x,y;
}point;

int main()
{
    point p;
    point *pt=&p;
    printf("entrez les coordonnee de point :\n");
    printf("entrez x: ");
    scanf("%f",&pt->x);

    printf("entrez y: ");
    scanf("%f",&pt->y);

    printf("le point entrer: (%.2f,%.2f)",pt->x,pt->y);


    return 0;
}
