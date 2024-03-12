/*Escreva um programa em C que leia um número inteiro e verifique se
ele é par ou ímpar. O programa deve imprimir na tela uma mensagem
informando se o número é par ou ímpar.*/

#include <stdio.h>

int main(){

int a;

printf("Digite o valor de a: ");
scanf("%d", &a);

if (a % 2 == 0) {
    printf("%d é par\n", a);
} else {
    printf("%d é impar\n", a);
}

return 0;
}