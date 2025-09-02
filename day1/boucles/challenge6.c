#include<stdio.h>

 void main() {

    int n;

    printf("entrez le nombre: ");
    scanf("%d", &n);

    printf("les nombres paire inferieur a %d sont:",n);
    for(int i=0 ; i<n ; i++){
        printf("%d, ",i*2);
    }

 }
