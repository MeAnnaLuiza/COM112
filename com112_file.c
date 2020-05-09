int tamanhoVetor()
{
	//gerando valores aleatorio para um vetor de tamanho aleatorio
	//printf("Gerando valores...\n");
	FILE *criaArquivo;
	criaArquivo = fopen(" com112_entrada.txt", "w");
	if(criaArquivo == NULL)
	{
		printf("Erro na criação do arquivo entrada.");
		return 0;
	}
	//OBS: PESQUISAR FUNCAO SRAND PARA USAR NO LUGAR DE RAND
	//http://wurthmann.blogspot.com/2012/11/linguagem-c-funcao-rand-e-srand.html
	int tamanho = rand();
	fprintf(criaArquivo, "%d\n", tamanho);

	return tamanho;
}


//rever se vou usar void ou nao. Rever parametros da funcao caso o vetor passe a ser criado na main
void criavetor(int tamanho)
{
	int vetor[tamanho];
	int i;
	for(i = 0; i < tamanho; i++)
		vetor[i] = (rand() % 51);
	FILE *leitura;
	leitura = fopen(" com112_entrada.txt", "w");
	//entender a razao do valor ser apagado e precisar ser inserido duas vezes. 
	fprintf(leitura, "%d\n", tamanho);
	
	for(i = 0; i < tamanho; i++)
		fprintf(leitura, "%d ", vetor[i]);
	
}
