#include<stdio.h>

int MultiplicationDeuxEntier(int a, int b){
    return a*b;
}

int main() {

    int x, y;
    printf("entrez le premier nombre : ");
    scanf("%d", &x);

    printf("entrez le deuxiemme  nombre : ");
    scanf("%d", &y);

    int multiplication=MultiplicationDeuxEntier(x,y);

    printf("\nla multiplication de %d et %d est: \n %d", x,y, multiplication);

    return 0;
}
