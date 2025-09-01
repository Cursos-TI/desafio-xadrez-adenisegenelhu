#include <stdio.h>

int main() {
    // Mover a torre para a direita
    int torre, i;

    printf("Movimento da Torre\n");
    printf("Digite quantas casas A direita quer mover a torre: \n");
    scanf("%d", &torre);

    for (i = 1; i <= torre; i++) {
        printf("Direita! \n", i);
    }

    // Mover a Rainha em qualquer direção
    int rainha;

    do {
        printf("\nMovimento da Rainha \n");
        printf("1. 5 casas para a direita \n");
        printf("2. 3 casas para cima \n");
        printf("3. 8 casas para a esquerda \n");
        printf("4. Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &rainha);

        switch (rainha) {
            case 1:
                printf("A Rainha moveu 5 casas para a direita! \n");
                break;

            case 2:
                printf("A Rainha moveu 3 casas para cima! \n");
                break;

            case 3:
                printf("A Rainha moveu 8 casas para a esquerda! \n");
                break;

            case 4:
                printf("Saindo do menu da Rainha...\n");
                break;

            default:
                printf("Opção inválida! \n");
        }

    } while (rainha != 4);

    // Mover o Bispo cinco casas na diagonal para cima
    int bispo = 1;

    printf("\nMovimento do Bispo \n");

    while (bispo <= 5) {
        printf("Cima, deireita! \n", bispo);
        bispo++;
    }

    // Movimento do Cavalo em "L" (2 para baixo, 1 para esquerda)
    printf("\nMovimento do Cavalo \n");

    int passosBaixo = 2;
    int passosEsquerda = 1;
    int j = 0;

    // Loop externo (for) para movimentos para baixo
    for (i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) para movimento para a esquerda
    while (j < passosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}