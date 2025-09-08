#include<stdio.h>

int MaximumDeuxEntier(int a, int b){
    return a>b ? a:b ;
}


int MinimumDeuxEntier(int a, int b){
    return a<b ? a:b ;
}

int main() {

    int x, y;
    printf("entrez le premier nombre : ");
    scanf("%d", &x);

    printf("entrez le deuxiemme  nombre : ");
    scanf("%d", &y);

    int max, min;

    max=MaximumDeuxEntier(x,y);
    min=MinimumDeuxEntier(x,y);

    printf("\n le minimum de %d et %d est : %d", x,y,min);
    printf("\n le maximum de %d et %d est : %d", x,y, max);
    return 0;
}
