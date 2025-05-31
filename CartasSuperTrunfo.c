#include <stdio.h>

int main(){
    //Declaração de variavel da primeira carta
    char estado1;
    char codigo1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

//Carta 1
printf("Digite o nome do estado1: \n");
scanf("%c" , &estado1);

printf("Digite o codigo1: \n");
scanf("%s" , &codigo1);

printf("Digite o nome da cidade1: \n" );
scanf("%s" , &cidade1);
 
printf("Digite o numero de habitantes1: \n");
scanf ("%d" , &populacao1);

printf("Digite a area em quilômetros quadrados1: \n");
scanf("%f" , &area1);

printf("Digite o Produto Interno Bruto(pib)1: \n");
scanf("%f" , &pib1);

printf("Digite o numero de pontos turisticos1: \n");
scanf("%d" , &pontosturisticos1);

/imprimindo carta 1
printf("Nome do estado: %c\n" , estado1);
printf("codigo: %s\n" , codigo1);
printf("Nome da cidade: %s\n" , cidade1);
printf("Numero de habitantes :%d\n" , populacao1);
printf("Area em quilômetros quadrados :%f\n" , area1);
printf("Produto Interno Bruto(pib): %f\n" , pib1);
printf("numero de pontos turisticos: %d\n" , pontosturisticos1);
}