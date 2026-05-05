#include <stdio.h>

main () {
    int tempo_total = 100; // Em minutos
    int disciplinas = 6;
    int tempo_em_disciplina, tempo_livre;

    tempo_em_disciplina = tempo_total / disciplinas;
    tempo_livre = tempo_total % disciplinas;

    printf("Tempo total disponivel: %d minutos\n", tempo_total);
    printf("Numero de disciplinas: %d\n", disciplinas);
    printf("Tempo por disciplina: %d minutos\n", tempo_em_disciplina);
    printf("Tempo livre: %d minutos\n", tempo_livre);

    return 0;

}