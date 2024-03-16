/*Desenvolva o código em C de um programa que recebe uma variável
real x e imprime na tela se o valor recebido está entre 0 e 1.*/

#include <stdio.h>

int main () {

float x;

printf("Digite o valor de x: ");
scanf("%f", &x);

if(x > 0 && x < 1) {

    printf("%f esta entre 0 e 1\n", x);
} else {

    printf("%f não esta entre 0 e 1\n", x);
}

return 0;    
}