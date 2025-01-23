#include <stdio.h>

//funções
void bispo_recursivo(int numero){
    if(numero > 0){

       bispo_recursivo(numero - 1);
        printf("Bispo: direita, cima.\n");
    }

}

void torre_recursiva(int numero){
    if(numero > 0){

       torre_recursiva(numero - 1);
        printf("Torre: direita.\n");
    }

}

void rainha_recursiva(int numero){
    if(numero > 0){

       rainha_recursiva(numero - 1);
        printf("Rainha: esquerda.\n");
    }

}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //variaveis
    int bispo = 5, torre = 5, rainha = 8, cavalo =0, i = 0;

  /*  for(bispo = 0; bispo <= 4; bispo++){
        printf ("Bispo: direita, cima.\n");
    } */

   //chamada de funções
   bispo_recursivo(bispo);
   printf("\n");
   torre_recursiva(torre);
   printf("\n");
   rainha_recursiva(rainha);
   printf("\n");

   /* for(torre=0; torre <= 4; torre++){
        printf("Torre: direita.\n");
    }
    printf("\n"); */

   /* for(rainha=0; rainha <= 7; rainha++){
        printf("Rainha: esquerda.\n");
    } */
    
    
    // for para movimentar o cavalo
     for(cavalo, i; cavalo < 1 && i <= 1; cavalo++, i++){
        
        printf("Cavalo: cima.\n");
        printf("Cavalo: cima.\n");
        printf("Cavalo: direita.\n");
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
