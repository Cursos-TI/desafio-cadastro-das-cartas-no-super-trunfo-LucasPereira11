#include <stdio.h>

int main(){
    // Declaração das variáveis para a primeira carta
    char estado1, 
    char codigo1[4], 
    char nomecidade1[50];
    int populacao1;
    float area1; 
    float pib1;
    int pontosturisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[1];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Carta 1

    printf("Digite o Estado (A-H) da carta: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    print("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1);

    print("Digite o número de abitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto(PIB): \n");
    scanf("%f", &pib1);

    print("Pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Carta 2

    printf("Digite o Estado (A-H) da carta: \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    print("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);

    print("Digite o número de abitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB): \n");
    scanf("%f", &pib2);

    print("Pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    return 0;
}
