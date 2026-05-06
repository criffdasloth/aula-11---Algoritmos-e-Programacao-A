#include <stdio.h>

int main() {
    int tamanho, linha, coluna;

    do {
        printf("Digite o tamanho do lado do quadrado (entre 2 e 10): ");
        scanf("%d", &tamanho);

        if (lado <2 || lado > 10) {
            puts("Valor invalido para o tamanho!");
        }
    while (lado < 2 || lado > 10);
    
    printf("\n"); 

    // lado externo com as linhas
    for (linha = 1; linha <= tamanho; linha++) {

        // lado interno com as colunas
        for (coluna = 1; coluna <= tamanho; coluna++) {

            if (linha == 1 || linha == tamanho || coluna == 1 || coluna == tamanho) {
                print("X");
            } else {
                printf(" ");
            }
        }
    }

    printf("\n");

    }

    return 0;
}