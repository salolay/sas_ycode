#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Entrez une chaine : ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            result[j++] = str[i];
    }
    result[j] = '\0';

    printf("Chaine sans espaces : %s\n", result);

    return 0;
}
