#include<stdio.h>

int sommeDeuxEntier(int a, int b){
    return a+b;
}

int main() {
    int x, y;
    printf("entrez le premier nombre : ");
    scanf("%d", &x);

    printf("entrez le deuxiemme  nombre : ");
    scanf("%d", &y);

    int som=sommeDeuxEntier(x,y);

    printf("\n le somme de %d et %d est : %d", x, y, som);

     return 0;
}
