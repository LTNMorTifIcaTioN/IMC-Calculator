#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "funcao.h"



int main()
{
    FILE *arq;
    char quest;
    int N, i, j;
    char buffer[256] ;
    float x ;

    printf("C   A   L   C   U   L   A   D   O   R   A      D   E      I   M   C\n");

    arq = fopen("IMC_clientes.xls", "w");

    printf("\n");

    fputs("\nC   A   L   C   U   L   A   D   O   R   A      D   E      I   M   C\n", arq);

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
            fputs("\nNOME: \n", arq);
            fputs(nome[i], arq);

            printf("Digite o Peso em kg: ");
            scanf("%lf", &peso[i]);
            x = peso[i];
            sprintf (buffer, "%.2f", x);
            fputs("\nPESO: \n", arq);
            fputs(buffer, arq);

            printf("Digite a Altura em mts: ");
            scanf("%lf", &altura[i]);
            x = altura[i];
            sprintf (buffer, "%.2f", x);
            fputs("\nALTURA: \n", arq);
            fputs(buffer, arq);

            IMC[i] = peso[i] / pow(altura[i], 2);
            x = IMC[i];
            sprintf (buffer, "%.2f", x);
            fputs("\nIMC: \n", arq);
            fputs(buffer, arq);

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

        ordenarVetor (peso, N);

        ordenarVetor (altura, N);

        ordenarVetor (IMC, N);

        for(i = 0; i < N; i++){
            printf("TABELA PESO: %.2lf kg\n", peso[i]);
        }

        printf("\n");

        for(i = 0; i < N; i++){
            printf("TABELA Altura: %.2lf mts\n", altura[i]);
        }

        printf("\n");

        for(i = 0; i < N; i++){
            printf("TABELA IMC: %.1lf \n", IMC[i]);
        }

        printf("\n");


        printf("\nValores para Peso em kg: \n");
        fMediana (peso, N);


        printf("\nValores para Altura em mts: \n");
        fMediana (altura, N);


        printf("\nValores para IMC: \n");
        fMediana (IMC, N);

        printf("\n");

        fseek(stdin, 0, SEEK_END);
        printf("Deseja repetir? ");
        scanf("%c", &quest);
        fseek(stdin, 0, SEEK_END);
    }
    while (quest == 'S' || quest == 's');

    fclose(arq);
    return 0;
}
