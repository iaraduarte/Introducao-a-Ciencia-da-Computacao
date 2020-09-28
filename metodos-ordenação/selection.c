
//Funções para o método de ordenação Selection

void selection(int vetor[],int tam)
{
	int i,j;
	int minimo,temp;

	for(i=0;i<tam-1;i++)
	{
	    minimo=i;
		for(j=i+1;j<tam;j++)
		{
			if(vetor[j]<vetor[minimo])
			{
			    minimo=j;
			}
		}

		if(minimo!=i)
		{
		    temp=vetor[i];
		    vetor[i]=vetor[minimo];
		    vetor[minimo]=temp;
		}
	}
}
