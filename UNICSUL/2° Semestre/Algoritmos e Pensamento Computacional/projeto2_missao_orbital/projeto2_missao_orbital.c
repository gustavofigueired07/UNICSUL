#include <stdio.h>
#include <string.h>

int main() {
    int continuar;
	do{
	int codCadete, pontos, etapa; 
	float media;
	int total = 0;
	char classificacao[40];
	
	printf("====== MISSÃO ORBITAL ======\n Digite seu código de cadete: \n");
	scanf("%d", &codCadete);
	
	for(etapa=1; etapa<=3; etapa++){
	    printf("Pontuação da etapa %d:  \n", etapa);
	    scanf("%d", &pontos);
	    
	    while(pontos<0||pontos>100){
	        printf("Pontuação inválida, digite sua pontuação entre 0 e 100: \n");
	        scanf("%d", &pontos);
	    }
	    
	    total=total+pontos;
	}
	
	media=(float)total/3.0;
	
	if(media>=85){
	    strcpy(classificacao, "Comandante da missão");
	}else if(media>=70){
	    strcpy(classificacao, "Piloto aprovado");
	}else if(media>=50){
	    strcpy(classificacao, "Cadete em recuperação");
	}else{
	    strcpy(classificacao, "Treinamento reiniciado");
	}
	
	printf("---------- RESULTADO ----------\n Cadete: %d\n Pontuação total: %d\n Média: %f\n Classificação: %s\n -------------------------------------\n", codCadete, total, media, classificacao);
	
	printf("Avaliar outro Cadete? 1-Sim | 0-Não: \n");
	scanf("%d", &continuar);
	
    }while(continuar==1);

	return 0;
    
}