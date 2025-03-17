#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha o movimento do cavalo:\n");
    printf("1 - Cima -> Cima -> Esquerda\n");
    printf("2 - Cima -> Cima -> Direita\n");
    printf("Digite a opção (1 ou 2): ");
    scanf("%d", &opcao);

   
    if (opcao == 1) {
        
        printf("Movimento 1:\n");
        for (int i = 0; i < 1; i++) {  
            printf("Cima\n");
            printf("Cima\n");
            printf("Esquerda\n");
        }
    } 
    else if (opcao == 2) {
       
        printf("Movimento 2:\n");
        int i = 0;
        while (i < 1) { 
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            i++; 
        }
    } 
    else {
        printf("Opção inválida\n");
    }

    return 0;
}
