#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    #pragma region Valores da Carta1
    char firstCardCityName[50];
    int firstCardCityCode;
    int firstCardPopulationValue;
    float firstCardAreaValue;
    float firstCardPIBValue;
    int firstCardTouristPoints;

    #pragma endregion

    #pragma region Valoed da Carta2
    char secondCardCityName[50];
    int secondCardCityCode;
    int secondCardPopulationValue;
    float secondCardAreaValue;
    float secondCardPIBValue;
    int secondCardTouristPoints;
    #pragma endregion
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    #pragma region Atribuicoes da Carta1
    
    printf("Carta1\n");
    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &firstCardCityName);

    printf("\n Digite o código da sua cidade: \n");
    scanf("%d", &firstCardCityCode);

    printf("\nDigite a população da sua cidade: \n");
    scanf("%d", &firstCardPopulationValue);
    
    printf("\nDigite a área da sua cidade: \n");
    scanf("%f", &firstCardAreaValue);

    printf("\nDigite o PIB da sua cidade: \n");
    scanf("%f", &firstCardPIBValue);

    printf("\nDigite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &firstCardTouristPoints);

    #pragma endregion

    #pragma region Atribuicoes da Carta2
    printf("\nCarta2\n");
    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &secondCardCityName);

    printf("\n Digite o código da sua cidade: \n");
    scanf("%d", &secondCardCityCode);

    printf("\nDigite a população da sua cidade: \n");
    scanf("%d", &secondCardPopulationValue);
    
    printf("\nDigite a área da sua cidade: \n");
    scanf("%f", &secondCardAreaValue);

    printf("\nDigite o PIB da sua cidade: \n");
    scanf("%f", &secondCardPIBValue);

    printf("\nDigite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &secondCardTouristPoints);

    #pragma endregion

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #pragma region Resultado da Primeira Carta

    printf("\n Carta 1");
    printf("\nA sua cidade é: %s \n", firstCardCityName);
    printf("O código da cidade é: %d \n", firstCardCityCode);
    printf("A população da cidade é: %d \n", firstCardPopulationValue);
    printf("A área da cidade é: %2.f \n", firstCardAreaValue);
    printf("O PIB da cidade é: %2.f \n", firstCardPIBValue);
    printf("A quantidade de pontos turísticos é: %d \n", firstCardTouristPoints);

    #pragma endregion

    #pragma region Resultado da Segunda Carta

    printf("\n Carta 2");
    printf("\nA sua cidade é: %s \n", secondCardCityName);
    printf("O código da cidade é: %d \n", secondCardCityCode);
    printf("A população da cidade é: %d \n", secondCardPopulationValue);
    printf("A área da cidade é: %2.f \n", secondCardAreaValue);
    printf("O PIB da cidade é: %2.f \n", secondCardPIBValue);
    printf("A quantidade de pontos turísticos é: %d \n\n", secondCardTouristPoints);

    #pragma endregion

    printf("Que a batalha Comece!\n\n");
    return 0;
}
