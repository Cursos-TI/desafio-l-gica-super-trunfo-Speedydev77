#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    /*
    Modificadores de tipos de dados: 
    Unsigned int ou char; trabalha somente com valores positivos incluindo o zero
    Long, long long int ou double, long double para extensão do valor de armazenamento de um número
    Short int; para valores menores que 32767

    Operadores Relacionais: a >= b, a <= b, a == b, a!= b; 
    Para fazer comparações entre valores das variáveis;
    Estruturas de decisão: if, if-else; switch
    */

    char inicio, jogo, brasilia, brasilia_1, lisboa, lisboa_1;
    char console, jogador;
    int pontos_brasilia = 0, pontos_lisboa = 0; // as variáveis calcularão os pontos das cidades;

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

    printf("\n====== JOGO SUPER TRUNFO ======\n"); //O jogo começa com a escolha de opções de letras no menu;
    printf("I - Início de Jogo\n");
    printf("R - Regras\n");
    printf("C - Configurações\n");
    printf("S - Sair\n");
    scanf("%s", &inicio);

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

    /*
    O jogo começa com as opções de letras: I = Início, R = Regras, C = Configurações, S = Sair;
    O jogador pode optar em escolhar uma de duas cidades: Escreva B para cidade de Brasília ou L para cidade de Lisboa;
    Depois escolha até dois atributos de um total de sete atributos;
    Os atributos são: A = População, B = Àrea, C = PIB, D = Pontos turísticos, E = Densidade Populacional, F = PIB per Capita e o G = Super Poder;
    O jogo exibirá automaticamente se o atributo da cidade é maior ou menor em relação ao mesmo tipo de atributo da outra cidade;
    Após selecionar dois atributos de uma mesma cidade;
    O jogo somará a pontuação de cada comparação entre os atributos;
    Por fim, o jogo exibirá qual a cidade que venceu ou se houve um empate;
    

    */
    switch (inicio)
    {
    case 'I':
    case 'i':
        printf("\n===== Iniciando o Jogo =====\n");
        printf("Escolha sua Cidade\n");
        printf("B - Brasília\n");
        printf("L - Lisboa\n");
        scanf("%s", &jogo);

        switch (jogo)
        {
        case 'B':
        case 'b':
            printf("\n===== Brasília =====\n");
            printf("Escolha dois atributos\n");
            printf("A - População\n");
            printf("B - Área\n");
            printf("C - PIB\n");
            printf("D - Pontos Turisticos\n");
            printf("E - Densidade Populacional\n");
            printf("F - PIB per Capita\n");
            printf("G - Super Poder\n");
            scanf("%s", &brasilia);

            switch (brasilia)
            {
            case 'A':
            case 'a':
                printf("\n===== População - Brasília =====\n");
                (brasilia == 'A' || 'a') && (populacao_1 > populacao_2) ? printf("A população de Brasília é maior!\n") : printf("A população de Brasília é menor!\n");
              pontos_brasilia++;

                break;
            case 'B':
            case 'b':
                printf("===== Área - Brasília =====\n");
                (brasilia == 'B' || 'b') && (area_1 > area_2) ? printf("A área de Brasília é maior!\n") : printf("A área de Brasília é menor!\n");
             pontos_brasilia++;
                break;
            case 'C':
            case 'c':
                printf("===== PIB - Brasília =====\n");
                (brasilia == 'C' || 'c') && (PIB_1 > PIB_2) ? printf("O PIB de Brasília é maior!\n") : printf("O PIB de Brasília é menor!\n");
               pontos_lisboa++;
                break;
            case 'D':
            case 'd':
                printf("===== Pontos Turísticos - Brasília =====\n");
                (brasilia == 'D' || 'd') && (pontos_turisticos_1 > pontos_turisticos_2) ? printf("O número de pontos turísticos de Brasília é maior!\n") : printf("O número de pontos turísticos de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            case 'E':
            case 'e':
                printf("===== Densidade Populacional - Brasília =====\n");
                (brasilia == 'E' || 'e') && (densidade_populacional_1 < densidade_populacional_2) ? printf("A densidade populacional de Brasília é menor!\n") : printf("A densidade populacional de Brasília é maior!\n");
               pontos_brasilia++;
                break;
            case 'F':
            case 'f':
                printf("===== PIB Per Capita - Brasília =====\n");
                (brasilia == 'F' || 'f') && (PIB_per_Capita_1 > PIB_per_Capita_2) ? printf("O PIB per Capita de Brasília é maior!\n") : printf("O PIB per Capita de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            case 'G':
            case 'g':
                printf("===== Super Poder - Brasília =====\n");
                (brasilia == 'G' || 'g') && (Super_Poder_1 > Super_Poder_2) ? printf("O atributo Super Poder de Brasília é maior!\n") : printf("O atributo Super Poder de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            
            default:
            printf("\nOpção inválida!\n");
                break;
            }

            scanf("%s", &brasilia_1);

            switch (brasilia_1)
            {
            case 'A':
            case 'a':
                printf("===== População - Brasília =====\n");
                (brasilia_1 == 'A' || 'a') && (populacao_1 > populacao_2) ? printf("A população de Brasília é maior!\n") : printf("A população de Brasília é menor!\n");
                pontos_brasilia++;
                break;
            case 'B':
            case 'b':
                printf("===== Área - Brasília =====\n");
                (brasilia_1 == 'B' || 'b') && (area_1 > area_2) ? printf("A área de Brasília é maior!\n") : printf("A área de Brasília é menor!\n");
              pontos_brasilia++;
                break;
            case 'C':
            case 'c':
                printf("===== PIB - Brasília =====\n");
                (brasilia_1 == 'C' || 'c') && (PIB_1 > PIB_2) ? printf("O PIB de Brasília é maior!\n") : printf("O PIB de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            case 'D':
            case 'd':
                printf("===== Pontos Turísticos - Brasília =====\n");
                (brasilia_1 == 'D' || 'd') && (pontos_turisticos_1 > pontos_turisticos_2) ? printf("O número de pontos turísticos de Brasília é maior!\n") : printf("O número de pontos turísticos de Brasília é menor!\n");
               pontos_lisboa++;
                break;
            case 'E':
            case 'e':
                printf("===== Densidade Populacional - Brasília =====\n");
                (brasilia_1 == 'E' || 'e') && (densidade_populacional_1 < densidade_populacional_2) ? printf("A densidade populacional de Brasília é menor!\n") : printf("A densidade populacional de Brasília é maior!\n");
              pontos_brasilia++;
                break;
            case 'F':
            case 'f':
                printf("===== PIB Per Capita - Brasília =====\n");
                (brasilia_1 == 'F' || 'f') && (PIB_per_Capita_1 > PIB_per_Capita_2) ? printf("O PIB per Capita de Brasília é maior!\n") : printf("O PIB per Capita de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            case 'G':
            case 'g':
                printf("===== Super Poder - Brasília =====\n");
                (brasilia_1 == 'G' || 'g') && (Super_Poder_1 > Super_Poder_2) ? printf("O atributo Super Poder de Brasília é maior!\n") : printf("O atributo Super Poder de Brasília é menor!\n");
              pontos_lisboa++;
                break;
            
            default:
            printf("\nOpção inválida!\n");
                break;
            }

            break;

        case 'L':
        case 'l':
            printf("\n===== Lisboa =====\n");
            printf("Escolha dois atributos\n");
            printf("A - População\n");
            printf("B - Área\n");
            printf("C - PIB\n");
            printf("D - Pontos Turisticos\n");
            printf("E - Densidade Populacional\n");
            printf("F - PIB per Capita\n");
            printf("G - Super Poder\n");
            scanf("%s", &lisboa);

            switch (lisboa)
            {
            case 'A':
            case 'a':
                printf("\n===== População - lisboa =====\n");
                (lisboa == 'A' || 'a') && (populacao_2 > populacao_1) ? printf("A população de lisboa é maior!\n") : printf("A população de lisboa é menor!\n");
                pontos_brasilia++;
                break;
            case 'B':
            case 'b':
                printf("===== Área - lisboa =====\n");
                (lisboa == 'B' || 'b') && (area_2 > area_1) ? printf("A área de lisboa é maior!\n") : printf("A área de lisboa é menor!\n");
              pontos_brasilia++;
                break;
            case 'C':
            case 'c':
                printf("===== PIB - lisboa =====\n");
                (lisboa == 'C' || 'c') && (PIB_2 > PIB_1) ? printf("O PIB de lisboa é maior!\n") : printf("O PIB de lisboa é menor!\n");
              pontos_lisboa++;
                break;
            case 'D':
            case 'd':
                printf("===== Pontos Turísticos - lisboa =====\n");
                (lisboa == 'D' || 'd') && (pontos_turisticos_2 > pontos_turisticos_1) ? printf("O número de pontos turísticos de lisboa é maior!\n") : printf("O número de pontos turísticos de lisboa é menor!\n");
              pontos_lisboa++;
                break;
            case 'E':
            case 'e':
                printf("===== Densidade Populacional - lisboa =====\n");
                (lisboa == 'E' || 'e') && (densidade_populacional_2 < densidade_populacional_1) ? printf("A densidade populacional de lisboa é menor!\n") : printf("A densidade populacional de lisboa é maior!\n");
                pontos_lisboa++;
                break;
            case 'F':
            case 'f':
                printf("===== PIB Per Capita - lisboa =====\n");
                (lisboa == 'F' || 'f') && (PIB_2 > PIB_1) ? printf("O PIB per Capita de lisboa é maior!\n") : printf("O PIB per Capita de lisboa é menor!\n");
                pontos_lisboa++;
                
                break;
            case 'G':
            case 'g':
                printf("===== Super Poder - lisboa =====\n");
                (lisboa == 'G' || 'g') && (Super_Poder_2 > Super_Poder_1) ? printf("A população de lisboa é maior!\n") : printf("A população de lisboa é menor!\n");
                pontos_lisboa++;
                break;
            
            default:
            printf("\nOpção inválida!\n");
                break;
            }

            scanf("%s", &lisboa_1);

            switch (lisboa_1)
            {
            case 'A':
            case 'a':
                printf("===== População - lisboa =====\n");
                (lisboa_1 == 'A' || 'a') && (populacao_2 > populacao_1) ? printf("A população de lisboa é maior!\n") : printf("A população de lisboa é menor!\n");
                pontos_brasilia++;
                break;
            case 'B':
            case 'b':
                printf("===== Área - lisboa =====\n");
                (lisboa_1 == 'B' || 'b') && (area_2 > area_1) ? printf("A área de lisboa é maior!\n") : printf("A área de lisboa é menor!\n");
                pontos_brasilia++;
                break;
            case 'C':
            case 'c':
                printf("===== PIB - lisboa =====\n");
                (lisboa_1 == 'C' || 'c') && (PIB_2 > PIB_1) ? printf("O PIB de lisboa é maior!\n") : printf("O PIB de lisboa é menor!\n");
                pontos_lisboa++;
                break;
            case 'D':
            case 'd':
                printf("===== Pontos Turísticos - lisboa =====\n");
                (lisboa_1 == 'D' || 'd') && (pontos_turisticos_2 > pontos_turisticos_1) ? printf("O número de pontos turísticos de lisboa é maior!\n") : printf("O número de pontos turísticos de lisboa é menor!\n");
                pontos_lisboa++;
                break;
            case 'E':
            case 'e':
                printf("===== Densidade Populacional - lisboa =====\n");
                (lisboa_1 == 'E' || 'e') && (densidade_populacional_2 < densidade_populacional_1) ? printf("A densidade populacional de lisboa é menor!\n") : printf("A densidade populacional de lisboa é maior!\n");
                pontos_lisboa++;
                break;
            case 'F':
            case 'f':
                printf("===== PIB Per Capita - lisboa =====\n");
                (lisboa_1 == 'F' || 'f') && (PIB_2 > PIB_1) ? printf("O PIB per Capita de lisboa é maior!\n") : printf("O PIB per Capita de lisboa é menor!\n");
                pontos_lisboa++;
                break;
            case 'G':
            case 'g':
                printf("===== Super Poder - lisboa =====\n");
                (lisboa_1 == 'G' || 'g') && (Super_Poder_2 > Super_Poder_1) ? printf("O atributo Super Poder de lisboa é maior!\n") : printf("O atributo Super Poder de lisboa é menor!\n");
                pontos_lisboa++;
                break;
            
            default:
            printf("\nOpção inválida!\n");
                break;
            }

            break;

            break;
        
        default:
        printf("\nOpção inválida!\n");
            break;
        }

        break;
    case 'R':
    case 'r':
         printf("Regras\n");
        break;
    case 'C':
    case 'c':
        printf("Configurações\n");
        break;
    case 'S':
    case 's':
        printf("Sair\n");
        break;
    
    default:
    printf("\nOpção inválida!\n");
        break;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n===== Resultado Final =====\n");
        if (pontos_brasilia > pontos_lisboa) {
            printf("### Brasília venceu! ###\n");
        } else if (pontos_brasilia < pontos_lisboa) {
            printf("### Lisboa venceu! ###\n");
        } else {
            printf("### As cidades empataram ###!\n");
        }


    return 0;
}
