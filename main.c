#include <stdio.h>
#include <stdlib.h>

char nome[100];
int idade, rm, voltar;
int opcao;

void limpar(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif

  return 0;
}

void cadastrarAluno(){
  limpar();
  printf("\nInsira o primeiro nome do aluno: ");
  scanf("%s", nome);

  printf("\nInsira a idade do aluno: ");
  scanf("%d", &idade);

  printf("\nInsira o RM do aluno: ");
  scanf("%d", &rm);

  printf("\nAluno cadastrado! Aperte 4 para voltar ao menu principal: ");
  scanf("%d", &voltar);
}

void exibirAluno(){
  limpar();
  printf("\nPrimeiro nome: %s | Idade: %d | RM: %d", nome, idade, rm);
  printf("\nExibindo aluno cadastrado! Aperte 4 para voltar ao menu principal: ");
  scanf("%d", &voltar);
}

void menu(){
  do{
    limpar();
    printf("\n1- Casdastro de aluno\n2-Exibir aluno cadastrado\n3-Sair\n\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

      if(opcao ==  1){
        cadastrarAluno();
      }else if(opcao == 2){
        exibirAluno();
      }

  }while(opcao != 3);
}

int main (void){
  menu();
}