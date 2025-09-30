#include <stdio.h>

int main() {
    int opcao;

    // Menu inicial
    printf("===== SUPER TRUNFO - PAISES =====\n");
    printf("Escolha o nível:\n");
    printf("1 - Nível Novato (Cadastro)\n");
    printf("2 - Nível Aventureiro (Cálculos)\n");
    printf("3 - Nível Mestre (Comparações e Super Poder)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Variáveis em comum
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Cálculos adicionais
    float dens1, dens2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;

    switch(opcao) {
        Desafio 1:
            // Nível Novato
            printf("\n-- Cadastro da primeira carta --\n");
            printf("Código: ");
            scanf("%s", codigo1);
            printf("População: ");
            scanf("%lu", &populacao1);
            printf("Área: ");
            scanf("%f", &area1);
            printf("PIB: ");
            scanf("%f", &pib1);
            printf("Pontos turísticos: ");
            scanf("%d", &pontos1);

            printf("\n-- Cadastro da segunda carta --\n");
            printf("Código: ");
            scanf("%s", codigo2);
            printf("População: ");
            scanf("%lu", &populacao2);
            printf("Área: ");
            scanf("%f", &area2);
            printf("PIB: ");
            scanf("%f", &pib2);
            printf("Pontos turísticos: ");
            scanf("%d", &pontos2);

            printf("\n--- Carta 1 ---\n");
            printf("Código: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n", codigo1, populacao1, area1, pib1, pontos1);

            printf("\n--- Carta 2 ---\n");
            printf("Código: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n", codigo2, populacao2, area2, pib2, pontos2);
            break;

       Desafio 2:
            // Nível Aventureiro - cálculos
            printf("\n-- Cadastro das duas cartas --\n");
            printf("População 1: ");
            scanf("%lu", &populacao1);
            printf("Área 1: ");
            scanf("%f", &area1);
            printf("PIB 1: ");
            scanf("%f", &pib1);

            printf("População 2: ");
            scanf("%lu", &populacao2);
            printf("Área 2: ");
            scanf("%f", &area2);
            printf("PIB 2: ");
            scanf("%f", &pib2);

            dens1 = populacao1 / area1;
            dens2 = populacao2 / area2;
            percapita1 = pib1 / populacao1;
            percapita2 = pib2 / populacao2;

            printf("\n--- Resultados ---\n");
            printf("Densidade Populacional 1: %.2f\n", dens1);
            printf("PIB per capita 1: %.6f\n", percapita1);

            printf("Densidade Populacional 2: %.2f\n", dens2);
            printf("PIB per capita 2: %.6f\n", percapita2);
            break;

       Desafio 3:
            // Nível Mestre - Comparações e Super Poder
            printf("\n-- Cadastro completo das duas cartas --\n");
            printf("População 1: ");
            scanf("%lu", &populacao1);
            printf("Área 1: ");
            scanf("%f", &area1);
            printf("PIB 1: ");
            scanf("%f", &pib1);
            printf("Pontos turísticos 1: ");
            scanf("%d", &pontos1);

            printf("População 2: ");
            scanf("%lu", &populacao2);
            printf("Área 2: ");
            scanf("%f", &area2);
            printf("PIB 2: ");
            scanf("%f", &pib2);
            printf("Pontos turísticos 2: ");
            scanf("%d", &pontos2);

            // Cálculos
            dens1 = populacao1 / area1;
            dens2 = populacao2 / area2;
            percapita1 = pib1 / populacao1;
            percapita2 = pib2 / populacao2;

            // Super poder (com densidade invertida)
            superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + (1 / dens1);
            superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / dens2);

            printf("\n--- Comparação ---\n");

            printf("População: %d\n", populacao1 > populacao2);
            printf("Área: %d\n", area1 > area2);
            printf("PIB: %d\n", pib1 > pib2);
            printf("Pontos turísticos: %d\n", pontos1 > pontos2);
            printf("PIB per capita: %d\n", percapita1 > percapita2);
            printf("Densidade populacional (menor ganha): %d\n", dens1 < dens2);
            printf("Super Poder: %d\n", superpoder1 > superpoder2);

            printf("\nSuper Poder da Carta 1: %.2f\n", superpoder1);
            printf("Super Poder da Carta 2: %.2f\n", superpoder2);
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
