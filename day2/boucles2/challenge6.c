
#include<stdio.h>

int main(){
    int n;

    printf("entrez le nombre entier : ");
    scanf("%d", &n);

    printf("les facteurs de %d sont: ",n);

    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            printf("%d", i);
        }
    }
    printf("\n");
    
    return 0;
}