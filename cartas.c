#include <stdio.h>
#include <string.h>

int main(void) {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];           // 3 chars + '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ---------------- Carta 1 - entrada de dados ---------------- */
    printf("Carta 1:\n");

    printf("Estado (A-H): ");
    if (scanf(" %c", &estado1) != 1) {
        fprintf(stderr, "Erro na leitura do estado.\n");
        return 1;
    }

    printf("Código da Carta (ex: AB1): ");
    if (scanf(" %3s", codigo1) != 1) {
        fprintf(stderr, "Erro na leitura do código.\n");
        return 1;
    }

    // Limpa o '\n' restante antes de usar fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Nome da Cidade: ");
    if (fgets(nomeCidade1, sizeof(nomeCidade1), stdin) == NULL) {
        fprintf(stderr, "Erro na leitura do nome da cidade.\n");
        return 1;
    }
    // remove '\n' final se existir
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    if (scanf("%d", &populacao1) != 1) {
        fprintf(stderr, "Erro na leitura da população.\n");
        return 1;
    }

    printf("Área (km²): ");
    if (scanf("%f", &area1) != 1) {
        fprintf(stderr, "Erro na leitura da área.\n");
        return 1;
    }

    printf("PIB: ");
    if (scanf("%f", &pib1) != 1) {
        fprintf(stderr, "Erro na leitura do PIB.\n");
        return 1;
    }

    printf("Pontos Turísticos: ");
    if (scanf("%d", &pontosTuristicos1) != 1) {
        fprintf(stderr, "Erro na leitura dos pontos turísticos.\n");
        return 1;
    }

    /* limpa buffer antes da segunda entrada de texto */
    while ((c = getchar()) != '\n' && c != EOF) { }

    /* ---------------- Carta 2 - entrada de dados ---------------- */
    printf("\nCarta 2:\n");

    printf("Estado (A-H): ");
    if (scanf(" %c", &estado2) != 1) {
        fprintf(stderr, "Erro na leitura do estado.\n");
        return 1;
    }

    printf("Código da Carta (ex: AB2): ");
    if (scanf(" %3s", codigo2) != 1) {
        fprintf(stderr, "Erro na leitura do código.\n");
        return 1;
    }

    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Nome da Cidade: ");
    if (fgets(nomeCidade2, sizeof(nomeCidade2), stdin) == NULL) {
        fprintf(stderr, "Erro na leitura do nome da cidade.\n");
        return 1;
    }
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    if (scanf("%d", &populacao2) != 1) {
        fprintf(stderr, "Erro na leitura da população.\n");
        return 1;
    }

    printf("Área (km²): ");
    if (scanf("%f", &area2) != 1) {
        fprintf(stderr, "Erro na leitura da área.\n");
        return 1;
    }

    printf("PIB: ");
    if (scanf("%f", &pib2) != 1) {
        fprintf(stderr, "Erro na leitura do PIB.\n");
        return 1;
    }

    printf("Pontos Turísticos: ");
    if (scanf("%d", &pontosTuristicos2) != 1) {
        fprintf(stderr, "Erro na leitura dos pontos turísticos.\n");
        return 1;
    }

    /* ---------------- Exemplo de saída (mostra os dados lidos) ---------------- */
    printf("\n--- Resumo das Cartas ---\n");
    printf("Carta 1: Estado=%c, Código=%s, Cidade=\"%s\", Pop=%d, Área=%.2f km², PIB=%.2f, Pontos=%d\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("Carta 2: Estado=%c, Código=%s, Cidade=\"%s\", Pop=%d, Área=%.2f km², PIB=%.2f, Pontos=%d\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}
