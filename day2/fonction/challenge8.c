#include<stdio.h>

int Paritee(int a){
    if( a%2 == 0)
        return 1;
    return 0;
}

int main()
{
    int a;
    printf("entrez le nombre ");
    scanf("%d",&a);
    int p=Paritee(a);
    if(p==0)
        printf("le nombre est impaire");
    else
        printf("le nombre est paire");
    return 0;
}
