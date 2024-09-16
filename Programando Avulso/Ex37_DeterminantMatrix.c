/*Seja uma matriz A3x3 informada pelo usuário. Calcule e imprima na 
tela o determinante de A*/

#include <stdio.h>

int main(){

int A[3][3];
int detA;

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        printf("Insira o valor da posição [%d][%d]: ", i+1, j+1);
        scanf("%d", &A[i][j]);
    }
}

detA = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
            - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
            + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

printf("A determinante da sua matriz é: %d\n", detA);

return 0;
}