#include <stdio.h>

int main() {
    int numero;
    int contador_a = 0; 
    int contador_b = 0; 
    int contador_c = 0;
    int contador_d = 0; // respectivamente [0, 25], [26, 50], [51, 75], [76, 100]

    printf("Digite um numero inteiro / Digite um negativo para encerrar: ");
    scanf("%d", &numero);

    while (numero >= 0) {

    // verificação dos intervalos
    if (numero >= 0 && numero <= 25) {
        contador_a++;
    } else if (numero >= 26 && numero <= 50) {
        contador_b++;
    } else if (numero >= 51 && numero <= 75) {
        contador_c++;
    } else if (numero >= 76 && numero <= 100) {
        contador_d++;
    }

    scanf("%d", &numero); // leo o proximo numero
}

    printf("Dentro do intervalo [0, 25], foram inseridos %d numeros!", contador_a);
    printf("Dentro do intervalo [26, 50], foram inseridos %d numeros!", contador_b);
    printf("Dentro do intervalo [51, 75], foram inseridos %d numeros!", contador_c);
    printf("Dentro do intervalo [76, 100], foram inseridos %d numeros!", contador_d);

    return 0;

}