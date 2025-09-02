#include<stdio.h>

int main() {

    int n;
    int nombreFactoriel=1;
    printf("entrez le nombre :");
    scanf("%d", &n);

    if(n==0){
        printf("le factiriel du nombre %d!  est: %d", n, nombreFactoriel);
    }
    else{
        for(int i=1; i<=n ; i++)
            nombreFactoriel *=i;

    printf("le factiriel du nombre %d!= %d", n, nombreFactoriel);
    }


    return 0;
}
