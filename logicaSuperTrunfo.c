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
    Estruturas de decisão: if, if-else; switch
    */
    
    int escolha_jogador, escolha_console, escolha_jogador1, escolha_console1; //Variáveis para inserir o valor do jogador


    char estado_1[50] = "Brasil";
    char codigo_1[5] = "A01";
    char cidade_1[50] = "Brasilia";
    int populacao_1 = 2817381;
    float area_1 = 5760.78;
    float PIB_1 = 265847334.00;
    int pontos_turisticos_1 = 32;
    float densidade_populacional_1 = populacao_1 / area_1; //A densidade populacional será calculada automaticamente pelo quociente entre a população e a área da cidade
    float PIB_per_Capita_1 = PIB_1 / populacao_1; //O pib per capita será calculado automaticamente pelo quociente entre a população e o PIB da cidade
    float Super_Poder_1 = populacao_1 + area_1 + PIB_1 + pontos_turisticos_1 + densidade_populacional_1 + PIB_per_Capita_1; // O super poder será calculado automaticamente pela soma de todas as propriedades de uma cidade


    char estado_2[50] = "Portugal";
    char codigo_2[5] = "E01";
    char cidade_2[50] = "Lisboa";
    int populacao_2 = 567131;
    float area_2 = 100.05;
    float PIB_2 = 522000000000.00; 
    int pontos_turisticos_2 = 55;
    float densidade_populacional_2 = populacao_2 / area_2; //A densidade populacional será calculada automaticamente pelo quociente entre a população e a área da cidade
    float PIB_per_Capita_2 = PIB_2 / populacao_2; //O pib per capita será calculado automaticamente pelo quociente entre a população e o PIB da cidade
    float Super_Poder_2 = populacao_2 + area_2 + PIB_2 + pontos_turisticos_2 + densidade_populacional_2 + PIB_per_Capita_2;

    
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
    scanf("%s", estado_1);

    printf("Qual o código do primeiro estado?\n");
    scanf("%s", codigo_1);

    printf("Qual o nome da primeira cidade?\n");
    scanf("%s", cidade_1);

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
    scanf("%s", estado_2);

    printf("Qual o código do segundo estado?\n");
    scanf("%s", codigo_2);

    printf("Qual o nome da segunda cidade?\n");
    scanf("%s", cidade_2);

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

    /*
    ==== Explicação do jogo =====

    O jogo começa com a escolha de duas opções de cidades:
    Cidade 1 = Brasília
    Cidade 2 = Lisboa
    Para cada cidade escolhida é possível escolher um atributo para comparação
    O atributo escolhido pode ser: população, área, PIB, pontos turísticos, densidade populacional, PIB per capita e o super poder
    O jogo irá fazer a comparação do atributo entre duas cidades
    O jogo exibirá qual é o atributo maior ou menor e qual a cidade que venceu
    */

    printf("\n===== Menu de Cartas Super Trunfo =====\n");
    printf("\nEscolha o número da cidade:\n");
    printf("Cidade 1 - Brasília\n");
    printf("Cidade 2 - Lisboa\n");
    scanf("%d", &escolha_jogador);

    /*
    As estrutura de decisões são: if, else, if-else, switch
    De acordo com o formato da sintaxe, pode formar uma estrutura de decisão encadeada ou aninhada
    Para a comparação, pode-se combinar:
    Operadores lógicos como: && = AND, || = OR, ! = Invertido
    Operadores Relacionais: a >= b, a <= b, a == b, a != b;

    Estrutura de decisão switch:
    A estrutura if e else pode ser substituida ou incrementada a sintaxe do switch
    A estrutura switch é iniciada com um valor que posteriormente será o valor do caze escolhido 
    O caze escolhido inicia a execução de um bloco de código
    Desta forma, pode-se criar um bloco de multiplas escolhas com um switch dentro de um caze, incrementar o if, else, if-else
    */


    switch (escolha_jogador) {
        case 1:
            printf("Cidade escolhida: Brasília\n");
            printf("Escolha o número do atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos turisticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &escolha_jogador1);
            switch (escolha_jogador1) {
                case 1:
                    printf("Você escolheu o atributo: População - Brasília\n");
                if(populacao_1 > populacao_2){
                    printf("A população de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("A população de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 2:
                    printf("Você escolheu o atributo: Área - Brasília\n");
                if(area_1 > area_2){
                    printf("A área de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("A área de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 3:
                    printf("Você escolheu o atributo: PIB - Brasília\n");
                if(PIB_1 > PIB_2){
                    printf("O PIB de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("O PIB de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 4:
                    printf("Você escolheu o atributo: Pontos turisticos - Brasília\n");
                if(pontos_turisticos_1 > pontos_turisticos_2){
                    printf("O número de pontos turísticos de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("O número de pontos turísticos de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 5:
                    printf("Você escolheu o atributo: Densidade populacional - Brasília\n");
                if(densidade_populacional_1 < densidade_populacional_2){
                    printf("A densidade populacional de Brasília é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("A densidade populacional de Brasília é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 6:
                    printf("Você escolheu o atributo: PIB per Capita - Brasília\n");
                if(PIB_per_Capita_1 > PIB_per_Capita_2){
                    printf("O PIB per Capita de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("O PIB per Capita de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                case 7:
                    printf("Você escolheu o atributo: Super Poder - Brasília\n");
                if(Super_Poder_1 > Super_Poder_2){
                    printf("O atributo Super Poder de Brasília é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                } else {
                    printf("O atributo Super Poder de Brasília é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                }
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
            }
            break;

        case 2:
            printf("Cidade escolhida: Lisboa\n");
            printf("Escolha o número do atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos turisticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            scanf("%d", &escolha_jogador1);
            switch (escolha_jogador1) {
                case 1:
                    printf("Você escolheu o atributo: População - Lisboa\n");
                if(populacao_2 > populacao_1){
                    printf("A população de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("A população de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 2:
                    printf("Você escolheu o atributo: Área - Lisboa\n");
                if(area_2 > area_1){
                    printf("A área de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("A área de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 3:
                    printf("Você escolheu o atributo: PIB - Lisboa\n");
                if(PIB_2 > PIB_1){
                    printf("O PIB de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("O PIB de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 4:
                    printf("Você escolheu o atributo: Pontos turisticos - Lisboa\n");
                if(pontos_turisticos_2 > pontos_turisticos_1){
                    printf("O número de pontos turísticos de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("O número de pontos turísticos de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 5:
                    printf("Você escolheu o atributo: Densidade populacional - Lisboa\n");
                if(densidade_populacional_2 < densidade_populacional_1){
                    printf("A densidade populacional de Lisboa é menor!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("A densidade populacional de Lisboa é maior!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 6:
                    printf("Você escolheu o atributo: PIB per Capita - Lisboa\n");
                if(PIB_per_Capita_2 > PIB_per_Capita_1){
                    printf("O PIB per capita de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("O PIB per capita de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                case 7:
                    printf("Você escolheu o atributo: Super Poder - Lisboa\n");
                if(Super_Poder_2 > Super_Poder_1){
                    printf("O atributo Super Poder de Lisboa é maior!\n");
                    printf("A cidade vencedora: Lisboa!\n");
                } else {
                    printf("O atributo Super Poder de Lisboa é menor!\n");
                    printf("A cidade vencedora: Brasília!\n");
                }
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    return 0;
}
