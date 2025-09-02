#include<stdio.h>

int main() {

    int n,i;
     printf("entrez le numero: ");
     scanf("%d",&n);

     printf("le tableau de multiplication du nombre %d est: ",n);
     for(i=0; i<=10; i++)
        printf("%d * %d = %d \n", n,i, n*i);

    return 0;
}
