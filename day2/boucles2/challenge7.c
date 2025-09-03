#include<stdio.h>

int main(){
    int n;

    printf("entrez le nombre entier : ");
    scanf("%d", &n);

    long long t1=0, t2=1, tn;

    printf("les %d premiers termes de la suit de Fibonacci sont: \n", n);

    for( int i=1 ; i <= n ; i++ ){
        if( i==1 ){
            printf("%lld", t1);
        }else if( i==2 ){
            printf("%lld", t2);
        }else {
            tn = t1 + t2;
            printf("%lld", tn);
            t1 = t2;
            t2 = tn;
        }
    }
    printf("\n";)
    return 0;
}