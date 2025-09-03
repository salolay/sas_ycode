#include<stdio.h>

int main(){

    int n;

    printf("entrez le nombre entier n: ");
    scanf("%d", &n);

    for( int i = 2 ; i<=n ; i++){
        int premier = 1; 
        for( int j=2 ; j < i; j++ ){
            if( i%j == 0){
                premier=0;
                break;
            }
        }
        if( premier == 1 ){
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}