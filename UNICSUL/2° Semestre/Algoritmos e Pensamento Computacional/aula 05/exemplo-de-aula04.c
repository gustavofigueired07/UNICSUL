#include <stdio.h>

int main()
{
    char tipoHospedagem;
    int qtdDiarias;
    float valorDiaria, valorTotal;
    
    printf("Qual o tipo de Hospedagem (S - D - T)? ");
    scanf("%c", &tipoHospedagem);
    
    printf("Qual a quantidade de diarias? ");
    scanf("%d", &qtdDiarias);
    
    switch(tipoHospedagem) {
        case 'S':
        case 's':
            valorDiaria = 300.0f;
            break;
        case 'D':
        case 'd':
            valorDiaria = 450.0f; 
            break;
        case 'T':
        case 't':
            valorDiaria = 500.0f;
            break;
            
        default:
        printf("Tipo invalido.");
    }
    
    valorTotal = valorDiaria*qtdDiarias;
    
    printf("O valor total da Hospedagem é: R$%.2f", valorTotal);

    return 0;
}
