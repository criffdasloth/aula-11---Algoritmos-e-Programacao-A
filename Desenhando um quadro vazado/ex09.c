#include <stdio.h>

int main() {
    int tamanho, linha, coluna;

    do {
        printf("Digite o tamanho do lado do quadrado (entre 2 e 10): ");
        scanf("%d", &tamanho);

        if (tamanho < 2 || tamanho > 10) {
            puts("Valor invalido para o tamanho!");
        }
    } while (tamanho < 2 || tamanho > 10);

    printf("\n");

    for (linha = 1; linha <= tamanho; linha++) {

        for (coluna = 1; coluna <= tamanho; coluna++) {

            if (linha == 1 || linha == tamanho ||
                coluna == 1 || coluna == tamanho) {
                printf("X");
            } else {
                printf(" ");
            }
        }

        printf("\n"); // pula linha ao terminar cada linha do quadrado
    }

    return 0;
}