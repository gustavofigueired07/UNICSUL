#include <stdio.h>

void exibirCabecalho(void);
void lerPontuacoes(int v[], int tamanho);
void copiarVetor(int origem[], int destino[], int tamanho);
void exibirVetor(int v[], int tamanho);
int bubbleSort(int v[], int tamanho);
int selectionSort(int v[], int tamanho);
int insertionSort(int v[], int tamanho);
int vetoresIguais(int a[], int b[], int tamanho);

int main(void)
{
    int tamanho = 10;

    int pontuacoes[tamanho], bubble[tamanho], selection[tamanho], insertion[tamanho];
    int comparacaoBubble, comparacaoSelection, comparacaoInsertion;
    int iguais;
    double media;

    exibirCabecalho();
    lerPontuacoes(pontuacoes, tamanho);

    printf("\nOriginal:\n");
    exibirVetor(pontuacoes, tamanho);

    copiarVetor(pontuacoes, bubble, tamanho);
    copiarVetor(pontuacoes, selection, tamanho);
    copiarVetor(pontuacoes, insertion, tamanho);

    comparacaoBubble = bubbleSort(bubble, tamanho);
    comparacaoSelection = selectionSort(selection, tamanho);
    comparacaoInsertion = insertionSort(insertion, tamanho);

    printf("\nBubble Sort:\n");
    exibirVetor(bubble, tamanho);
    printf("\nSelection Sort:\n");
    exibirVetor(selection, tamanho);
    printf("\nInsertion Sort:\n");
    exibirVetor(insertion, tamanho);

    iguais = vetoresIguais(bubble, selection, tamanho) &&
             vetoresIguais(bubble, insertion, tamanho);
    printf("\nResultados equivalentes: %s\n", iguais ? "SIM" : "NAO");

    media = (bubble[4] + bubble[5]) / 2.0;
    printf("Menor: %d | Maior: %d | media: %.2f\n",
           bubble[0], bubble[tamanho - 1], media);

    printf("Comparacoes: Bubble %d | Selection %d | Insertion %d\n",
           comparacaoBubble, comparacaoSelection, comparacaoInsertion);
    printf("=============================\n");

    return 0;
}

void exibirCabecalho(void)
{
    printf("========== RANKLAB ========== \n");
}

void lerPontuacoes(int v[], int tamanho)
{
    int i;
    printf("Digite 10 pontuacoes entre 0 e 100: \n");

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite a pontuacao: ");
        scanf("%d", &v[i]);
        while (v[i] < 0 || v[i] > 100)
        {
            printf("A pontuacao precisa estar entre 0 e 100\n");
            scanf("%d", &v[i]);
        }
    }
}

void copiarVetor(int origem[], int destino[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        destino[i] = origem[i];
    }
}

void exibirVetor(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
}

int bubbleSort(int v[], int tamanho)
{
    int i, j, auxiliar;
    int comparacoes = 0;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - 1 - i; j++)
        {
            comparacoes++;
            if (v[j] > v[j + 1])
            {
                auxiliar = v[j];
                v[j] = v[j + 1];
                v[j + 1] = auxiliar;
            }
        }
    }
    return comparacoes;
}

int selectionSort(int v[], int tamanho)
{
    int i, j, posicaoMenor, auxiliar;
    int comparacoes = 0;

    for (i = 0; i < tamanho - 1; i++)
    {
        posicaoMenor = i;
        for (j = i + 1; j < tamanho; j++)
        {
            comparacoes++;
            if (v[j] < v[posicaoMenor])
            {
                posicaoMenor = j;
            }
        }
        auxiliar = v[i];
        v[i] = v[posicaoMenor];
        v[posicaoMenor] = auxiliar;
    }
    return comparacoes;
}

int insertionSort(int v[], int tamanho)
{
    int i, j, valorAtual;
    int comparacoes = 0;

    for (i = 1; i < tamanho; i++)
    {
        valorAtual = v[i];
        j = i - 1;

        while (j >= 0)
        {
            comparacoes++;
            if (v[j] > valorAtual)
            {
                v[j + 1] = v[j];
                j--;
            }
            else
            {
                break;
            }
        }
        v[j + 1] = valorAtual;
    }
    return comparacoes;
}
int vetoresIguais(int a[], int b[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
