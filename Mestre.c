#include <stdio.h>

// ---------------- TORRE ----------------
// Função recursiva para mover a torre (somente para a direita)
void moverTorre(int casas) {
    if (casas == 0) {
        return; // caso base: nenhuma casa para mover
    }
    moverTorre(casas - 1); // chamada recursiva
    printf("Direita\n");   // imprime após a recursão para manter ordem
}

// ---------------- RAINHA ----------------
// Função recursiva genérica para movimentos da Rainha
void moverRainha(char direcao[], int casas) {
    if (casas == 0) {
        return; // caso base
    }
    printf("%s\n", direcao);
    moverRainha(direcao, casas - 1); // chamada recursiva reduzindo casas
}

// ---------------- BISPO ----------------
// Bispo com recursividade (diagonal direita para cima)
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return; 
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Bispo com loops aninhados (diagonal)
// Loop externo = vertical, interno = horizontal
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {      // movimento vertical
        for (int j = 0; j < 1; j++) {      // movimento horizontal
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// ---------------- CAVALO ----------------
// Movimento em "L": duas casas para cima e uma para a direita
void moverCavalo() {
    for (int i = 0; i < 3; i++) {       // controla os passos
        for (int j = 0; j < 2; j++) {   // sub-loop para validar direções
            if (i < 2 && j == 0) {
                printf("Cima\n"); // duas casas para cima
                continue;         // vai para próxima iteração
            }
            if (i == 2 && j == 1) {
                printf("Direita\n"); // uma casa para a direita
                break;               // sai do loop interno
            }
        }
    }
}

// ---------------- MAIN ----------------
int main() {
    // ---------------- TORRE ----------------
    printf("Movimento da Torre:\n");
    int casasTorre = 4; // número de casas definido diretamente no código
    moverTorre(casasTorre);

    // ---------------- RAINHA ----------------
    printf("\nMovimento da Rainha:\n");
    moverRainha("Direita", 5);
    moverRainha("Cima", 3);
    moverRainha("Esquerda", 8);

    // ---------------- BISPO ----------------
    printf("\nMovimento do Bispo (recursividade):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoLoop(5);

    // ---------------- CAVALO ----------------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
