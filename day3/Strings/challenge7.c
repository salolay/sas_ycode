
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Entrez une chaine : ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Chaine en majuscules : %s\n", str);

    return 0;
}
