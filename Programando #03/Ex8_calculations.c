/*Escreva um programa em C que leia dois números inteiros e imprima
na tela a soma, subtração, multiplicação e divisão dos dois números.*/

#include <stdio.h>

int main(){

int a;
int b;
int sum, subtraction;
float multiplication, division;

printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

sum = a + b;
subtraction = a - b;
multiplication = a * b;
division = a / b;

printf ("sum: %d, subtraction: %d, multiplication: %f, division: %f\n", sum, subtraction, multiplication, division);

return 0;
}

