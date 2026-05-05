#include <stdio.h> 

main () {
    float altura_chico = 1.70;
    float altura_juca = 1.10;
    int anos = 0;

    // o laço vai continuando até que juca seja maior ou igual a chico
    while (altura_juca <= altura_chico) {
        altura_juca += 0.03; // cresce 3 cm ao ano
        altura_chico += 0.02; // cresce 2 cm ao ano
        anos++;
    }

    printf("Serao necessarios %d anos para Juca ficar maior que Chico. \n", anos);    
    printf("Altura final de Chico e: %2.f! \n", altura_chico);
    printf("Altura final de Juca e: %2.f! \n", altura_juca);


    return 0;

}