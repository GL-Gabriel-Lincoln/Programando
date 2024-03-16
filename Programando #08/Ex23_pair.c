/*Desenvolva o código em C de um programa que solicita um número
inteiro 𝑛 do usuário e então imprime na tela a somatória de todos os
números pares inteiros no intervalo fechado [1, 𝑛].*/

#include <stdio.h>

int main() {

int n = 0;
int i = 1;
int result = 0;

printf("Digite o valor de n: ");
scanf("%d", &n);

while (i <= n){

    if (i % 2 == 0) {
        result += i;
    }
    i++;
}

printf("%d é o resultado\n", result);

return 0;
}