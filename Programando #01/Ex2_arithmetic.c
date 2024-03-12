/*Escreva um programa em C que calcule a média aritmética de três
números inteiros e imprima o resultado na tela.*/

#include <stdio.h>

int main(){

int average_arithmetic;
int a;
int b;
int c;

a = 2;
b = 3;
c = 4;

average_arithmetic = (a + b + c) / 3;

printf("average_arithmetic = %d\n", average_arithmetic);

    return 0;
}