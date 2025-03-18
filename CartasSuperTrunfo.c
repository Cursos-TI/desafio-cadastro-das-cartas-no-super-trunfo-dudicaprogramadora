
#include <stdio.h>


int main() {

    printf("Seja bem-vindo ao Desafio Super Trunfo - Países\n");

    
    int populacao1;  
    float area1;    
    float pib1;      
    int turismo1;    
    
    int populacao2;  
    float area2;     
    float pib2;     
    int turismo2;    

    
    printf("\nInforme os dados da Primeira Carta:\n");

    printf("Informe a População: \n");
    scanf("%d", &populacao1);

    printf("Informe a área (em km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    
    printf("\nInforme os dados da Segunda Carta:\n");

    printf("Informe a População: \n");
    scanf("%d", &populacao2);

    printf("Informe a área (em km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    
    printf("\nDados cadastrados da Primeira Carta:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\nDados cadastrados da Segunda Carta:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);



    return 0;
}

