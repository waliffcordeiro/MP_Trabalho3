#include "../include/contador.h"

// "Copyright [2018] <Copyright Waliff Cordeiro>"

int contador(char nomeArquivo[], int linhas_comentarios, int linhas_vazias) {
  FILE *pArquivo;
  unsigned int total_linhas = 0, cont = 0, c, bCom = 0, i, nCom = 0;
  unsigned int linhaCom = 0, linhaVaz = 0, ContVaz = 0, nVazias = 0;
  // Obter a quantidade de caracteres contidas no arquivo
  char texto[sizeof(pArquivo)*1024];
  pArquivo = fopen(nomeArquivo, "r");
  if (pArquivo != NULL) {  // Se arquivo existe
    do {
      c = fgetc(pArquivo);
      if (c == '\n') {  // Verifica se a linha acabou
        total_linhas++;
      }
      texto[cont] = c;
      cont++;
    } while (c != EOF);
    fclose(pArquivo);
  }

  return total_linhas+1 - nCom - nVazias;
}
