//Tendo como base um vetor de inteiros de tamanho 5, faça um método recursivo que substitua um valor por outro. 
//Por exemplo, metodo3(vetor, TAM, valorOriginal, valorDestino)
#include <stdio.h>

void metodo3(int vetor[], int tamanho, int valorOriginal, int valorDestino) {
    if (tamanho == 0) {
        return; 
    }
    else if (vetor[tamanho - 1] == valorOriginal) {
        vetor[tamanho - 1] = valorDestino;
    }
  
    metodo3(vetor, tamanho - 1, valorOriginal, valorDestino); 
}
int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int valorOriginal = 3;
    int valorDestino = 9;
  
    printf("Vetor original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
  
    metodo3(vetor, 5, valorOriginal, valorDestino);
    printf("\nVetor modificado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
  
    return 0;
}
