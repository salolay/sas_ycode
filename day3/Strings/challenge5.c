#include<stdio.h>

int main()
{
    char str[100], inverse[100];
    int i, cpt;

    printf("Entrez une chaine : ");
    scanf(" %[^\n]", str);
    while (str[cpt] != '\0') {
        cpt++;
    }

    //cpt = strlen(str);

    for (i = 0; i < cpt; i++) {
        inverse[i] = str[cpt - i - 1];
    }

    inverse[cpt] = '\0';

    printf("Chaine inversee : %s\n", inverse);


    return 0;
}
