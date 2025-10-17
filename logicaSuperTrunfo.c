#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 // Definição das variáveis para armazenar as propriedades das cidades
   char estado1[15];
   char estado2[15];
   char codigo1[5];
   char codigo2[5];
   char cidade1[15];
   char cidade2[15];
   int populaçao1, populaçao2;
   float area1, area2;
   float PIB1, PIB2;
   int pontoturistico1, pontoturistico2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

   printf("Bem vindo ao sistema de cadastro de cartas!\n");
   printf("Digite o nome do primeiro estado: \n");
    scanf("%s", estado1);
   printf("Digite o codigo do primeiro estado: \n");
    scanf("%s", codigo1);
   printf("Digite o nome da capital do primeiro estado: \n");
    scanf("%s", cidade1);
   printf("Digite a populaçao do primeiro estado: \n");
    scanf("%d", &populaçao1);
   printf("Digite a area do primeiro estado: \n");
    scanf("%f", &area1);
   printf("Digite o PIB do primeiro estado: \n");
    scanf("%f", &PIB1);
   printf("Digite o numero de pontos turisticos do primeiro estado: \n");
    scanf("%d", &pontoturistico1);

   printf("Digite o nome do segundo estado: \n");
    scanf("%s", estado2);
   printf("Digite o codigo do segundo estado: \n");
    scanf("%s", codigo2);
   printf("Digite o nome da capital do segundo estado: \n");
    scanf("%s", cidade2);
   printf("Digite a populaçao do segundo estado: \n");
    scanf("%d", &populaçao2);
   printf("Digite a area do segundo estado: \n");
    scanf("%f", &area2);
   printf("Digite o PIB do segundo estado: \n");
    scanf("%f", &PIB2);
   printf("Digite o numero de pontos turisticos do segundo estado: \n");
    scanf("%d", &pontoturistico2);
    
    printf("CARTA DO PRIMEIRO ESTADO\n");
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s\n", codigo1);
    printf("CAPITAL: %s\n", cidade1);
    printf("POPULAÇAO: %d\n", populaçao1);
    printf("AREA: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("PONTOS TURISTICOS: %d\n", pontoturistico1);
    printf("DENSIDADE POPULACIONAL DO PRIMEIRO ESTADO: %f\n", populaçao1/area1);
    printf("PIB PER CAPITA DO PRIMEIRO ESTADO: %f\n", PIB1/populaçao1);

    printf("CARTA DO SEGUNDO ESTADO\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("CAPITAL: %s\n", cidade2);
    printf("POPULAÇAO: %d\n", populaçao2);
    printf("AREA: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("PONTOS TURISTICOS: %d\n", pontoturistico2);
    printf("DENSIDADE POPULACIONAL DO PRIMEIRO ESTADO: %f\n", populaçao2/area2);
    printf("PIB PER CAPITA DO PRIMEIRO ESTADO: %f\n", PIB2/populaçao2);

     // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populaçao1 > populaçao2){
        printf("A CARTA DO PRIMEIRO ESTADO VENCEU!\n");
    } else {
        printf("A CARTA DO SEGUNDO ESTADO VENCEU!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    return 0;

}
