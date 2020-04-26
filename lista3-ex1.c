/*
UNIVERSIDADE FEDERAL DE ITAJUBA
COM 112 - ALGORITMO E ESTRUTURAS DE DADOS II
ANNA LUIZA - 20019004090
JOÃO VITOR - 20019006030
*/

#include<stdio.h>
#include<stdlib.h>


void bs(int *V, int a){
  int i, temp, j;
  for ( i = a; i >= 0; i--)
        for ( j = a; j > a - i; j--)
            if (V[j] > V[j - 1]){
              temp=V[j];
              V[j]=V[j-1];
              V[j-1]=temp;
            }
}
int main(){
    int a=10, V[10],  i;
    for(i=0;i<a;i++)
      scanf("%d", &V[i]);
    bs(V, a-1);
    for(i=0;i<a;i++)
      printf("%d\n",V[i] );
}
