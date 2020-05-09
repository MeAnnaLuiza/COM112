//implementacao do swap em c
void inverte(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*
OBS: rever se as funcoes vao continuar void ou retornam número de comparacoes. 
Passo pra funcao ponteiro do vetor e o tamanho dele
rever os parametros na funcao MENU da main
*/
void bubble(int *V, int tamanho)
{
	int i, temp, j;
	for(i = tamanho; i >= 0; i--)
		for(j = tamanho; j > tamanho - i; j--)
			if(V[j] < V[j - 1])
			{
				temp = V[j];
				V[j] = V[j - 1];
				V[j - 1] = temp;
			}
}
/*
Passo pra funcao ponteiro do vetor e o tamanho dele
rever os parametros na funcao MENU da main
*/
void select(int *V, int tamanho)
{
	int i, j, min;
	for(i = 0; i < tamanho - 1; i++)
	{
		min = i;
		for(j = i + 1; j < tamanho; j++)
			if(V[j] < V[min])
				min = j;

		inverte(&V[min], &V[i]);
	}
}
/*
Passo pra funcao ponteiro do vetor e o tamanho dele
rever os parametros na funcao MENU da main
*/
void insert(int *V, int tamanho)
{
	int i, j, a;
	for(i = 1; i < tamanho; i++)
	{
		a = V[i];
		j = i - 1;
		while(j >= 0 && V[j] > a)
		{
			V[j + 1] = V[j];
			j = j - 1;
		}
		V[j + 1] = a;
	}
}
