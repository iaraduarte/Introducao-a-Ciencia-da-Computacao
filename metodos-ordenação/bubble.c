
//Funções para o método de ordenação Bubble

void bubble(int vetor[],int tam)
{
    int contr,i,temp,ward,cont;

    i=0;

    contr=tam-1;

    while(contr!=0)
    {
        while(i<contr)
        {
            printf("C %d %d\n",i,i+1);

            if(vetor[i]>vetor[i+1])
            {
                printf("T %d %d\n",i,i+1);

                ward=i;

		        temp=vetor[i];
		        vetor[i]=vetor[i+1];
		        vetor[i+1]=temp;

                cont++;
            }

           i++; 
        }

        if(cont==0)
        {
            contr=0;
        } 
        else 
        {
            contr = ward;
        }

        cont=0;
        i=0;
    }
}
