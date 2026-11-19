
#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

void imprimirRelatorio(FILE *destino, int quantidade, double total,
                       double media, double maior, const char *localMaior,
                       int alertas)
{
    fprintf(destino, "========== ECOCAMPUS ==========\n");
    fprintf(destino, "Locais analisados: %d\n", quantidade);

    if (quantidade > 0) {
        fprintf(destino, "Consumo total: %.2f litros\n", total);
        fprintf(destino, "Consumo medio: %.2f litros\n", media);
        fprintf(destino, "Maior consumo: %s - %.2f litros\n", localMaior, maior);
        fprintf(destino, "Locais em alerta: %d\n", alertas);
    } else {
        fprintf(destino, "Nenhum registro valido encontrado.\n");
    }

    fprintf(destino, "================================\n");
}

int main(void)
{
    FILE *entrada;
    FILE *saida;

    char local[TAM_NOME];
    char localMaior[TAM_NOME] = "";
    double consumo, limite;

    int quantidade = 0;  
    int alertas = 0;    
    double total = 0.0;  
    double media = 0.0;
    double maior = 0.0;

    entrada = fopen("consumo_campus.txt", "r");
    if (entrada == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo consumo_campus.txt.\n");
        printf("Confira se ele esta na mesma pasta do programa.\n");
        return 1;
    }

    while (fscanf(entrada, "%49s %lf %lf", local, &consumo, &limite) == 3) {
        quantidade++;
        total += consumo;

        if (quantidade == 1 || consumo > maior) {
            maior = consumo;
            strcpy(localMaior, local);
        }

        if (consumo > limite) {
            alertas++;
        }
    }
    fclose(entrada);

    if (quantidade > 0) {
        media = total / quantidade;
    }

    imprimirRelatorio(stdout, quantidade, total, media, maior, localMaior, alertas);

    saida = fopen("relatorio_consumo.txt", "w");
    if (saida == NULL) {
        printf("Erro: nao foi possivel criar o arquivo relatorio_consumo.txt.\n");
        return 1;
    }
    imprimirRelatorio(saida, quantidade, total, media, maior, localMaior, alertas);
    fclose(saida);

    return 0;
}
