#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

 //Construir um método que receba uma matriz quadrada de inteiros e exiba de forma recursiva a diagonal principal
 //recursao da matriz
void metodo1(int matriz[5][5], int l, int c, int valores){
    if(c > 0){
        metodo1(matriz, l, c - 1, valores);
         matriz[l - 1][c - 1] = rand() % 20;
    } else if(l - 1 > 0){
        metodo1(matriz, l - 1, valores, valores);
    }
  }

void metodo1exibe(int matriz[5][5], int l, int c, int valores){
   if(c > 0){
        metodo1exibe(matriz, l , c -1 , valores);
        printf("%d\t", matriz[l - 1][c - 1]);
   } else if (l - 1> 0){
        metodo1exibe(matriz, l - 1, valores, valores);
        printf("\n");

   }
 }
        
int main(){
    int num = TAM;
    int matriz[TAM][TAM];
    int vetor[5];
    srand(time(NULL));
    metodo1(matriz, num, num, num);
    printf("Exibindo a matriz com diagonal recursiva\n");
    metodo1exibe(matriz, num, num, num);
    return 0;
 }

