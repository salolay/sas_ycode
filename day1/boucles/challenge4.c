#include<stdio.h>

int main() {

    int n;
    printf("entrez le nombre : ");
    scanf("%d", &n);

    printf("les nombre impaire inferieur a %d sont:",n);
    for(int i=1 ; i<=n ; i++){
        printf("%d, ",i*2-1);
    }

     return 0;
}
