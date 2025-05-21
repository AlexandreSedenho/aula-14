#include <stdio.h>
#include <string.h>

void palindromo(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            printf("A palavra não é um palíndromo.\n");
            return;
        }
        start++;
        end--;
    }

    printf("A palavra é um palíndromo.\n");
}

int main() {
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%s", str);

    palindromo(str);

    return 0;
}