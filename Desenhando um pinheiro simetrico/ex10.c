#include <stdio.h>

int main () {
    int altura, linha, coluna; 
    int espacos, x;

    // copa do pinheiro
    printf("Digite a altura da copa (3 a 10): ");
    scanf("%d", &altura);

    while (altura < 3 || altura > 10) {
        printf("Altura invalida. Digite novamente (3 a 10): ");
        scanf("%d", &altura);
    }

    // Desenhar a copa do pinheiro
    for (linha = 1; linha <= altura; linha++) {
        // Imprimir espacos
        for (espacos = 1; espacos <= altura - linha; espacos++) {
            printf(" ");
        }
        // Imprimir asteriscos
        for (x = 1; x <= 2 * linha - 1; x++) {
            printf("X");
        }
        printf("\n");
    }

    // tronco do pinheiro
    for (linha = 1; linha <= 2; linha++) {
        // Imprimir espacos
        for (espacos = 1; espacos <= altura - 1; espacos++) {
            printf(" ");
        }
        // Imprimir asteriscos
        printf("XXX\n");
    }

    return 0;

}