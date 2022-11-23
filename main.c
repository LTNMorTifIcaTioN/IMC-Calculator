#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>



int main()
{
    char quest;
    int N, i, j;

    printf("C   A   L   C   U   L   A   D   O   R   A      D   E      I   M   C\n");

    printf("\n");

    do
    {
        do
        {
        printf("Quantos clientes serao informados? ");
        scanf("%i", &N);
        } while(N <1);


        char nome[N][50];
        double peso[N];
        double altura[N];
        double media[N];
        double IMC[N];


        for(i = 0; i < N; i++)
        {
            fseek(stdin, 0, SEEK_END);
            printf("Digite o Nome do Individuo: ");
            gets(nome[i]);
            printf("Digite o Peso em kg: ");
            scanf("%lf", &peso[i]);
            printf("Digite a Altura em mts: ");
            scanf("%lf", &altura[i]);
            IMC[i] = peso[i] / pow(altura[i], 2);
        }

        printf("\n");

        for(i = 0; i < N; i++)
        {
            printf("Nome do Individuo: %s\n", nome[i]);
            printf("Peso: %.2lf kg\n", peso[i]);
            printf("Altura: %.2lf mts\n", altura[i]);
            printf("IMC: %.1lf\n", IMC[i]);
            printf("\n");

            if (IMC[i] < 18.5)
            {
                printf("Abaixo do Peso!\n");
            }
            else if (IMC[i] >= 18.5 && IMC[i] < 24.9)
            {
                printf("Peso Ideal!\n");

            }
            else
            {
                printf("Sobrepeso!\n");
            }

            printf("\n");
        }

        float transferencia=0;

        for(i = 0; i < N-1; i++) //função de mediana
        {
             for(j = i+1; j < N; j++)
        {
                if(peso[i] > peso[j]){

                transferencia = peso[i];
                peso[i] = peso[j];
                peso[j] = transferencia;
            }
        }
        }

        for(i = 0; i < N-1; i++) //função de mediana
        {
             for(j = i+1; j < N; j++)
        {
                if(altura[i] > altura[j]){

                transferencia = altura[i];
                altura[i] = altura[j];
                altura[j] = transferencia;
            }
        }
        }

        for(i = 0; i < N-1; i++) //função de mediana
        {
             for(j = i+1; j < N; j++)
        {
                if(IMC[i] > IMC[j]){

                transferencia = IMC[i];
                IMC[i] = IMC[j];
                IMC[j] = transferencia;
            }
        }
        }

        for(i = 0; i < N; i++){
            printf("TABELA PESO: %.2lf kg\n", peso[i]);
        }

        for(i = 0; i < N; i++){
            printf("TABELA Altura: %.2lf kg\n", altura[i]);
        }

        for(i = 0; i < N; i++){
            printf("TABELA IMC: %.1lf kg\n", IMC[i]);
        }

        double pesototal=0, pesomediana=0;

        for(i = 0; i < N; i++)
        {
            pesototal = pesototal + peso[i];
        }

        if (N % 2 != 0)
        {
            pesomediana = peso[((N-1)/2)];
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    pesomediana = pesomediana + peso[i];
                }
                else
                {
                    continue;
                }
            }
        }

        double pesomedio=0, pmediana=0;

        pesomedio = pesototal / N;
        printf("Peso Medio: %.2lf kg\n", pesomedio);

        if (N % 2 != 0)
        {
            printf("Peso Mediana: %.2lf kg\n", pesomediana);
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    pmediana = pesomediana / N;
                }
                else
                {
                    continue;
                }
            }
        }

        printf("\n");

        double alturatotal=0, alturamediana=0;

        for(i = 0; i < N; i++)
        {
            alturatotal = alturatotal + altura[i];
        }

        if (N % 2 != 0)
        {
            alturamediana = altura[((N-1)/2)];
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    alturamediana = alturamediana + altura[i];
                }
                else
                {
                    continue;
                }
            }
        }

        double alturamedio=0, amediana=0;

        alturamedio = alturatotal / N;
        printf("Altura Media: %.2lf mts\n", alturamedio);

        if (N % 2 != 0)
        {
            printf("Altura Mediana: %.2lf mts\n", alturamediana);
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    amediana = alturamediana / N;
                }
                else
                {
                    continue;
                }
            }
        }

        printf("\n");

                double imctotal=0, imcmediana=0;

        for(i = 0; i < N; i++)
        {
            imctotal = imctotal + IMC[i];
        }

        if (N % 2 != 0)
        {
            imcmediana = IMC[((N-1)/2)];
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    imcmediana = imcmediana + IMC[i];
                }
                else
                {
                    continue;
                }
            }
        }

        double imcmedio=0, imediana=0;

        imcmedio = imctotal / N;
        printf("IMC Medio: %.2lf\n", imcmedio);

        if (N % 2 != 0)
        {
            printf("IMC Mediana: %.2lf\n", imcmediana);
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                if (i == (N/2)-1 || i+1 == (N/2)+1)
                {
                    imediana = imcmediana / N;
                }
                else
                {
                    continue;
                }
            }
        }

        printf("\n");

        fseek(stdin, 0, SEEK_END);
        printf("Deseja repetir? ");
        scanf("%c", &quest);
        fseek(stdin, 0, SEEK_END);
    }
    while (quest == 'S' || quest == 's');

    return 0;
}
