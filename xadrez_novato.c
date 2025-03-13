#include <stdio.h>

int main () {
  
    //Mover a Torre 6 casas para esquerda
    for (int i = 0; i < 6; i++){
        printf("Torre foi para\n");
        printf("Esquerda\n");
    }
    //Mover o Bispo 5 casas para cima e 5 casas para direita
    int i = 1;
   
    while (i <= 5) {
        printf("o Bispo foi para\n");
        printf("Cima,Direita\n", i);
        i++;
    }
    //Mover o Rei 3 casas para baixo
    for (int i = 0; i < 3; i++){
        printf("Rainha foi para\n");
        printf("Baixo\n");
    }



    
    return 0;

}