#include <stdio.h>
#include <string.h>

int main() {
    char str[100], aux;
    fgets(str, sizeof(str), stdin);
    
    // Removendo o caractere de nova linha
    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    printf("Ao contrario: ");
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        aux = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = aux;
    }
    
    printf("%s\n", str);

    return 0;
}
