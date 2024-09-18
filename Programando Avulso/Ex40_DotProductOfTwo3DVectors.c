/*Faça um programa que leia dois vetores tridimensionais do usuário. 
Depois, imprima a multiplicação escalar dos vetores.*/


#include <stdio.h>

int main() {

int A[3];
int B[3];
int produtoEscalar;

printf("Insira as componentes do primeiro vetor (x, y, z):\n");
for(int i = 0; i < 3; i++) {
    scanf("%d", &A[i]);
}

printf("Insira as componentes do segundo vetor (x, y, z):\n");
for(int i = 0; i < 3; i++) {
    scanf("%d", &B[i]);
}

produtoEscalar = A[0] * B[0] + A[1] * B[1] + A[2] * B[2];

printf("Resultado da multiplicação escalar: %d\n", produtoEscalar);

return 0;
}