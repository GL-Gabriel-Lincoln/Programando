/*Crie uma matriz A10x5 e preencha com valores aleatórios entre 1 e 10. 
Posteriormente, imprima na tela os maiores valores de cada coluna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int A[10][5];
int maior;

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
        A[i][j] = rand() % 11;
    }
}

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}


for (int j = 0; j < 5; j++) {
    maior = A[0][j]; 

    
    for (int i = 1; i < 10; i++) {
        if (A[i][j] > maior) {
            maior = A[i][j];
        }
    }
    
    printf("Maior valor da coluna %d: %d\n", j + 1, maior);
}

return 0;
}