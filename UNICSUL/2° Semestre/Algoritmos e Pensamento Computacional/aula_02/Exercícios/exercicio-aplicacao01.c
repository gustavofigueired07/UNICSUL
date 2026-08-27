#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, perimetro;
    printf("Qual a medida do raio (em cm)? ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    printf("O perimetro da circunfêrencia é %.2f\n", perimetro);
    return 0;
}