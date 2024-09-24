/*• Crie uma matriz A3x3 de booleanos e preencha cada posição
aleatoriamente. Crie uma matriz B3x3 de inteiros e preencha cada
posição com valores aleatórios entre 1 e 100. Depois, calcule a
seguinte fórmula:

∑    ∑
𝑖=1  𝑗=1 𝐵𝑖𝑗 , ∀ 𝑖 = 1, … , 3 𝑒 𝑗 = 1, … , 3 | 𝐴𝑖𝑗 = 𝑡𝑟𝑢e*/

#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <time.h>

int main(){

bool A[3][3];
int B[3][3];
int soma = 0;

srand(time(NULL));

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        A[i][j] = rand() % 2;
    }
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        B[i][j] = rand() % 101;
    }
}

printf("\n");

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", B[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if(A[i][j] == true){
            soma += B[i][j];
        }
    }
}

printf("\nResultado da soma: %d\n", soma);

return 0;
}