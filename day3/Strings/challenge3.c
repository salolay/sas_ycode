#include<stdio.h>

int main() {

    char ch1[100], ch2[100];
    printf("entrez une chaine 1 de caractere  :");
    scanf("%[^\n]", ch1);
    getchar();

    printf("\nla chaine 1 entrer est : %s", ch1);

    printf("\n entrez une chaine 2 de caractere  :");
    scanf("%[^\n]", ch2);
    getchar();
    printf("\nla chaine 2 entrer est : %s\n", ch2);

    int taille_1=0;
    int i=0;
    while(ch1[i]!= '\0'){
        taille_1++;
        i++;
    }
    printf("taille chaine 1 %d\n", taille_1);

    int taille_2=0;
    int j=0;
    while(ch2[j]!= '\0'){
        taille_2++;
        j++;
    }
    printf("taille chaine 2 %d\n", taille_2);
    int taille_3= taille_2 + taille_1;
    printf("taille total %d\n", taille_3);

    char concatenation[taille_3];

    i=0;
    j=0;
    while(ch1[j] != '\0'){
        concatenation[i]=ch1[j];
        i++;
        j++;
    }
    j=0;
    while(ch2[j] != '\0'){
        concatenation[i]=ch2[j];
        i++;
        j++;
    }
    concatenation[i]='\0';

    printf("la concatenation de %s et %s est : %s", ch1, ch2, concatenation);



    return 0;
}
