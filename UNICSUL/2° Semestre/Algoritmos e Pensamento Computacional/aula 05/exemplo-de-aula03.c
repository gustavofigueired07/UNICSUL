#include <stdio.h>

int main () {
    float n1, n2, frequencia, media;
    
    printf("Digite a sua nota 1: ");
    scanf("%f", &n1);
    
    printf("Digite a sua nota2: ");
    scanf("%f", &n2);
    
    printf("Digite sua frequencia: ");
    scanf("%f", &frequencia);
    
    media = (n1+n2)/2.0f;
    
    if (frequencia >= 75) {
        if (media >= 6){
        printf ("APROVADO com media %.2f", media);
        }
        else{ 
        printf ("Reprovado");
        }
    }
    else{
    printf("Você foi reprovado por frequencia");
    }
   
    
 return 0;  
}
