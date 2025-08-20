#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

float DivideNumbers(float a, float b)
{
    float result = a / b;

    return result;
}

void ShowCardAttributes(char cardName[], char state, char cityName[], char cardCode[], int population, float area, float pib, int touristPoint)
{
    printf("\n %s", cardName);
    printf("\n O Estado é: %c", state);
    printf("\nA sua cidade é: %s \n", cityName);
    printf("O código da cidade é: %S \n", cardCode);
    printf("A população da cidade é: %d \n", population);
    printf("A área da cidade é:%.2f km quadrados \n", area);
    printf("O PIB da cidade é: %.2f \n", pib);
    printf("A quantidade de pontos turísticos é: %d \n", touristPoint);
    printf("A densidade da cidade é: %.2f\n", DivideNumbers(population, area));
    printf("O PIB per capita da cidade é: %f\n", DivideNumbers(pib, population));
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    #pragma region Valores da Carta1
    char firstCardState;
    char firstCardCityName[50];
    char firstCardCityCode[50];
    int firstCardPopulationValue;
    float firstCardAreaValue;
    float firstCardPIBValue;
    int firstCardTouristPoints;

    #pragma endregion

    #pragma region Valoed da Carta2
    char secondCardState;
    char secondCardCityName[50];
    char secondCardCityCode[50];
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

    printf("Digite A letra do seu estado: \n");
    scanf(" %c", &firstCardState);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &firstCardCityName);

    printf("\n Digite o código da sua cidade: \n");
    scanf("%s", &firstCardCityCode);

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

    printf("Digite A letra do seu estado: \n");
    scanf(" %c", &secondCardState);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &secondCardCityName);

    printf("\n Digite o código da sua cidade: \n");
    scanf("%s", &secondCardCityCode);

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

    ShowCardAttributes("Carta 1", firstCardState, firstCardCityName, firstCardCityCode, firstCardPopulationValue, firstCardAreaValue, firstCardPIBValue, firstCardTouristPoints);
    ShowCardAttributes("Carta 2", secondCardState, secondCardCityName, secondCardCityCode, secondCardPopulationValue, secondCardAreaValue, secondCardPIBValue, secondCardTouristPoints);

    printf("\nQue a batalha Comece!\n\n");
    return 0;
}
