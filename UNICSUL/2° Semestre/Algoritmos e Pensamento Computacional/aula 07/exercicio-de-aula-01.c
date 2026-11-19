#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    for(i=0; i<=11; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}