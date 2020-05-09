#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

//passei para o relatorio somente a variavel de contagem de tempo mas talvez tenha que passar outras. 
void relatorio(clock_t tempo){
	//codigo para printar o tempo de execucao.
	tempo = clock() - tempo; 
	printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	/*
	Falta: comparacoes no vetor, numero de movimentacoes. Podemos usar variavel gloabal inicializada com 0 e incrementadas 
	nas funcoes de ordenação para evitar mais parametro.  
	Salvar os dados impressos no arquivo do relatorio também.
	Podemos declarar a variável A da funcao MENU como global para saber o tipo de ordenacao sem precisar de mais parametro.
	*/
}

void menu(){
	int a;	
	printf("Escolha um dos metodos de ordenacao:\n(1)Bubble Sort\n(2)Selection Sort\n(3)Insertion Sort\n");
	scanf("%d", &a);
	//ERRO NESSE PARTE POR NÃO PASSAR OS ARGUMENTOS PARA FUNCAO. 
	//NÃO VOU PASSAR PRA FACILITAR QUANDO CRIAR O VETOR COM VALORES DO ARQUIVO.TXT
	if(a==1)bubble();
	if(a==2)select();
	if(a==3)insert();
	//so para lembrar, depois de ordenar tempo que reescrever o vetor aqui dentro da funcao
	//em outro arquivo. 
}

int main()
{
	//clocl_t é tipo de variável que deve ser usada para contagem do tempo de execucao.
	clock_t tempo;
	//iniciando contagem
	tempo = clock();
	//tamanho recebe o valor gerado para ser o tamanho do vetor.	
    int tamanho;
    tamanho =tamanhoVetor();
    //talvez compense gerar o valor aqui na main e mandar ponteiro dele para inserir valores. 
	criavetor(tamanho);
	
	
	printf("--------MENU--------\n ");
	menu();
	printf("--------RELATORIO--------");
	//talvez tenha erro em como eu estou passando a funcao time pro relatorio.
	relatorio(tempo);
	return 0;

}
