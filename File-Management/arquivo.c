#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
  FILE *arq;

  char *nome = "arquivo.txt";

  arq = fopen("arquivo.txt", "r");

  if ((arq = fopen(nome, "r")) == NULL){
    printf("Arquivo nao encontrado\n");
    exit(1);
  }

  // printf("Digite um numero: \n");
  // scanf("%d", &n);

  while(fscanf(arq, "%d", &n) == 1){
    printf("%d\n", n);
  }

    return 0;
}
