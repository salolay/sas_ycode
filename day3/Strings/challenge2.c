#include<stdio.h>
#include<string.h>

int main() {

    char ch[100];
    printf("entrez une chaine de caractere  :");
    scanf("%[^\n]", ch);

    int taille=0;
    int i=0;
    while(ch[i]!= '\0'){
        taille++;
        i++;
    }
    printf("\nla chaine entrer est : %s", ch);
    printf("\nsa taille est: %d ", taille);

    return 0;
}
