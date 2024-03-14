/*Faça um programa que leia um número inteiro e informe se ele é
positivo, negativo ou zero.*/

#include <stdio.h>

int main() {

int x; 

printf("Digite o valor de x: ");
scanf("%d", &x);

if (x == 0) {

    printf("%d é igual a 0\n", x);
} else if(x < 0) {

    printf("%d é negativo\n", x);
} else {

    printf("%d é positivo\n", x);
}

return 0;
}