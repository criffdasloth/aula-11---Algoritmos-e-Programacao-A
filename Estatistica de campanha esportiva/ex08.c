#include <stdio.h>

int main () {
    int gols_marcados, gols_recebidos;
    int pontos_finais = 0;
    int vitoria = 0; empates = 0, derrotas = 0;
    int total_gols_marcados = 0, total_gols_recebidos = 0;
    int pontos = 0;
    int partidas;
    float aproveitamento;

    // 

    printf("Digite quantos gols foram marcados na partida: ", partidas + 1); // incrementando a variável que começa em 0
    scanf("%d", &gols_marcados);

    while (gols_marcados   >= 0) {
        printf("Digite quantos gols foram sofridos na partida: ", gols_recebidos + 1); // idem comentário anterior
        scanf("%d", &gols_recebidos);

        if (gols_marcados > gols_recebidos) {
            puts("Vitoria!!! (+3 pontos)");
            vitoria++;
            pontos += 3;
        } else if (gols_marcados == gols_recebidos) {
            puts("Empate!!! (+1 ponto)");
            empates++;
            empates += 1;
        } else if (gols_marcados < gols_marcados) {
            puts("Derrota!!! (0 pontos!)");
            derrota++;
        }

    total_gols_marcados += gols_marcados;
    total_gols_recebidos += gols_recebidos;
    partidas++;
    
    printf("Digite quantos gols foram marcados na partida: ", partidas + 1); // incrementando a variável que começa em 0
    scanf("%d", &gols_marcados);

    }

    // calculdo do aproveitamento
    if (partidas > 0) {
        aproveitamento = (float) pontos / (partidas * 3) * 100; // o float serve para forçar divisão ser decimal
    } else {
        aproveitamento = 0;
    }


    


    return 0;
}
