#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char name[50];
    int cityCode;
    int population;
    float area;
    float pib;
    int touristPoints;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &name);

    printf("\n Digite o código da sua cidade: \n");
    scanf("%d", &cityCode);

    printf("\nDigite a população da sua cidade: \n");
    scanf("%d", &population);
    
    printf("\nDigite a área da sua cidade: \n");
    scanf("%f", &area);

    printf("\nDigite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("\nDigite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &touristPoints);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nA sua cidade é: %s \n", name);
    printf("O código da cidade é: %d \n", cityCode);
    printf("A população da cidade é: %d \n", population);
    printf("A área da cidade é: %2.f \n", area);
    printf("O PIB da cidade é: %2.f \n", pib);
    printf("A quantidade de pontos turísticos é: %d \n\n", touristPoints);

    return 0;
}
