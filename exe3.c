#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%s", str);
    inverter_string(str);
    printf("Palavra invertida: %s\n", str);
    return 0;
}