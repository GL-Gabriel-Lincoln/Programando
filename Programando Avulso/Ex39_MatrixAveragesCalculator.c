/*Crie uma matriz A10x10 de inteiros e preencha cada posição com um 
valor aleatório entre 0 e 10. Depois, imprima a matriz na tela e 
imprima a média de cada linha e a média de cada coluna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int A[10][10];

float soma, media;

srand(time(NULL));

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        A[i][j] = rand() % 11;
    }
}

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 10; i++) {
    soma = 0;

    for (int j = 0; j < 10; j++) {
        soma += A[i][j]; 
    }
    
    media = soma / 10.0;
    printf("Média da linha %d: %.2f\n", i + 1, media);
}

for (int j = 0; j < 10; j++) {
    soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += A[i][j];
    }
    
    media = soma / 10.0;

    printf("Média da coluna %d: %.2f\n", j + 1, media);
}

return 0;
}