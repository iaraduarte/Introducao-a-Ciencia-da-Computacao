#include<stdio.h>

//Funções para o método de ordenação Heap sem recursão

void heapify(int vetor[],int pai,int u)
{
	int filho= 2*pai+1;

	if(filho<=u)
	{
		if(filho+1<=u)
		{
			if(vetor[filho+1]>vetor[filho])
			{
				filho++;
			}
		}
		if(vetor[filho]>vetor[pai])
		{
			int tmp=vetor[filho];
			vetor[filho]=vetor[pai];
			vetor[pai]=tmp;

			heapify(vetor,filho,u);
		}
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
