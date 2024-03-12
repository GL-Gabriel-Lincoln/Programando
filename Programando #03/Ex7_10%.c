/*Escreva um programa em C que leia o valor de um produto e calcule o
valor final com desconto de 10%. O programa deve imprimir o valor
final na tela.*/

#include <stdio.h>

int main(){

float product;
float valorFinal;

printf("Digite o valor do produto: ");
scanf("%f", &product);

valorFinal = product - (product * 0.1);

printf("Valor Final: %f\n", valorFinal);

return 0;
}