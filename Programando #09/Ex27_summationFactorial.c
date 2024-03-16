/*Desenvolva um programa em C que recebe um valor inteiro 𝑛 e
imprima na tela o valor da seguinte fórmula:
1/1! + 1/2! + ⋯ + 1/𝑛!*/

#include <stdio.h>

int main() {

int n;
double result = 1.0;
double sum = 0;

printf("Digite o valor de n: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++) {
    result *= i;
    sum += 1.0 / result;

}

printf("Resultado = %.200f\n", sum);

return 0;
}