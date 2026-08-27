#include <stdio.h>

int main() {
    int cafes; 
    float valor = 5.40;
    float total;
    printf("Cafeteria:\nQuantos cafés gostaria: ");
    scanf("%d", &cafes);
    total = cafes * valor;
    printf ("O total a pagar é %.2f reais", total);

    return 0;
}
