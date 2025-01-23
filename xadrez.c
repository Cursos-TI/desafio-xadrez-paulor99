#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //variaveis
    int bispo, torre, rainha, cavalo;

    for(bispo = 0; bispo <= 4; bispo++){
        printf ("Bispo: direita, cima.\n");
    }

    printf("\n");
    for(torre=0; torre <= 4; torre++){
        printf("Torre: direita.\n");
    }
    printf("\n");

    for(rainha=0; rainha <= 7; rainha++){
        printf("Rainha: esquerda.\n");
    }
    
    printf("\n");

     for(cavalo=0; cavalo < 2; cavalo++){
        
        int i = 0;
        while(i < 1){
           printf("Cavalo: abaixo.\n");

           if(cavalo == 1){
            printf("Cavalo: esquerda.\n");
           }
            i++;
        }
    }


    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
