//Tendo como base um vetor de inteiros, faça um método recursivo que retorne a quantidade de números presentes na faixa. 
//Por exemplo, metodo5(vetor, TAM, ini, fim).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int metodo5(int vetor[], int tamanho, int inicio, int fim) {
    if (tamanho == 0 || inicio > fim) {
        return 0;
    }

}

int main() {
    srand(time(NULL));
    int tamanho = 10;
    int vetor[tamanho]; 
    int i;
    
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 10 + 1;
    }
    
    int inicio = 3;
    int fim = 7;
    
    int quantidade = metodo5(vetor, tamanho, inicio, fim);
    
    printf("Quantidade de números na faixa [%d, %d]: %d\n", inicio, fim, quantidade);
    
    return 0;
}
