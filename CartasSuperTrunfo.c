#include <stdio.h>
#include <string.h>

struct Card
{
    char cardName[12];
    char stateName;
    char cityCode[12];

    char cityName[50];
    unsigned int population;
    float area;
    float pib;
    int touristPoints;

    float pibPerCapita;
    float populationDensity;

    float superPower;
};

float DivideNumbers(float a, float b)
{
    float result = a / b;

    return result;
}

float CalculateSuperPower(float population, float area, float pib, float touristPoint, float pibPerCapita, float populationDensity)
{
    float result = population + area + pib + touristPoint + pibPerCapita - populationDensity;

    return result;
}

void ShowCardAttributes(struct Card card)
{
    printf("\n");
    printf("%s\n", card.cardName);
    printf("O Estado é: %c\n", card.stateName);
    printf("O Código é: %s\n", card.cityCode);
    printf("O nome da cidade é: %s\n", card.cityName);
    printf("A população da cidade é: %d\n", card.population);
    printf("A área da cidade é : %.2f\n", card.area);
    printf("O PIB da cidade é: %.2f\n", card.pib);
    printf("A quantidade de pontos turísticos é: %d\n", card.touristPoints);
    printf("O PIB per Capita da cidade é: %.2f\n", card.pibPerCapita);
    printf("A densidade da cidade é: %.2f\n", card.populationDensity);
}

struct Card FillCardAttributes(char cardName[], struct Card card)
{
    strcpy(card.cardName, cardName);
    printf("%s\n", &card.cardName);

    printf("Digite a primeira letra do seu estado: ");
    scanf(" %c", &card.stateName);

    printf("Digite um número de 01 à 04: ");
    scanf("%s", &card.cityCode);

    printf("Digite o primeiro nome da sua cidade: ");
    scanf("%s", &card.cityName);

    printf("Digite o número de habitantes da sua cidade: ");
    scanf("%d", &card.population);

    printf("Digite a área da sua cidade: ");
    scanf("%f", &card.area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &card.pib);

    printf("Digite a quantidade de pontos túristicos existentes na sua cidade: ");
    scanf("%d", &card.touristPoints);

    card.populationDensity = DivideNumbers(card.population, card.area);
    card.pibPerCapita = DivideNumbers(card.pib, card.population);
    card.superPower = card.population + card.area + card.pib + card.touristPoints + card.pibPerCapita - card.populationDensity;

    return card;
}

void CompareCards(struct Card card1, struct Card card2)
{
    printf("Comparação: \n ");
    printf("População: %s venceu\n ", card1.population > card2.population ? card1.cardName : card2.cardName);
    printf("Área: %s venceu\n ", card1.area > card2.area ? card1.cardName : card2.cardName);
    printf("PIB: %s venceu\n ", card1.pib > card2.pib ? card1.cardName : card2.cardName);
    printf("Quantidade de pontos turísticos: %s venceu\n ", card1.touristPoints > card2.touristPoints ? card1.cardName : card2.cardName);
    printf("PIB per Capita: %s venceu\n", card1.pibPerCapita > card2.pibPerCapita ? card1.cardName : card2.cardName);
    printf("Densidade Populacional: %s venceu\n", card1.populationDensity > card2.populationDensity ? card1.cardName : card2.cardName);
    printf("Super Poder: %s venceu\n", card1.superPower > card2.superPower ? card1.cardName : card2.cardName);

    printf("\n Fim da batalha");
}

int main() {
   
    //Definição das cartas
    struct Card card1;
    struct Card card2;

    //Preenchimento dos atributos
    card1 = FillCardAttributes("Carta 1", card1);
    card2 = FillCardAttributes("Carta 2", card2);

    //Mostra os atributos que o jogador preencheu
    ShowCardAttributes(card1);
    ShowCardAttributes(card2);

    //Compara as cartas
    printf("\n");
    CompareCards(card1, card2);

    return 0;
}
