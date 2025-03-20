#include <stdio.h>

//Dados da Carta 1
char estado1[10];
char city1[10];
char cdg1[3];
unsigned int pop1;
float pib1;
int pts1;
float area;
float densidade1;
double capita1; 


//Dados da Carta 2
char estado2[10];
char cdg2[3];
char city2[10];
unsigned int pop2;
float pib2;
int pts2;
float area2;
float densidade2;
double capita2;

//Comparação das Cartas

int resultado_area;
int resultado_pop;
int resultado_pib;
int resultado_pts;
int resultado_densidade;
int resultado_capita;



int main(){

    //Obtenção dos dados da Carta 1

    printf("Digite o Estado da Carta 1: \n"); 
    scanf("%s", estado1);

    printf("Digite a cidade da Carta 1: \n");
    scanf("%s", city1);

    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", cdg1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a quantidade de pontos turisticos da Carta 1: \n");
    scanf("%d", &pts1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a area da Carta 1: \n");
    scanf("%f", &area);

    densidade1 = pop1 / area;
    capita1 = pib1 / area;

    //Obtenção dos Dados da Carta 2

    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Digite a cidade da Carta 2: \n");
    scanf("%s", city2);

    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", cdg2);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite a quantidade de pontos turisticos da Carta 2: \n");
    scanf("%d", &pts2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a area da Carta 2: \n");
    scanf("%f", &area2);

    densidade2 = pop2 / area2;
    capita2 = pib2 / area2;



    //Exibição dos Dados da carta 1
    printf("\nCarta 1: \n");
    printf("\nEstado: %s\n", estado1);
    printf("\nNome da Cidade: %s\n", city1);
    printf("\nCodigo: %s\n", cdg1);
    printf("\nPopulação: %d\n", pop1);
    printf("\nArea(km): %f\n", area);
    printf("\nPIB: %.2f Bilhões de Reais \n", pib1);
    printf("\nNumero de Pontos turisticos: %d\n", pts1);
    printf("\nDensidade PopulacionaL: %f\n", densidade1);
    printf("\nPIB per Capita: %f\n",capita1);
    

    //Exibição dos Dados da Carta 2
    printf("\nCarta 2: \n");
    printf("\nEstado: %s\n", estado2);
    printf("\nCidade: %s\n", city2);
    printf("\nCodigo: %s\n", cdg2);
    printf("\nPopulação: %d\n", pop2);
    printf("\nArea(km): %f\n", area2);
    printf("\nPIB: %.2f Bilhões de Reais \n", pib2);
    printf("\nNumero de Pontos turisticos: %d\n", pts2);
    printf("\nDensidade PopulacionaL: %f\n", densidade2);
    printf("\nPIB per Capita: %f\n",capita2);

    //Comparações

    resultado_area = area > area2;
    resultado_pop = pop1 > pop2;
    resultado_pib = pib1 > pib2;
    resultado_pts = pts1 > pts2;
    resultado_densidade = densidade1 > densidade2;
    resultado_capita = capita1 > capita2;

    printf("Resultado da Area: %d \n", resultado_area);
    printf("Resultado da População: %d \n", resultado_pop);
    printf("Resultado do PIB: %d \n", resultado_pib);
    printf("Resultado dos Pontos Turisticos: %d \n", resultado_pts);
    printf("Resultado da Densidade Demográfica: %d \n", resultado_densidade);
    printf("Resultado do PIB per capita: %d \n", resultado_capita);
   
}


