#include <stdio.h>

int main () {
    int x, passos, maior_numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &x);

    // enquanto 0 ou numero negativo, operação invalida
    while (x <= 0) {
        printf("Numero invalido! Digite novamente!: ");
        scanf("%d", &x);
    }

    passos = 0;
    maior_numero = x; // começa em x pois ainda nao ha outro parametro

    while (x != 1) {
        if (x % 2 == 0) { // caso x seja par
            x = x / 2;
        } else { //  caso nao seja par
            x = 3 * x + 1;
        }

        // acrescenta um passo
        passos = passos + 1;

        // atualiza caso x for maior
        if (x > maior_numero) {
            maior_numero = x;
        }

        printf("Passo n %d: %d \n", passos, x);

    }
    
    printf("Total de passos: %d! \n", passos);
    printf("Maior numero: %d! \n", maior_numero);

    return 0;
}