
//Funções para o método de ordenação Merge

void merge(int vetor[], int com, int fim, int * c, int * t) 
{
    int meio;

    if (fim > com) 
    {
        meio = (com + fim) / 2;

        merge(vetor, com, meio, c, t);
        merge(vetor, (meio + 1), fim, c, t);

        intercala(vetor, com, meio, (meio + 1), fim, c, t);
    }
}


void intercala(int vetor[], int com1, int fim1, int com2, int fim2, int *c, int *t) 
{
    int tam;
    int *copia;

    int i1=com1;
    int i2=com2;

    int k=0,i=0;

    tam=(fim1-com1+1)+(fim2-com2+1);

    copia=(int *)calloc(tam,sizeof(int));

    while (i1<=fim1 && i2<=fim2) 
    {

        if (vetor[i1]<=vetor[i2]) 
        {
        	copia[k]=vetor[i1];
            k++;
            i1++;
        }
        else 
        {
            copia[k]=vetor[i2];
            k++;
            i2++;
        }
    }

    while(i1<=fim1) 
    {
        copia[k++]=vetor[i1++];

    }
    while(i2<=fim2) 
    {
        copia[k++]=vetor[i2++];
    }

    k=0;

    for (i = com1, k = 0; i <= fim2; i++, k++) 
    {
        vetor[i]=copia[k];
    }
}
