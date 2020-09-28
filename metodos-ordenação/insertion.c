
//Funções para o método de ordenação Insertion

void insertion(int vetor[],int tam,int *c,int *t)
{
	int i,j;
	int aux;

	for(i=1;i<tam;i++)
	{
		aux=vetor[i];

		j=i-1;

		while(j>=0 && vetor[j]>aux)
		{

			vetor[j+1]=vetor[j];

			j--;
		}

		vetor[j+1]=aux;
	}
}
