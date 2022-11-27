void ordenarVetor (double vetor[], int tamanho)
{
    int i, j;
    int N = tamanho;
    double transferencia;

    for(i = 0; i < N-1; i++) //função de mediana
    {
        for(j = i+1; j < N; j++)
        {
            if(vetor[i] > vetor[j])
            {

                transferencia = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = transferencia;
            }
        }
    }
}



void fMediana (double vetor[], int tamanho)
{

    printf("\n");

    int i;
    int N = tamanho;

    double ftotal=0, fmediana=0;

    for(i = 0; i < N; i++)
    {
        ftotal = ftotal + vetor[i];
    }

    if (N % 2 != 0)
    {
        fmediana = vetor[((N-1)/2)];
    }
    else
    {
        for(i = 0; i < N; i++)
        {
            if (i == (N/2)-1 || i+1 == (N/2)+1)
            {
                fmediana = fmediana + vetor[i];
            }
            else
            {
                continue;
            }
        }
    }
    double fmedio=0, fpmediana=0;

    fmedio = ftotal / N;
    printf("Media: %.2lf\n", fmedio);



    if (N % 2 != 0)
    {
        printf("Mediana: %.2lf\n", fmediana);
        fpmediana = fmediana;
    }
    else
    {
        for(i = 0; i < N; i++)
        {
            if (i == (N/2)-1 || i+1 == (N/2)+1)
            {
                fpmediana = fmediana / N;
            }
            else
            {
                continue;
            }
        }
        printf("Mediana: %.2lf\n", fpmediana);
    }

}
