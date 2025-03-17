#include <stdio.h>


void moverBispo(int linha, int coluna, int casas) {
    if (casas == 0) return;

    printf("Cima\n");
    printf("Direita\n");
    
    moverBispo(linha - 1, coluna + 1, casas - 1);
}

void moverTorre(int linha, int coluna, int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    
    moverTorre(linha, coluna + 1, casas - 1);
}

void moverRainha(int linha, int coluna, int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    
    moverRainha(linha, coluna - 1, casas - 1);
}

void moverCavalo(int linha, int coluna) {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

int main() {
    int casasBispo = 5; 
    int casasTorre = 5;  
    int casasRainha = 8; 
    
    // Movimentando o Bispo
    printf("Movimento do Bispo (direita e para cima):\n");
    moverBispo(3, 3, casasBispo);
    printf("\n");

    // Movimentando a Torre
    printf("Movimento da Torre (direita):\n");
    moverTorre(3, 3, casasTorre);
    printf("\n");

    // Movimentando a Rainha
    printf("Movimento da Rainha (esquerda):\n");
    moverRainha(3, 3, casasRainha); 
    printf("\n");

    // Movimentando o Cavalo
    printf("Movimento do Cavalo (em 'L'):\n");
    moverCavalo(3, 3);
    printf("\n");

    return 0;
}
