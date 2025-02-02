#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    printf("\n========= LÓGICA DO JOGO DE CARTAS SUPER TRUNFO =========\n");
    
    /*
    Modificadores de tipos de dados: 
    Unsigned int ou char; trabalha somente com valores positivos incluindo o zero
    Long, long long int ou double, long double para extensão do valor de armazenamento de um número
    Short int; para valores menores que 32767

    Operadores Relacionais: a >= b, a <= b, a == b, a!= b; 
    Para fazer comparações entre valores das variáveis;
    Estruturas de decisão: if, if-else; 
    */
    char estado_1[50] = "Brasil";
    char codigo_1[5] = "A01";
    char cidade_1[50] = "Brasilia";
    int populacao_1 = 2817381;
    float area_1 = 5760.78;
    float PIB_1 = 265847334.00;
    int pontos_turisticos_1 = 32;
    
    char estado_2[50] = "Portugal";
    char codigo_2[5] = "E01";
    char cidade_2[50] = "Lisboa";
    int populacao_2 = 567131;
    float area_2 = 100.05;
    float PIB_2 = 522000000000.00; 
    int pontos_turisticos_2 = 55;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("\n========= Insira as informações da primeira cidade =========\n");

    printf("Qual o primeiro estado?\n");
    scanf("%s", &estado_1);

    printf("Qual o código do primeiro estado?\n");
    scanf("%s", &codigo_1);

    printf("Qual o nome da primeira cidade?\n");
    scanf("%s", &cidade_1);

    printf("Qual o número da população da primeira cidade?\n");
    scanf("%d", &populacao_1);

    printf("Qual a área em km² da primeira cidade?\n");
    scanf("%f", &area_1);

    printf("Qual o PIB da primeira cidade?\n");
    scanf("%f", &PIB_1);

    printf("Quantos pontos turísticos tem a primeira cidade?\n");
    scanf("%d", &pontos_turisticos_1);



    printf("\n========= Insira as informações da segunda cidade =========\n");

    printf("Qual o segundo estado?\n");
    scanf("%s", &estado_2);

    printf("Qual o código do segundo estado?\n");
    scanf("%s", &codigo_2);

    printf("Qual o nome da segunda cidade?\n");
    scanf("%s", &cidade_2);

    printf("Qual o número da população da segunda cidade?\n");
    scanf("%d", &populacao_2);

    printf("Qual a área em km² da segunda cidade?\n");
    scanf("%f", &area_2);

    printf("Qual o PIB da segunda cidade?\n");
    scanf("%f", &PIB_2);

    printf("Quantos pontos turísticos tem a segunda cidade?\n");
    scanf("%d", &pontos_turisticos_2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao_1 > populacao_2) {
        printf("A população da primeira cidade é maior\n");
    } else {
        printf("A população da segunda cidade é maior\n");
    }

    if (area_1 > area_2) {
        printf("A área em km² da primeira cidade é maior\n");
    } else {
        printf("A área em km² da segunda cidade é maior\n");
    }

    if (PIB_1 > PIB_2) {
        printf("O PIB da primeira cidade é maior\n");
    } else {
        printf("O PIB da segunda cidade é maior\n");
    }

    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("A quatidade de pontos turísticos da primeira cidade é maior\n");
    } else {
        printf("A quatidade de pontos turísticos da segunda cidade é maior\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nAs cidades empataram: %s 2 x 2 %s\n", cidade_1, cidade_2);

    return 0;
}
