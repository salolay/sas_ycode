#include <stdio.h>

int main() {
    char str[200], ch[100];
    int i, j, k, trouve;

    printf("Entrez la chaine principale : ");
    scanf(" %[^\n]", str);

    printf("Entrez la sous-chaine : ");
    scanf(" %[^\n]", ch);

    trouve = 0;

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ch[0]) {
            j = i;
            k = 0;

            while (str[j] != '\0' && ch[k] != '\0' && str[j] == ch[k]) {
                j++;
                k++;
            }

            if (ch[k] == '\0') {
                trouve = 1;
                break;
            }
        }
    }

    if (trouve == 1)
        printf("La sous-chaine est presente.\n");
    else
        printf("La sous-chaine n'est pas presente.\n");

    return 0;
}
