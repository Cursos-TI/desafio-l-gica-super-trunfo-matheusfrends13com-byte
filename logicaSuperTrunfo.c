#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

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
   float densidadedemografica1 = (float) populaçao1 / area1;
   float densidadedemografica2 = (float) populaçao2 / area2;
   int opçao;


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
   printf("MENU PRINCIPAL\n");
   printf("1.Iniciar Jogo com o atributo População\n");
   printf("2.Iniciar Jogo com o atributo Área\n");
   printf("3.Iniciar Jogo com o atributo PIB\n");
   printf("4.Iniciar Jogo com o atributo Ponto Turístico\n");
   printf("5.Iniciar Jogo com o atributo Densidade Demográfica\n");
   printf("Sair do Jogo\n");
   printf("Escolha Uma Opçao: \n");
   scanf("%d", &opçao);



   switch (opçao)
   {
    case 1:
     printf("digite o primeiro estado: \n");
     scanf("%s", &estado1);
     printf("digite a primeira cidade: \n");
     scanf("%s", &cidade1);
     printf("digite o primeiro código: \n");
     scanf("%s", &codigo1);
     
     printf("digite o segundo estado: \n");
     scanf("%s", &estado2);
     printf("digite a segunda cidade: \n");
     scanf("%s", &cidade2);
     printf("digite o segundo código: \n");
     scanf("%s", &codigo2);

     srand(time(0));
     populaçao1 = rand() % 1000 + 1;
      printf("População 1: %d\n", populaçao1);
     populaçao2 = rand() % 1000 + 1;
      printf("População 2: %d\n", populaçao2);
      if (populaçao1 > populaçao2){
        printf("A Carta 1 ganhou!\n");
      } else if (populaçao1 < populaçao2){
        printf("A Carta 2 ganhou!\n");
      } else {
        printf("Houve Um Empate!");
      }
     break;
    case 2:
     printf("digite o primeiro estado: \n");
     scanf("%s", &estado1);
     printf("digite a primeira cidade: \n");
     scanf("%s", &cidade1);
     printf("digite o primeiro código: \n");
     scanf("%s", &codigo1);
     
     printf("digite o segundo estado: \n");
     scanf("%s", &estado2);
     printf("digite a segunda cidade: \n");
     scanf("%s", &cidade2);
     printf("digite o segundo código: \n");
     scanf("%s", &codigo2);

     srand(time(0));
     area1 = rand() % 1000 + 1;
     printf("Área 1: %f\n", area1);
     area2 = rand() % 1000 + 1;
     printf("Área 2: %f\n", area2);
      if (area1 > area2){
        printf("A Carta 1 ganhou!\n");
      } else if (area1 < area2) {
        printf("A Carta 2 ganhou!\n");
      } else {
        printf("Houve Um Empate!");
      }
     break;
    case 3:
      printf("digite o primeiro estado: \n");
     scanf("%s", &estado1);
     printf("digite a primeira cidade: \n");
     scanf("%s", &cidade1);
     printf("digite o primeiro código: \n");
     scanf("%s", &codigo1);
     
     printf("digite o segundo estado: \n");
     scanf("%s", &estado2);
     printf("digite a segunda cidade: \n");
     scanf("%s", &cidade2);
     printf("digite o segundo código: \n");
     scanf("%s", &codigo2);

     srand(time(0));
     PIB1 = rand() % 1000 + 1;
     printf("PIB 1: %f\n", PIB1);
     PIB2 = rand() % 1000 + 1;
     printf("PIB 2: %f\n", PIB2);
      if (PIB1 > PIB2){
        printf("A Carta 1 ganhou!\n");
      } else if (PIB1 < PIB2) {
        printf("A Carta 2 ganhou!\n");
      } else {
        printf("Houve Um Empate!");
      }
     break;
    case 4:
      printf("digite o primeiro estado: \n");
     scanf("%s", &estado1);
     printf("digite a primeira cidade: \n");
     scanf("%s", &cidade1);
     printf("digite o primeiro código: \n");
     scanf("%s", &codigo1);
     
     printf("digite o segundo estado: \n");
     scanf("%s", &estado2);
     printf("digite a segunda cidade: \n");
     scanf("%s", &cidade2);
     printf("digite o segundo código: \n");
     scanf("%s", &codigo2);

     srand(time(0));
     pontoturistico1 = rand() % 10 + 1;
     printf("Ponto Turístico 1: %d\n", pontoturistico1);
     pontoturistico2 = rand() % 10 + 1;
     printf("Ponto Turístico 2: %d\n", pontoturistico2);
      if (pontoturistico1 >= pontoturistico2){
        printf("A Carta 1 ganhou!\n");
      } else if (pontoturistico1 < pontoturistico2){
        printf("A Carta 2 ganhou!\n");
      } else {
        printf("Houve Um Empate!");
      }
     break;
    case 5:
      printf("digite o primeiro estado: \n");
     scanf("%s", &estado1);
     printf("digite a primeira cidade: \n");
     scanf("%s", &cidade1);
     printf("digite o primeiro código: \n");
     scanf("%s", &codigo1);
     
     printf("digite o segundo estado: \n");
     scanf("%s", &estado2);
     printf("digite a segunda cidade: \n");
     scanf("%s", &cidade2);
     printf("digite o segundo código: \n");
     scanf("%s", &codigo2);


     
     srand(time(0));
     populaçao1 = rand() % 1000 + 1;
     printf("População 1: %d\n", populaçao1);
     populaçao2 = rand() % 1000 + 1;
     printf("População 2: %d\n", populaçao2);
     area1 = rand() % 1000 + 1;
     printf("Área 1: %f\n", area1);
     area2 = rand() % 1000+ 1;
     printf("Área 2: %f\n", area2);
      if (densidadedemografica1 < densidadedemografica2){
        printf("A Carta 1 ganhou!\n");
      } else if (densidadedemografica1 > densidadedemografica2) {
        printf("A Carta 2 ganhou!\n");
      } else {
        printf("Houve Um Empate!");
      }
     break;
    case 6:
     printf("Saindo do Jogo,Volte Sempre:>\n");
     break;
    default:
     printf("Opção Inválida,Tente Novamente!");
     break; 
    }
     // Comparação de Cartas:                                                                                                       
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    return 0;

}
