#include <stdio.h>
#include <math.h>

int main () {
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    
    printf("Digite o valor de a: ");
    scanf("%f",&a);
    
    printf("Digite o valor de b: ");
    scanf("%F", &b);
    
    printf("Digite o valor de c: ");
    scanf("%F", &c);
    
    delta = b*b - 4 * a * c;
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    printf ("\n O valor da primeira raiz é: %.2f\n", x1);
    printf ("\n O valor da primeira raiz é: %.2f\n", x2);
    return 0;
}