#include <stdio.h>

int main()
{   
    int contador = 0;
    int quantidade;
    char dia[10];
    float consumo;
    FILE *arquivo;
    
    arquivo = fopen("consumo.txt", "a");

    
    if(arquivo == NULL){
        printf("Arquivo não foi criado. \n");
        return 1;
    }
    
    printf("digite quantos registros deseja cadastrar: \n");
    scanf("%d", &quantidade);
    
    for(contador=0; contador<=quantidade; contador++) {
        printf("\nRegistros %d \n", contador + 1);
        
        printf("Dia: ");
        scanf("%9s", &dia);
        
        printf("Consumo: ");
        scanf("%f", &consumo);
        
        fprintf(arquivo, "%s %.2f \n", dia, consumo);
        
    }

    
    fclose(arquivo);
    
    printf("Arquivo gravado \n");
    
    return 0;
}