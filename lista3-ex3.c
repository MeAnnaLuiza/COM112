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
  int codigo;
  char descricao[100];
  float preco;
} cadastro;

void ordena(cadastro *dados)
{
  int i;
    for (i = 1; i < 10; i++)
    {
        int j = i;

        while (j > 0 && strcmp(dados[j - 1].descricao, dados[j].descricao) > 0){
            char tmp[100];
            int cod;
            float prec;

            strcpy(tmp, dados[j - 1].descricao);
            cod=dados[j-1].codigo;
            prec=dados[j-1].preco;

            strcpy(dados[j - 1].descricao, dados[j].descricao);
            dados[j-1].preco=dados[j].preco;
            dados[j-1].codigo=dados[j].codigo;

            strcpy(dados[j].descricao, tmp);
            dados[j].codigo=cod;
            dados[j].preco=prec;

            --j;
        }
    }
}

int main(){
    int i, j, menor;
    cadastro dados[10];
    for(i=0;i<10;i++){

      dados[i].codigo=0;
      strcpy(dados[i].descricao, "NULL");
      dados[i].preco=0.0;
    }
    for(i=0;i<10;i++){
      scanf("%d", &dados[i].codigo);
      scanf("%s", &dados[i].descricao);
      scanf("%f", &dados[i].preco);

    }
    ordena(dados);
    printf("Produtos ordenados em ordem alfabetica\n" );
    for(i=0;i<10;i++){
        printf("Dados do produto %d: \n",i+1 );
       printf("       Codigo: %d\n       Descricao: %s\n       Preco: R$%.2f\n", dados[i].codigo, dados[i].descricao, dados[i].preco );
     }
     int procura, a=0;
     printf("Digite o codigo de algum produto: \n" );

     scanf("%d",&procura );

     for(i=0;i<10;i++){
       if((dados[i].codigo)==procura){
         a=i;
         a++;

       }
     }

      if(a!=0)printf("O produto de codigo %d estava na posicao %d\n",procura, a );
      else printf("Não há produto com esse código \n" );
}
