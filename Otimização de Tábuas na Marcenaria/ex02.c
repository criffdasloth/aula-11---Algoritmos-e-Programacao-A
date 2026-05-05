#include <stdio.h>

main () {
    int pedacos = 45;
    int tamanho_metros;
    int tamanho_cm;
    int quantidade;
    float sobra; 

    puts("Tamanho de tabuas disponíveis pra compra: 3, 4 e 5 metros!");
    printf("Digite o tamanho da tábua desejada: ");
    scanf("%d", &tamanho_metros);

    tamanho_cm = tamanho_metros * 100;

    quantidade = tamanho_cm / pedacos;
    sobra = tamanho_cm % pedacos;

    printf("Tamanho de %d metros = %dcm! \n", tamanho_metros, tamanho_cm);
    printf("Sao %d pedacos de 45cm! \n", quantidade);
    printf("Sobra %f cm das tabuas! \n", sobra);

    return 0;

}