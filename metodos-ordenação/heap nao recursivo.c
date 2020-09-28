
//Funções para o método de ordenação Heap com recursão

void heapify(int vetor[],int pai,int u)
{
	while(pai<=u)
	{
		int filho= 2*pai+1;
		if(filho<=u)
		{
			if(filho+1<=u)
			{
				if(v[filho+1]>v[filho])
				{
					filho++;
				}
			}
			if(v[filho]>v[pai])
			{
				int tmp=v[filho];
				v[filho]=v[pai];
				v[pai]=tmp;
			}
		}
		pai=filho;
	}
}

void heap(int vetor[],int n)
{
	int i;

	for(i=n/2;i>=0;i--)
	{
		heapify(vetor,i,n-1);
	}
	for(i=n-1;i>0;i--)
	{
		int tmp=vetor[0];
		vetor[0]=vetor[i];
		vetor[i]=tmp;
		heapify(vetor,0,i-1);
	}
}
