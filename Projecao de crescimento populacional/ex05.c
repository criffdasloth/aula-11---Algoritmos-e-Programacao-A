#include <stdio.h>

main () {
    float populacao_a = 5000000;
    float populacao_b = 7000000;
    int anos = 0;

    // enquanto a população de a for menor igual que a de b
    while (populacao_a <= populacao_b) {
        populacao_a += populacao_b * 0.03;
        populacao_b += populacao_a * 0.02;
        anos++;
    }

    printf("Serao necessarios %d anos para a populacao do país A ultrapasse a do país B!", anos);


    return 0;

}