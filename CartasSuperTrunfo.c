#include <stdio.h>

int main(){
    //Declaração de variavel da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;

//Declaração de variavel da segunda carta
 char estado2;
 char codigo2[2];
char cidade2;
int população2;
float area2;
float pib2;
int pontosturisticos2;

//Carta 1
printf("Digite o nome do estado: \n");
scanf('%c' , &estado1);

printf("Digite o codigo: \n");
scanf('%s' , &codigo1);

printf("Digite o nome da cidade: \n" );
scanf('%s' , &cidade2);

printf("Digite o numero de habitantes: \n");
scanf ('%d' , &população1);

printf("Digite a area em quilômetros quadrados: \n");
scanf('%f' , &area1);

printf("Digite o Produto Interno Bruto(pib): \n");
scanf('%f' , &pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf('%d' , &pontosturisticos1);

//Carta 2
printf("Digite o nome do estado: \n");
scanf('%c' , &estado2);

printf("Digite o codigo: \n");
scanf('%s' , &codigo2);

printf("Digite o nome da cidade: \n" );
scanf('%s' , &cidade2);

printf("Digite o numero de habitantes: \n");
scanf ('%d' , &população2);

printf("Digite a area em quilômetros quadrados: \n");
scanf('%f' , &area2);

printf("Digite o Produto Interno Bruto(pib): \n");
scanf('%f' , &pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf('%d' , &pontosturisticos2);

//imprimindo carta 1
printf("Nome do estado: %c\n" , estado1);
printf("codigo: %s\n" , codigo1);
printf("Nome da cidade: %s\n" , cidade1);
printf("Numero de habitantes :%d\n" , população1);
printf("Area em quilômetros quadrados :%f\n" , area1);
printf("Produto Interno Bruto(pib): %f\n" , pib1);
printf("Quantidade de pontos turisticos: %d\n" , pontosturisticos1);

//imprimindo carta 2
printf("Nome do estado: %c\n" , estado2);
printf("codigo: %s\n" , codigo2);
printf("Nome da cidade: %s\n" , cidade2);
printf("Numero de habitantes :%d\n" , população2);
printf("Area em quilômetros quadrados :%f\n" , area2);
printf("Produto Interno Bruto(pib): %f\n" , pib2);
printf("Quantidade de pontos turisticos: %d\n" , pontosturisticos2);

return 0;

}