#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado; 
    char carta;
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turismo;

    printf("Digite seu estado:\n");
    scanf("%s",&estado);
    
    printf("Código da carta:\n");
    scanf("%s",&carta);

    printf("Nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f" ,&Area);
    
    printf("Qual o PIB da cidade:\n");
    scanf("%f" , &PIB);

    printf("Numero de pontos Turisticos:\n");
    scanf("%d", &turismo);

    
   
    return 0;
}
