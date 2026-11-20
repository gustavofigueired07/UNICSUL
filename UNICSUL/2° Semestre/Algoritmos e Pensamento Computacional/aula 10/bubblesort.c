//Organizando as senhas de atendimento
//Uma clínica tem 5 senhas fora de ordem. Vamos ordená-las em ordem crescente com Bubble Sort.

//Entrada: 35 12 28 7 19 · Saída: 7 12 19 28 35
//Criar o vetor com as cinco senhas.1.
//Criar a função void exibirVetor(int vetor[], int tamanho).2.
//Comparar cada senha com a vizinha.3.
//Trocar quando estiverem fora de ordem.4.
//Repetir até ordenar: void bubbleSort(int vetor[], int tamanho).5.
//Exibir o vetor antes e depois//

#include <stdio.h>

    int senha[5] = [35, 12, 28, 7, 19];

int bubbleSort(int vetor[], int tamanho)
{   
    int i, j, au

     for (i= 0; i < tamanho - 1; i++){
        for ( j = 0; j < tamanho - 1 - i;j++){
            if (vetor[j] > vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }

}