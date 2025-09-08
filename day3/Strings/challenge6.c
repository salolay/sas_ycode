#include <stdio.h>
#include <string.h>

int main() {
    char str[100], c;
    int i, cpt = 0;

    printf("Entrez une chaine : ");
    scanf(" %[^\n]", str);

    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            cpt++;
    }

    printf("Le caractere '%c' apparait %d fois.\n", c, cpt);

    return 0;
}

