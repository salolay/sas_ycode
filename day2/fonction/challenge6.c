#include<stdio.h>

int Fibonacci(int a){
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    return Fibonacci(a-1) +Fibonacci(a-2);
}

int main() {
    int n;
    printf("entrez le nombre ");
    scanf("%d",&n);
    if(n<0)
        printf("Essayez d'entrer un nombre positif");
    printf("le Fibonacci de %d est %d", n, Fibonacci(n));
    return 0;
}
