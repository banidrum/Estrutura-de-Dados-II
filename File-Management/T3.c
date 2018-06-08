//A program to write in file and print what is on file

#include <stdio.h>
#include <stdlib.h>

typedef struct _produto{

    int cod;
    char nome[20];
    float preco;

} TpProduto;

struct _produto prod;

void inserir(){

FILE *arquivo;

//Adiciona texto no fim do arquivo, caso o arquivo nao exista, ele � criado
arquivo = (fopen("produto.txt", "a"));

printf("Digite o codigo: \n");
scanf("%d", &prod.cod);

getchar();
printf("Digite o nome: \n");
fgets(prod.nome, 20, stdin);

printf("Digite o preco: \n");
scanf("%f", &prod.preco);

fprintf(arquivo, "Codigo: %d\n", prod.cod);
fprintf(arquivo, "Nome: %s", prod.nome);
fprintf(arquivo, "Preco: %.2f\n\n", prod.preco);


fclose(arquivo);

}

void mostrar(){

FILE *fpointer;

char *nome = "produto.txt";
char ch;

if((fpointer = fopen(nome, "r")) == NULL){
    printf("Nao foi possivel abrir o arquivo\n");
    return(1);
}

//Enquanto ainda nao chega no final do arquivo, imprime
while(feof(fpointer)== 0){
    fscanf(fpointer, "%c", &ch);
    putchar(ch);
}

}

int main(){

int op;

do{

    printf("1 - Inserir\n");
    printf("2 - Mostrar\n");
    printf("3 - Sair\n");
    scanf("%d", &op);


    switch(op){

    case 1:
    inserir();
    system("clear");
    break;
    case 2:
    mostrar();
    break;
    case 3:
    break;

    }

}while(op!=3);


}
