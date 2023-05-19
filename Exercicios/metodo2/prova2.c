//Tendo como base um vetor de inteiros de tamanho 5, faça um método recursivo para preencher o vetor com dados vindos do usuário.
#include <stdio.h>
#include <stdlib.h>

void metodo2(int vetor[], int tamanho, int posicao) {
    if (posicao >= tamanho) {
        return;
    }
    printf("Digite o valor para a posicao %d: ", posicao);
    scanf("%d", &vetor[posicao]);

    metodo2(vetor, tamanho, posicao + 1);
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = (int*) malloc(tamanho * sizeof(int));

    printf("Preencha o vetor de tamanho %d:\n", tamanho);
    metodo2(vetor, tamanho, 0);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
