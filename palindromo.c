#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100], reversa[100];
  int qntd_iguais;
  printf("Insira uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  int tam = strlen(palavra);
  palavra[strcspn(palavra, "\n")] = '\0';
  for (int c = 0; c < tam; c++) {
    // inversao da str
    reversa[c] = palavra[tam - 1 - c];
  }
  
  reversa[tam] = '\0';

  for (int i = 0; i < tam; i++) {
    if (palavra[i] == reversa[i+1]) {
      qntd_iguais++;
    }
  }
  
  if (qntd_iguais == tam) {
      printf("eh palindromo\n");
  } else {
      printf("nao eh palindromo");
  }

  return 0;
}