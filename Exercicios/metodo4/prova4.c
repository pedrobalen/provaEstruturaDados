//Tendo como base uma matriz quadrada de inteiros, faça um método recursivo que exiba uma determinada linha da matriz. 
//Por exemplo, metodo4(matriz, TAML, TAMC, linha).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void metodo4(int matriz[][5], int TAM, int linha) {
    if (linha >= TAM) {
        return;
    }

    for (int coluna = 0; coluna < TAM; coluna++) {
        printf("%d ", matriz[linha][coluna]);
    }

    printf("\n");
}

int main() {
    srand(time(NULL));
    int TAM = 5;
    int matriz[TAM][TAM];
    int linha = 2; 

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nLinha %d da matriz:\n", linha);

    metodo4(matriz, TAM, linha);

    return 0;
}
