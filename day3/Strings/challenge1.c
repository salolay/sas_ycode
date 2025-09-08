#include<stdio.h>
#include<string.h>

int main() {
    char ch[100];
    printf("entrez une chaine de caractere  :");
    scanf("%[^\n]", ch);

    printf("la chaine entrer est : %s", ch);

    return 0;
}
