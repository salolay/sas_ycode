#include<stdio.h>

int main() {
    int n, inverse;

    printf("entreez le nombre : ");
    scanf("%d",&n);

    while( n != 0){
        int tmp = n%10;
        inverse = inverse*10 + tmp;
        n = n / 10;
    }

    printf("l'iverse du nombre est: %d", inverse);
    return 0;
}
