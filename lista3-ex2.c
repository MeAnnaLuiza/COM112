/*
UNIVERSIDADE FEDERAL DE ITAJUBA
COM 112 - ALGORITMO E ESTRUTURAS DE DADOS II
ANNA LUIZA - 20019004090
JOÃO VITOR - 20019006030
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int salario;
    char nome[100];
} cadastro;

void inverte(cadastro *dados, int menor, int i){
  int temp;
  temp = dados[menor].salario;
  dados[menor].salario = dados[i].salario;
  dados[i].salario = temp;
  //aqui provavel q vai ter problema de nao alterar no struct original
  char n[100];
  strcpy(n, dados[menor].nome);
  strcpy(dados[menor].nome, dados[i].nome);
  strcpy(dados[i].nome, n);
}

int main(){
  int i, j, menor;
  cadastro dados[10];
  for(i=0;i<10;i++){
    dados[i].salario=0;
    strcpy(dados[i].nome, "NULL");
  }

  for(i=0;i<10;i++){
    scanf("%d", &dados[i].salario);
    scanf("%s", &dados[i].nome);
  }

  for (i = 0; i < 9; i++){
       menor = i;
       for (j = i+1; j < 10; j++)
         if (dados[j].salario > dados[menor].salario)
           menor = j;
       inverte(dados, menor, i);
   }

   for(i=0;i<10;i++){
     printf("recebe %d e o nome e: %s\n", dados[i].salario, dados[i].nome );
   }
}
