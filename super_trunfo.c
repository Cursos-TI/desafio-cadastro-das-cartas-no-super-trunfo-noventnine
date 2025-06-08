#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1[] = "Amazonas";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Manaus";
    int populacao1 = 1400000;
    float area1 = 11401.0;
    float pib1 = 53.0;
    int pontosTuristicos1 = 110;

    char estado2[] = "Acre";
    char codigo2[] = "A02";
    char nomeCidade2[] = "Rio Branco"; // Presumi que seja a capital, mas podemos ajustar
    int populacao2 = 343000;
    float area2 = 152.5;
    float pib2 = 2.3;
    int pontosTuristicos2 = 53;

    // Exibição organizada dos dados cadastrados
    printf("\n=== Informações das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}